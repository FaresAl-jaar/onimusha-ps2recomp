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

// Function: sub_00245278
// Address: 0x245278 - 0x245334
void sub_00245278_0x245278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245278_0x245278");
#endif

    switch (ctx->pc) {
        case 0x245278u: goto label_245278;
        case 0x24527cu: goto label_24527c;
        case 0x245280u: goto label_245280;
        case 0x245284u: goto label_245284;
        case 0x245288u: goto label_245288;
        case 0x24528cu: goto label_24528c;
        case 0x245290u: goto label_245290;
        case 0x245294u: goto label_245294;
        case 0x245298u: goto label_245298;
        case 0x24529cu: goto label_24529c;
        case 0x2452a0u: goto label_2452a0;
        case 0x2452a4u: goto label_2452a4;
        case 0x2452a8u: goto label_2452a8;
        case 0x2452acu: goto label_2452ac;
        case 0x2452b0u: goto label_2452b0;
        case 0x2452b4u: goto label_2452b4;
        case 0x2452b8u: goto label_2452b8;
        case 0x2452bcu: goto label_2452bc;
        case 0x2452c0u: goto label_2452c0;
        case 0x2452c4u: goto label_2452c4;
        case 0x2452c8u: goto label_2452c8;
        case 0x2452ccu: goto label_2452cc;
        case 0x2452d0u: goto label_2452d0;
        case 0x2452d4u: goto label_2452d4;
        case 0x2452d8u: goto label_2452d8;
        case 0x2452dcu: goto label_2452dc;
        case 0x2452e0u: goto label_2452e0;
        case 0x2452e4u: goto label_2452e4;
        case 0x2452e8u: goto label_2452e8;
        case 0x2452ecu: goto label_2452ec;
        case 0x2452f0u: goto label_2452f0;
        case 0x2452f4u: goto label_2452f4;
        case 0x2452f8u: goto label_2452f8;
        case 0x2452fcu: goto label_2452fc;
        case 0x245300u: goto label_245300;
        case 0x245304u: goto label_245304;
        case 0x245308u: goto label_245308;
        case 0x24530cu: goto label_24530c;
        case 0x245310u: goto label_245310;
        case 0x245314u: goto label_245314;
        case 0x245318u: goto label_245318;
        case 0x24531cu: goto label_24531c;
        case 0x245320u: goto label_245320;
        case 0x245324u: goto label_245324;
        case 0x245328u: goto label_245328;
        case 0x24532cu: goto label_24532c;
        case 0x245330u: goto label_245330;
        default: break;
    }

    ctx->pc = 0x245278u;

label_245278:
    // 0x245278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24527c:
    // 0x24527c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24527cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_245280:
    // 0x245280: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x245280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245284:
    // 0x245284: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x245284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_245288:
    // 0x245288: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_24528c:
    if (ctx->pc == 0x24528Cu) {
        ctx->pc = 0x24528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245288u;
        // 0x24528c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245290u;
        goto label_245290;
    }
    ctx->pc = 0x245288u;
    {
        const bool branch_taken_0x245288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245288u;
        // 0x24528c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245288) {
            ctx->pc = 0x2452A0u;
            goto label_2452a0;
        }
    }
    ctx->pc = 0x245290u;
label_245290:
    // 0x245290: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245294:
    // 0x245294: 0x10000011  b           . + 4 + (0x11 << 2)
label_245298:
    if (ctx->pc == 0x245298u) {
        ctx->pc = 0x245298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245294u;
        // 0x245298: 0x2484c640  addiu       $a0, $a0, -0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24529Cu;
        goto label_24529c;
    }
    ctx->pc = 0x245294u;
    {
        const bool branch_taken_0x245294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245294u;
        // 0x245298: 0x2484c640  addiu       $a0, $a0, -0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245294) {
            ctx->pc = 0x2452DCu;
            goto label_2452dc;
        }
    }
    ctx->pc = 0x24529Cu;
label_24529c:
    // 0x24529c: 0x0  nop
    ctx->pc = 0x24529cu;
    // NOP
label_2452a0:
    // 0x2452a0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2452a4:
    if (ctx->pc == 0x2452A4u) {
        ctx->pc = 0x2452A8u;
        goto label_2452a8;
    }
    ctx->pc = 0x2452A0u;
    {
        const bool branch_taken_0x2452a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2452a0) {
            ctx->pc = 0x2452B8u;
            goto label_2452b8;
        }
    }
    ctx->pc = 0x2452A8u;
label_2452a8:
    // 0x2452a8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2452a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2452ac:
    // 0x2452ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_2452b0:
    if (ctx->pc == 0x2452B0u) {
        ctx->pc = 0x2452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452ACu;
        // 0x2452b0: 0x2484c668  addiu       $a0, $a0, -0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452B4u;
        goto label_2452b4;
    }
    ctx->pc = 0x2452ACu;
    {
        const bool branch_taken_0x2452ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452ACu;
        // 0x2452b0: 0x2484c668  addiu       $a0, $a0, -0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452ac) {
            ctx->pc = 0x2452DCu;
            goto label_2452dc;
        }
    }
    ctx->pc = 0x2452B4u;
label_2452b4:
    // 0x2452b4: 0x0  nop
    ctx->pc = 0x2452b4u;
    // NOP
label_2452b8:
    // 0x2452b8: 0xc090e62  jal         func_243988
label_2452bc:
    if (ctx->pc == 0x2452BCu) {
        ctx->pc = 0x2452C0u;
        goto label_2452c0;
    }
    ctx->pc = 0x2452B8u;
    SET_GPR_U32(ctx, 31, 0x2452C0u);
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x2452B8u, 0x2452C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452C0u;
label_2452c0:
    // 0x2452c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2452c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2452c4:
    // 0x2452c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2452c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2452c8:
    // 0x2452c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2452c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2452cc:
    // 0x2452cc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_2452d0:
    if (ctx->pc == 0x2452D0u) {
        ctx->pc = 0x2452D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452CCu;
        // 0x2452d0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452D4u;
        goto label_2452d4;
    }
    ctx->pc = 0x2452CCu;
    {
        const bool branch_taken_0x2452cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2452D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452CCu;
        // 0x2452d0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452cc) {
            ctx->pc = 0x2452F0u;
            goto label_2452f0;
        }
    }
    ctx->pc = 0x2452D4u;
label_2452d4:
    // 0x2452d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2452d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2452d8:
    // 0x2452d8: 0x2484c690  addiu       $a0, $a0, -0x3970
    ctx->pc = 0x2452d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952592));
label_2452dc:
    // 0x2452dc: 0xc090d8a  jal         func_243628
label_2452e0:
    if (ctx->pc == 0x2452E0u) {
        ctx->pc = 0x2452E4u;
        goto label_2452e4;
    }
    ctx->pc = 0x2452DCu;
    SET_GPR_U32(ctx, 31, 0x2452E4u);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2452DCu, 0x2452E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452E4u;
label_2452e4:
    // 0x2452e4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2452e8:
    if (ctx->pc == 0x2452E8u) {
        ctx->pc = 0x2452E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452E4u;
        // 0x2452e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2452ECu;
        goto label_2452ec;
    }
    ctx->pc = 0x2452E4u;
    {
        const bool branch_taken_0x2452e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452E4u;
        // 0x2452e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452e4) {
            ctx->pc = 0x245320u;
            goto label_245320;
        }
    }
    ctx->pc = 0x2452ECu;
label_2452ec:
    // 0x2452ec: 0x0  nop
    ctx->pc = 0x2452ecu;
    // NOP
label_2452f0:
    // 0x2452f0: 0xc049590  jal         func_125640
label_2452f4:
    if (ctx->pc == 0x2452F4u) {
        ctx->pc = 0x2452F8u;
        goto label_2452f8;
    }
    ctx->pc = 0x2452F0u;
    SET_GPR_U32(ctx, 31, 0x2452F8u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2452F0u, 0x2452F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452F8u;
label_2452f8:
    // 0x2452f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2452f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2452fc:
    // 0x2452fc: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x2452fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_245300:
    // 0x245300: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245304:
    // 0x245304: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x245304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_245308:
    // 0x245308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24530c:
    // 0x24530c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x24530cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_245310:
    // 0x245310: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_245314:
    if (ctx->pc == 0x245314u) {
        ctx->pc = 0x245314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245310u;
        // 0x245314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245318u;
        goto label_245318;
    }
    ctx->pc = 0x245310u;
    {
        const bool branch_taken_0x245310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245310u;
        // 0x245314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245310) {
            ctx->pc = 0x245320u;
            goto label_245320;
        }
    }
    ctx->pc = 0x245318u;
label_245318:
    // 0x245318: 0x60f809  jalr        $v1
label_24531c:
    if (ctx->pc == 0x24531Cu) {
        ctx->pc = 0x245320u;
        goto label_245320;
    }
    ctx->pc = 0x245318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245320u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245318u, 0x245320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245320u;
label_245320:
    // 0x245320: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x245320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_245324:
    // 0x245324: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x245324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_245328:
    // 0x245328: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x245328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24532c:
    // 0x24532c: 0x3e00008  jr          $ra
label_245330:
    if (ctx->pc == 0x245330u) {
        ctx->pc = 0x245330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24532Cu;
        // 0x245330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245334u;
        goto label_fallthrough_0x24532c;
    }
    ctx->pc = 0x24532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24532Cu;
        // 0x245330: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24532Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24532c:
    ctx->pc = 0x245334u;
}
