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

// Function: sub_00245338
// Address: 0x245338 - 0x245404
void sub_00245338_0x245338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245338_0x245338");
#endif

    switch (ctx->pc) {
        case 0x245338u: goto label_245338;
        case 0x24533cu: goto label_24533c;
        case 0x245340u: goto label_245340;
        case 0x245344u: goto label_245344;
        case 0x245348u: goto label_245348;
        case 0x24534cu: goto label_24534c;
        case 0x245350u: goto label_245350;
        case 0x245354u: goto label_245354;
        case 0x245358u: goto label_245358;
        case 0x24535cu: goto label_24535c;
        case 0x245360u: goto label_245360;
        case 0x245364u: goto label_245364;
        case 0x245368u: goto label_245368;
        case 0x24536cu: goto label_24536c;
        case 0x245370u: goto label_245370;
        case 0x245374u: goto label_245374;
        case 0x245378u: goto label_245378;
        case 0x24537cu: goto label_24537c;
        case 0x245380u: goto label_245380;
        case 0x245384u: goto label_245384;
        case 0x245388u: goto label_245388;
        case 0x24538cu: goto label_24538c;
        case 0x245390u: goto label_245390;
        case 0x245394u: goto label_245394;
        case 0x245398u: goto label_245398;
        case 0x24539cu: goto label_24539c;
        case 0x2453a0u: goto label_2453a0;
        case 0x2453a4u: goto label_2453a4;
        case 0x2453a8u: goto label_2453a8;
        case 0x2453acu: goto label_2453ac;
        case 0x2453b0u: goto label_2453b0;
        case 0x2453b4u: goto label_2453b4;
        case 0x2453b8u: goto label_2453b8;
        case 0x2453bcu: goto label_2453bc;
        case 0x2453c0u: goto label_2453c0;
        case 0x2453c4u: goto label_2453c4;
        case 0x2453c8u: goto label_2453c8;
        case 0x2453ccu: goto label_2453cc;
        case 0x2453d0u: goto label_2453d0;
        case 0x2453d4u: goto label_2453d4;
        case 0x2453d8u: goto label_2453d8;
        case 0x2453dcu: goto label_2453dc;
        case 0x2453e0u: goto label_2453e0;
        case 0x2453e4u: goto label_2453e4;
        case 0x2453e8u: goto label_2453e8;
        case 0x2453ecu: goto label_2453ec;
        case 0x2453f0u: goto label_2453f0;
        case 0x2453f4u: goto label_2453f4;
        case 0x2453f8u: goto label_2453f8;
        case 0x2453fcu: goto label_2453fc;
        case 0x245400u: goto label_245400;
        default: break;
    }

    ctx->pc = 0x245338u;

label_245338:
    // 0x245338: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24533c:
    // 0x24533c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_245340:
    // 0x245340: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x245340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245344:
    // 0x245344: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x245344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_245348:
    // 0x245348: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x245348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24534c:
    // 0x24534c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x24534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_245350:
    // 0x245350: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_245354:
    if (ctx->pc == 0x245354u) {
        ctx->pc = 0x245354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245350u;
        // 0x245354: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245358u;
        goto label_245358;
    }
    ctx->pc = 0x245350u;
    {
        const bool branch_taken_0x245350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x245354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245350u;
        // 0x245354: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245350) {
            ctx->pc = 0x245368u;
            goto label_245368;
        }
    }
    ctx->pc = 0x245358u;
label_245358:
    // 0x245358: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24535c:
    // 0x24535c: 0x10000011  b           . + 4 + (0x11 << 2)
label_245360:
    if (ctx->pc == 0x245360u) {
        ctx->pc = 0x245360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24535Cu;
        // 0x245360: 0x2484c6b8  addiu       $a0, $a0, -0x3948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245364u;
        goto label_245364;
    }
    ctx->pc = 0x24535Cu;
    {
        const bool branch_taken_0x24535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24535Cu;
        // 0x245360: 0x2484c6b8  addiu       $a0, $a0, -0x3948 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24535c) {
            ctx->pc = 0x2453A4u;
            goto label_2453a4;
        }
    }
    ctx->pc = 0x245364u;
label_245364:
    // 0x245364: 0x0  nop
    ctx->pc = 0x245364u;
    // NOP
label_245368:
    // 0x245368: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_24536c:
    if (ctx->pc == 0x24536Cu) {
        ctx->pc = 0x245370u;
        goto label_245370;
    }
    ctx->pc = 0x245368u;
    {
        const bool branch_taken_0x245368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x245368) {
            ctx->pc = 0x245380u;
            goto label_245380;
        }
    }
    ctx->pc = 0x245370u;
label_245370:
    // 0x245370: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245374:
    // 0x245374: 0x1000000b  b           . + 4 + (0xB << 2)
label_245378:
    if (ctx->pc == 0x245378u) {
        ctx->pc = 0x245378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245374u;
        // 0x245378: 0x2484c6e8  addiu       $a0, $a0, -0x3918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24537Cu;
        goto label_24537c;
    }
    ctx->pc = 0x245374u;
    {
        const bool branch_taken_0x245374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245374u;
        // 0x245378: 0x2484c6e8  addiu       $a0, $a0, -0x3918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245374) {
            ctx->pc = 0x2453A4u;
            goto label_2453a4;
        }
    }
    ctx->pc = 0x24537Cu;
label_24537c:
    // 0x24537c: 0x0  nop
    ctx->pc = 0x24537cu;
    // NOP
label_245380:
    // 0x245380: 0xc090e62  jal         func_243988
label_245384:
    if (ctx->pc == 0x245384u) {
        ctx->pc = 0x245388u;
        goto label_245388;
    }
    ctx->pc = 0x245380u;
    SET_GPR_U32(ctx, 31, 0x245388u);
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x245380u, 0x245388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245388u;
label_245388:
    // 0x245388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24538c:
    // 0x24538c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24538cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245390:
    // 0x245390: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245394:
    // 0x245394: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_245398:
    if (ctx->pc == 0x245398u) {
        ctx->pc = 0x245398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245394u;
        // 0x245398: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24539Cu;
        goto label_24539c;
    }
    ctx->pc = 0x245394u;
    {
        const bool branch_taken_0x245394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x245398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245394u;
        // 0x245398: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245394) {
            ctx->pc = 0x2453B8u;
            goto label_2453b8;
        }
    }
    ctx->pc = 0x24539Cu;
label_24539c:
    // 0x24539c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2453a0:
    // 0x2453a0: 0x2484c718  addiu       $a0, $a0, -0x38E8
    ctx->pc = 0x2453a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952728));
label_2453a4:
    // 0x2453a4: 0xc090d8a  jal         func_243628
label_2453a8:
    if (ctx->pc == 0x2453A8u) {
        ctx->pc = 0x2453ACu;
        goto label_2453ac;
    }
    ctx->pc = 0x2453A4u;
    SET_GPR_U32(ctx, 31, 0x2453ACu);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2453A4u, 0x2453ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453ACu;
label_2453ac:
    // 0x2453ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_2453b0:
    if (ctx->pc == 0x2453B0u) {
        ctx->pc = 0x2453B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453ACu;
        // 0x2453b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453B4u;
        goto label_2453b4;
    }
    ctx->pc = 0x2453ACu;
    {
        const bool branch_taken_0x2453ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453ACu;
        // 0x2453b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453ac) {
            ctx->pc = 0x2453ECu;
            goto label_2453ec;
        }
    }
    ctx->pc = 0x2453B4u;
label_2453b4:
    // 0x2453b4: 0x0  nop
    ctx->pc = 0x2453b4u;
    // NOP
label_2453b8:
    // 0x2453b8: 0xc049590  jal         func_125640
label_2453bc:
    if (ctx->pc == 0x2453BCu) {
        ctx->pc = 0x2453C0u;
        goto label_2453c0;
    }
    ctx->pc = 0x2453B8u;
    SET_GPR_U32(ctx, 31, 0x2453C0u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2453B8u, 0x2453C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453C0u;
label_2453c0:
    // 0x2453c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2453c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2453c4:
    // 0x2453c4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x2453c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_2453c8:
    // 0x2453c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2453c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2453cc:
    // 0x2453cc: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2453ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_2453d0:
    // 0x2453d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2453d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2453d4:
    // 0x2453d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2453d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2453d8:
    // 0x2453d8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2453d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2453dc:
    // 0x2453dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2453e0:
    if (ctx->pc == 0x2453E0u) {
        ctx->pc = 0x2453E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453DCu;
        // 0x2453e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2453E4u;
        goto label_2453e4;
    }
    ctx->pc = 0x2453DCu;
    {
        const bool branch_taken_0x2453dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453DCu;
        // 0x2453e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453dc) {
            ctx->pc = 0x2453ECu;
            goto label_2453ec;
        }
    }
    ctx->pc = 0x2453E4u;
label_2453e4:
    // 0x2453e4: 0x60f809  jalr        $v1
label_2453e8:
    if (ctx->pc == 0x2453E8u) {
        ctx->pc = 0x2453ECu;
        goto label_2453ec;
    }
    ctx->pc = 0x2453E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2453ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2453E4u, 0x2453ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2453ECu;
label_2453ec:
    // 0x2453ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2453ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2453f0:
    // 0x2453f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2453f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2453f4:
    // 0x2453f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2453f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2453f8:
    // 0x2453f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2453f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2453fc:
    // 0x2453fc: 0x3e00008  jr          $ra
label_245400:
    if (ctx->pc == 0x245400u) {
        ctx->pc = 0x245400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453FCu;
        // 0x245400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245404u;
        goto label_fallthrough_0x2453fc;
    }
    ctx->pc = 0x2453FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453FCu;
        // 0x245400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2453FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2453fc:
    ctx->pc = 0x245404u;
}
