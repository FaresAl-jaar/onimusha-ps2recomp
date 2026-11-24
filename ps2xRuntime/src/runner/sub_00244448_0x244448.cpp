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

// Function: sub_00244448
// Address: 0x244448 - 0x244504
void sub_00244448_0x244448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244448_0x244448");
#endif

    switch (ctx->pc) {
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        default: break;
    }

    ctx->pc = 0x244448u;

label_244448:
    // 0x244448: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x244448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_24444c:
    // 0x24444c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x24444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_244450:
    // 0x244450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244454:
    // 0x244454: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x244454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_244458:
    // 0x244458: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_24445c:
    if (ctx->pc == 0x24445Cu) {
        ctx->pc = 0x24445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244458u;
        // 0x24445c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244460u;
        goto label_244460;
    }
    ctx->pc = 0x244458u;
    {
        const bool branch_taken_0x244458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244458u;
        // 0x24445c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244458) {
            ctx->pc = 0x244470u;
            goto label_244470;
        }
    }
    ctx->pc = 0x244460u;
label_244460:
    // 0x244460: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244464:
    // 0x244464: 0x1000001f  b           . + 4 + (0x1F << 2)
label_244468:
    if (ctx->pc == 0x244468u) {
        ctx->pc = 0x244468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244464u;
        // 0x244468: 0x2484bea8  addiu       $a0, $a0, -0x4158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24446Cu;
        goto label_24446c;
    }
    ctx->pc = 0x244464u;
    {
        const bool branch_taken_0x244464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244464u;
        // 0x244468: 0x2484bea8  addiu       $a0, $a0, -0x4158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244464) {
            ctx->pc = 0x2444E4u;
            goto label_2444e4;
        }
    }
    ctx->pc = 0x24446Cu;
label_24446c:
    // 0x24446c: 0x0  nop
    ctx->pc = 0x24446cu;
    // NOP
label_244470:
    // 0x244470: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x244470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_244474:
    // 0x244474: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244478:
    // 0x244478: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24447c:
    // 0x24447c: 0xc090fbe  jal         func_243EF8
label_244480:
    if (ctx->pc == 0x244480u) {
        ctx->pc = 0x244480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24447Cu;
        // 0x244480: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244484u;
        goto label_244484;
    }
    ctx->pc = 0x24447Cu;
    SET_GPR_U32(ctx, 31, 0x244484u);
    ctx->pc = 0x244480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24447Cu;
    // 0x244480: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x24447Cu, 0x244484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244484u;
label_244484:
    // 0x244484: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x244484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_244488:
    // 0x244488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_24448c:
    if (ctx->pc == 0x24448Cu) {
        ctx->pc = 0x24448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244488u;
        // 0x24448c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244490u;
        goto label_244490;
    }
    ctx->pc = 0x244488u;
    {
        const bool branch_taken_0x244488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244488u;
        // 0x24448c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244488) {
            ctx->pc = 0x2444A0u;
            goto label_2444a0;
        }
    }
    ctx->pc = 0x244490u;
label_244490:
    // 0x244490: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244494:
    // 0x244494: 0x10000013  b           . + 4 + (0x13 << 2)
label_244498:
    if (ctx->pc == 0x244498u) {
        ctx->pc = 0x244498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244494u;
        // 0x244498: 0x2484bea8  addiu       $a0, $a0, -0x4158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24449Cu;
        goto label_24449c;
    }
    ctx->pc = 0x244494u;
    {
        const bool branch_taken_0x244494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244494u;
        // 0x244498: 0x2484bea8  addiu       $a0, $a0, -0x4158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244494) {
            ctx->pc = 0x2444E4u;
            goto label_2444e4;
        }
    }
    ctx->pc = 0x24449Cu;
label_24449c:
    // 0x24449c: 0x0  nop
    ctx->pc = 0x24449cu;
    // NOP
label_2444a0:
    // 0x2444a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2444a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2444a4:
    // 0x2444a4: 0xc090f2c  jal         func_243CB0
label_2444a8:
    if (ctx->pc == 0x2444A8u) {
        ctx->pc = 0x2444A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444A4u;
        // 0x2444a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444ACu;
        goto label_2444ac;
    }
    ctx->pc = 0x2444A4u;
    SET_GPR_U32(ctx, 31, 0x2444ACu);
    ctx->pc = 0x2444A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444A4u;
    // 0x2444a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x2444A4u, 0x2444ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444ACu;
label_2444ac:
    // 0x2444ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2444acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2444b0:
    // 0x2444b0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_2444b4:
    if (ctx->pc == 0x2444B4u) {
        ctx->pc = 0x2444B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444B0u;
        // 0x2444b4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444B8u;
        goto label_2444b8;
    }
    ctx->pc = 0x2444B0u;
    {
        const bool branch_taken_0x2444b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2444b0) {
            ctx->pc = 0x2444B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2444B0u;
            // 0x2444b4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2444C8u;
            goto label_2444c8;
        }
    }
    ctx->pc = 0x2444B8u;
label_2444b8:
    // 0x2444b8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2444b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2444bc:
    // 0x2444bc: 0xc090d8a  jal         func_243628
label_2444c0:
    if (ctx->pc == 0x2444C0u) {
        ctx->pc = 0x2444C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444BCu;
        // 0x2444c0: 0x2484bef8  addiu       $a0, $a0, -0x4108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444C4u;
        goto label_2444c4;
    }
    ctx->pc = 0x2444BCu;
    SET_GPR_U32(ctx, 31, 0x2444C4u);
    ctx->pc = 0x2444C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444BCu;
    // 0x2444c0: 0x2484bef8  addiu       $a0, $a0, -0x4108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2444BCu, 0x2444C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444C4u;
label_2444c4:
    // 0x2444c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2444c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2444c8:
    // 0x2444c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2444cc:
    if (ctx->pc == 0x2444CCu) {
        ctx->pc = 0x2444CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444C8u;
        // 0x2444cc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444D0u;
        goto label_2444d0;
    }
    ctx->pc = 0x2444C8u;
    {
        const bool branch_taken_0x2444c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2444c8) {
            ctx->pc = 0x2444CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2444C8u;
            // 0x2444cc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2444E0u;
            goto label_2444e0;
        }
    }
    ctx->pc = 0x2444D0u;
label_2444d0:
    // 0x2444d0: 0x40f809  jalr        $v0
label_2444d4:
    if (ctx->pc == 0x2444D4u) {
        ctx->pc = 0x2444D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444D0u;
        // 0x2444d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444D8u;
        goto label_2444d8;
    }
    ctx->pc = 0x2444D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2444D8u);
        ctx->pc = 0x2444D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444D0u;
        // 0x2444d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2444D0u, 0x2444D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2444D8u;
label_2444d8:
    // 0x2444d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2444dc:
    if (ctx->pc == 0x2444DCu) {
        ctx->pc = 0x2444DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444D8u;
        // 0x2444dc: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444E0u;
        goto label_2444e0;
    }
    ctx->pc = 0x2444D8u;
    {
        const bool branch_taken_0x2444d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2444DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444D8u;
        // 0x2444dc: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2444d8) {
            ctx->pc = 0x2444F4u;
            goto label_2444f4;
        }
    }
    ctx->pc = 0x2444E0u;
label_2444e0:
    // 0x2444e0: 0x2484bf20  addiu       $a0, $a0, -0x40E0
    ctx->pc = 0x2444e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
label_2444e4:
    // 0x2444e4: 0xc090d8a  jal         func_243628
label_2444e8:
    if (ctx->pc == 0x2444E8u) {
        ctx->pc = 0x2444ECu;
        goto label_2444ec;
    }
    ctx->pc = 0x2444E4u;
    SET_GPR_U32(ctx, 31, 0x2444ECu);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2444E4u, 0x2444ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444ECu;
label_2444ec:
    // 0x2444ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2444ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2444f0:
    // 0x2444f0: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x2444f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_2444f4:
    // 0x2444f4: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x2444f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_2444f8:
    // 0x2444f8: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x2444f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_2444fc:
    // 0x2444fc: 0x3e00008  jr          $ra
label_244500:
    if (ctx->pc == 0x244500u) {
        ctx->pc = 0x244500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444FCu;
        // 0x244500: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244504u;
        goto label_fallthrough_0x2444fc;
    }
    ctx->pc = 0x2444FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444FCu;
        // 0x244500: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2444FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2444fc:
    ctx->pc = 0x244504u;
}
