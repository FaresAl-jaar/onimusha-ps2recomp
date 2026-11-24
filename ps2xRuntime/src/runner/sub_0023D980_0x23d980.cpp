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

// Function: sub_0023D980
// Address: 0x23d980 - 0x23da7c
void sub_0023D980_0x23d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D980_0x23d980");
#endif

    switch (ctx->pc) {
        case 0x23d980u: goto label_23d980;
        case 0x23d984u: goto label_23d984;
        case 0x23d988u: goto label_23d988;
        case 0x23d98cu: goto label_23d98c;
        case 0x23d990u: goto label_23d990;
        case 0x23d994u: goto label_23d994;
        case 0x23d998u: goto label_23d998;
        case 0x23d99cu: goto label_23d99c;
        case 0x23d9a0u: goto label_23d9a0;
        case 0x23d9a4u: goto label_23d9a4;
        case 0x23d9a8u: goto label_23d9a8;
        case 0x23d9acu: goto label_23d9ac;
        case 0x23d9b0u: goto label_23d9b0;
        case 0x23d9b4u: goto label_23d9b4;
        case 0x23d9b8u: goto label_23d9b8;
        case 0x23d9bcu: goto label_23d9bc;
        case 0x23d9c0u: goto label_23d9c0;
        case 0x23d9c4u: goto label_23d9c4;
        case 0x23d9c8u: goto label_23d9c8;
        case 0x23d9ccu: goto label_23d9cc;
        case 0x23d9d0u: goto label_23d9d0;
        case 0x23d9d4u: goto label_23d9d4;
        case 0x23d9d8u: goto label_23d9d8;
        case 0x23d9dcu: goto label_23d9dc;
        case 0x23d9e0u: goto label_23d9e0;
        case 0x23d9e4u: goto label_23d9e4;
        case 0x23d9e8u: goto label_23d9e8;
        case 0x23d9ecu: goto label_23d9ec;
        case 0x23d9f0u: goto label_23d9f0;
        case 0x23d9f4u: goto label_23d9f4;
        case 0x23d9f8u: goto label_23d9f8;
        case 0x23d9fcu: goto label_23d9fc;
        case 0x23da00u: goto label_23da00;
        case 0x23da04u: goto label_23da04;
        case 0x23da08u: goto label_23da08;
        case 0x23da0cu: goto label_23da0c;
        case 0x23da10u: goto label_23da10;
        case 0x23da14u: goto label_23da14;
        case 0x23da18u: goto label_23da18;
        case 0x23da1cu: goto label_23da1c;
        case 0x23da20u: goto label_23da20;
        case 0x23da24u: goto label_23da24;
        case 0x23da28u: goto label_23da28;
        case 0x23da2cu: goto label_23da2c;
        case 0x23da30u: goto label_23da30;
        case 0x23da34u: goto label_23da34;
        case 0x23da38u: goto label_23da38;
        case 0x23da3cu: goto label_23da3c;
        case 0x23da40u: goto label_23da40;
        case 0x23da44u: goto label_23da44;
        case 0x23da48u: goto label_23da48;
        case 0x23da4cu: goto label_23da4c;
        case 0x23da50u: goto label_23da50;
        case 0x23da54u: goto label_23da54;
        case 0x23da58u: goto label_23da58;
        case 0x23da5cu: goto label_23da5c;
        case 0x23da60u: goto label_23da60;
        case 0x23da64u: goto label_23da64;
        case 0x23da68u: goto label_23da68;
        case 0x23da6cu: goto label_23da6c;
        case 0x23da70u: goto label_23da70;
        case 0x23da74u: goto label_23da74;
        case 0x23da78u: goto label_23da78;
        default: break;
    }

    ctx->pc = 0x23d980u;

label_23d980:
    // 0x23d980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23d984:
    // 0x23d984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23d988:
    // 0x23d988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d98c:
    // 0x23d98c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23d98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23d990:
    // 0x23d990: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23d994:
    // 0x23d994: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23d994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23d998:
    // 0x23d998: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23d99c:
    // 0x23d99c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23d99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_23d9a0:
    // 0x23d9a0: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x23d9a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_23d9a4:
    // 0x23d9a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_23d9a8:
    if (ctx->pc == 0x23D9A8u) {
        ctx->pc = 0x23D9ACu;
        goto label_23d9ac;
    }
    ctx->pc = 0x23D9A4u;
    {
        const bool branch_taken_0x23d9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d9a4) {
            ctx->pc = 0x23D9DCu;
            goto label_23d9dc;
        }
    }
    ctx->pc = 0x23D9ACu;
label_23d9ac:
    // 0x23d9ac: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x23d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_23d9b0:
    // 0x23d9b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23d9b4:
    if (ctx->pc == 0x23D9B4u) {
        ctx->pc = 0x23D9B8u;
        goto label_23d9b8;
    }
    ctx->pc = 0x23D9B0u;
    {
        const bool branch_taken_0x23d9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d9b0) {
            ctx->pc = 0x23D9DCu;
            goto label_23d9dc;
        }
    }
    ctx->pc = 0x23D9B8u;
label_23d9b8:
    // 0x23d9b8: 0xc08da9a  jal         func_236A68
label_23d9bc:
    if (ctx->pc == 0x23D9BCu) {
        ctx->pc = 0x23D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9B8u;
        // 0x23d9bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9C0u;
        goto label_23d9c0;
    }
    ctx->pc = 0x23D9B8u;
    SET_GPR_U32(ctx, 31, 0x23D9C0u);
    ctx->pc = 0x23D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9B8u;
    // 0x23d9bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A68u, 0x23D9B8u, 0x23D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9C0u;
label_23d9c0:
    // 0x23d9c0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x23d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_23d9c4:
    // 0x23d9c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23d9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23d9c8:
    // 0x23d9c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23d9cc:
    if (ctx->pc == 0x23D9CCu) {
        ctx->pc = 0x23D9D0u;
        goto label_23d9d0;
    }
    ctx->pc = 0x23D9C8u;
    {
        const bool branch_taken_0x23d9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d9c8) {
            ctx->pc = 0x23D9DCu;
            goto label_23d9dc;
        }
    }
    ctx->pc = 0x23D9D0u;
label_23d9d0:
    // 0x23d9d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23d9d4:
    // 0x23d9d4: 0xc08daf0  jal         func_236BC0
label_23d9d8:
    if (ctx->pc == 0x23D9D8u) {
        ctx->pc = 0x23D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9D4u;
        // 0x23d9d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9DCu;
        goto label_23d9dc;
    }
    ctx->pc = 0x23D9D4u;
    SET_GPR_U32(ctx, 31, 0x23D9DCu);
    ctx->pc = 0x23D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9D4u;
    // 0x23d9d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23D9D4u, 0x23D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9DCu;
label_23d9dc:
    // 0x23d9dc: 0xc08d6b2  jal         func_235AC8
label_23d9e0:
    if (ctx->pc == 0x23D9E0u) {
        ctx->pc = 0x23D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9DCu;
        // 0x23d9e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9E4u;
        goto label_23d9e4;
    }
    ctx->pc = 0x23D9DCu;
    SET_GPR_U32(ctx, 31, 0x23D9E4u);
    ctx->pc = 0x23D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9DCu;
    // 0x23d9e0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AC8u, 0x23D9DCu, 0x23D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9E4u;
label_23d9e4:
    // 0x23d9e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23d9e8:
    // 0x23d9e8: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
label_23d9ec:
    if (ctx->pc == 0x23D9ECu) {
        ctx->pc = 0x23D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9E8u;
        // 0x23d9ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9F0u;
        goto label_23d9f0;
    }
    ctx->pc = 0x23D9E8u;
    {
        const bool branch_taken_0x23d9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23d9e8) {
            ctx->pc = 0x23D9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D9E8u;
            // 0x23d9ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA60u;
            goto label_23da60;
        }
    }
    ctx->pc = 0x23D9F0u;
label_23d9f0:
    // 0x23d9f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23d9f4:
    // 0x23d9f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23d9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d9f8:
    // 0x23d9f8: 0x3c14004d  lui         $s4, 0x4D
    ctx->pc = 0x23d9f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)77 << 16));
label_23d9fc:
    // 0x23d9fc: 0xc08db08  jal         func_236C20
label_23da00:
    if (ctx->pc == 0x23DA00u) {
        ctx->pc = 0x23DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9FCu;
        // 0x23da00: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA04u;
        goto label_23da04;
    }
    ctx->pc = 0x23D9FCu;
    SET_GPR_U32(ctx, 31, 0x23DA04u);
    ctx->pc = 0x23DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9FCu;
    // 0x23da00: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C20u, 0x23D9FCu, 0x23DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA04u;
label_23da04:
    // 0x23da04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23da04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23da08:
    // 0x23da08: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23da08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_23da0c:
    // 0x23da0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_23da10:
    if (ctx->pc == 0x23DA10u) {
        ctx->pc = 0x23DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA0Cu;
        // 0x23da10: 0xac528fdc  sw          $s2, -0x7024($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938588), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA14u;
        goto label_23da14;
    }
    ctx->pc = 0x23DA0Cu;
    {
        const bool branch_taken_0x23da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA0Cu;
        // 0x23da10: 0xac528fdc  sw          $s2, -0x7024($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938588), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da0c) {
            ctx->pc = 0x23DA1Cu;
            goto label_23da1c;
        }
    }
    ctx->pc = 0x23DA14u;
label_23da14:
    // 0x23da14: 0x0  nop
    ctx->pc = 0x23da14u;
    // NOP
label_23da18:
    // 0x23da18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23da18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23da1c:
    // 0x23da1c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x23da1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_23da20:
    // 0x23da20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23da24:
    if (ctx->pc == 0x23DA24u) {
        ctx->pc = 0x23DA28u;
        goto label_23da28;
    }
    ctx->pc = 0x23DA20u;
    {
        const bool branch_taken_0x23da20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23da20) {
            ctx->pc = 0x23DA4Cu;
            goto label_23da4c;
        }
    }
    ctx->pc = 0x23DA28u;
label_23da28:
    // 0x23da28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23da2c:
    // 0x23da2c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23da2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_23da30:
    // 0x23da30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23da34:
    // 0x23da34: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23da38:
    // 0x23da38: 0x40f809  jalr        $v0
label_23da3c:
    if (ctx->pc == 0x23DA3Cu) {
        ctx->pc = 0x23DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA38u;
        // 0x23da3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA40u;
        goto label_23da40;
    }
    ctx->pc = 0x23DA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DA40u);
        ctx->pc = 0x23DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA38u;
        // 0x23da3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DA38u, 0x23DA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DA40u;
label_23da40:
    // 0x23da40: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x23da40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_23da44:
    // 0x23da44: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_23da48:
    if (ctx->pc == 0x23DA48u) {
        ctx->pc = 0x23DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA44u;
        // 0x23da48: 0xae828fe0  sw          $v0, -0x7020($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294938592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA4Cu;
        goto label_23da4c;
    }
    ctx->pc = 0x23DA44u;
    {
        const bool branch_taken_0x23da44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA44u;
        // 0x23da48: 0xae828fe0  sw          $v0, -0x7020($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294938592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da44) {
            ctx->pc = 0x23DA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23da18;
        }
    }
    ctx->pc = 0x23DA4Cu;
label_23da4c:
    // 0x23da4c: 0x56720004  bnel        $s3, $s2, . + 4 + (0x4 << 2)
label_23da50:
    if (ctx->pc == 0x23DA50u) {
        ctx->pc = 0x23DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA4Cu;
        // 0x23da50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA54u;
        goto label_23da54;
    }
    ctx->pc = 0x23DA4Cu;
    {
        const bool branch_taken_0x23da4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x23da4c) {
            ctx->pc = 0x23DA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DA4Cu;
            // 0x23da50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA60u;
            goto label_23da60;
        }
    }
    ctx->pc = 0x23DA54u;
label_23da54:
    // 0x23da54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23da58:
    // 0x23da58: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x23da58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_23da5c:
    // 0x23da5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23da5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23da60:
    // 0x23da60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23da60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23da64:
    // 0x23da64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23da64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23da68:
    // 0x23da68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23da68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23da6c:
    // 0x23da6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23da6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23da70:
    // 0x23da70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23da70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23da74:
    // 0x23da74: 0x3e00008  jr          $ra
label_23da78:
    if (ctx->pc == 0x23DA78u) {
        ctx->pc = 0x23DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA74u;
        // 0x23da78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA7Cu;
        goto label_fallthrough_0x23da74;
    }
    ctx->pc = 0x23DA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA74u;
        // 0x23da78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23da74:
    ctx->pc = 0x23DA7Cu;
}
