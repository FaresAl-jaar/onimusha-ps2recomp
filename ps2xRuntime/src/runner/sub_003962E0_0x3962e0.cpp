#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003962E0
// Address: 0x3962e0 - 0x396374
void sub_003962E0_0x3962e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003962E0_0x3962e0");
#endif

    switch (ctx->pc) {
        case 0x3962e0u: goto label_3962e0;
        case 0x3962e4u: goto label_3962e4;
        case 0x3962e8u: goto label_3962e8;
        case 0x3962ecu: goto label_3962ec;
        case 0x3962f0u: goto label_3962f0;
        case 0x3962f4u: goto label_3962f4;
        case 0x3962f8u: goto label_3962f8;
        case 0x3962fcu: goto label_3962fc;
        case 0x396300u: goto label_396300;
        case 0x396304u: goto label_396304;
        case 0x396308u: goto label_396308;
        case 0x39630cu: goto label_39630c;
        case 0x396310u: goto label_396310;
        case 0x396314u: goto label_396314;
        case 0x396318u: goto label_396318;
        case 0x39631cu: goto label_39631c;
        case 0x396320u: goto label_396320;
        case 0x396324u: goto label_396324;
        case 0x396328u: goto label_396328;
        case 0x39632cu: goto label_39632c;
        case 0x396330u: goto label_396330;
        case 0x396334u: goto label_396334;
        case 0x396338u: goto label_396338;
        case 0x39633cu: goto label_39633c;
        case 0x396340u: goto label_396340;
        case 0x396344u: goto label_396344;
        case 0x396348u: goto label_396348;
        case 0x39634cu: goto label_39634c;
        case 0x396350u: goto label_396350;
        case 0x396354u: goto label_396354;
        case 0x396358u: goto label_396358;
        case 0x39635cu: goto label_39635c;
        case 0x396360u: goto label_396360;
        case 0x396364u: goto label_396364;
        case 0x396368u: goto label_396368;
        case 0x39636cu: goto label_39636c;
        case 0x396370u: goto label_396370;
        default: break;
    }

    ctx->pc = 0x3962e0u;

label_3962e0:
    // 0x3962e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3962e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3962e4:
    // 0x3962e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3962e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3962e8:
    // 0x3962e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3962e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3962ec:
    // 0x3962ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3962ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3962f0:
    // 0x3962f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3962f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3962f4:
    // 0x3962f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3962f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3962f8:
    // 0x3962f8: 0x90842b28  lbu         $a0, 0x2B28($a0)
    ctx->pc = 0x3962f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11048)));
label_3962fc:
    // 0x3962fc: 0xc0b2ebc  jal         func_2CBAF0
label_396300:
    if (ctx->pc == 0x396300u) {
        ctx->pc = 0x396300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3962FCu;
        // 0x396300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396304u;
        goto label_396304;
    }
    ctx->pc = 0x3962FCu;
    SET_GPR_U32(ctx, 31, 0x396304u);
    ctx->pc = 0x396300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962FCu;
    // 0x396300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3962FCu, 0x396304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396304u;
label_396304:
    // 0x396304: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x396304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_396308:
    // 0x396308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39630c:
    // 0x39630c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_396310:
    if (ctx->pc == 0x396310u) {
        ctx->pc = 0x396310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39630Cu;
        // 0x396310: 0xae232b28  sw          $v1, 0x2B28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396314u;
        goto label_396314;
    }
    ctx->pc = 0x39630Cu;
    {
        const bool branch_taken_0x39630c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39630Cu;
        // 0x396310: 0xae232b28  sw          $v1, 0x2B28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39630c) {
            ctx->pc = 0x396360u;
            goto label_396360;
        }
    }
    ctx->pc = 0x396314u;
label_396314:
    // 0x396314: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x396314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_396318:
    // 0x396318: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x396318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_39631c:
    // 0x39631c: 0x320f809  jalr        $t9
label_396320:
    if (ctx->pc == 0x396320u) {
        ctx->pc = 0x396320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39631Cu;
        // 0x396320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396324u;
        goto label_396324;
    }
    ctx->pc = 0x39631Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396324u);
        ctx->pc = 0x396320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39631Cu;
        // 0x396320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39631Cu, 0x396324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396324u;
label_396324:
    // 0x396324: 0x7a290020  lq          $t1, 0x20($s1)
    ctx->pc = 0x396324u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_396328:
    // 0x396328: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x396328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_39632c:
    // 0x39632c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_396330:
    // 0x396330: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x396330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_396334:
    // 0x396334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x396334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396338:
    // 0x396338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39633c:
    // 0x39633c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39633cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396340:
    // 0x396340: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x396340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_396344:
    // 0x396344: 0x7e090020  sq          $t1, 0x20($s0)
    ctx->pc = 0x396344u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 9));
label_396348:
    // 0x396348: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x396348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_39634c:
    // 0x39634c: 0xc0b273c  jal         func_2C9CF0
label_396350:
    if (ctx->pc == 0x396350u) {
        ctx->pc = 0x396350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39634Cu;
        // 0x396350: 0xa2020640  sb          $v0, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396354u;
        goto label_396354;
    }
    ctx->pc = 0x39634Cu;
    SET_GPR_U32(ctx, 31, 0x396354u);
    ctx->pc = 0x396350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39634Cu;
    // 0x396350: 0xa2020640  sb          $v0, 0x640($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x39634Cu, 0x396354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396354u;
label_396354:
    // 0x396354: 0xc0e5900  jal         func_396400
label_396358:
    if (ctx->pc == 0x396358u) {
        ctx->pc = 0x396358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396354u;
        // 0x396358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39635Cu;
        goto label_39635c;
    }
    ctx->pc = 0x396354u;
    SET_GPR_U32(ctx, 31, 0x39635Cu);
    ctx->pc = 0x396358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396354u;
    // 0x396358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396400u, 0x396354u, 0x39635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39635Cu;
label_39635c:
    // 0x39635c: 0x0  nop
    ctx->pc = 0x39635cu;
    // NOP
label_396360:
    // 0x396360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396364:
    // 0x396364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396368:
    // 0x396368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39636c:
    // 0x39636c: 0x3e00008  jr          $ra
label_396370:
    if (ctx->pc == 0x396370u) {
        ctx->pc = 0x396370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39636Cu;
        // 0x396370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396374u;
        goto label_fallthrough_0x39636c;
    }
    ctx->pc = 0x39636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39636Cu;
        // 0x396370: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39636Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39636c:
    ctx->pc = 0x396374u;
}
