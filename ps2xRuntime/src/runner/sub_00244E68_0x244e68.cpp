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

// Function: sub_00244E68
// Address: 0x244e68 - 0x244f24
void sub_00244E68_0x244e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244E68_0x244e68");
#endif

    switch (ctx->pc) {
        case 0x244e68u: goto label_244e68;
        case 0x244e6cu: goto label_244e6c;
        case 0x244e70u: goto label_244e70;
        case 0x244e74u: goto label_244e74;
        case 0x244e78u: goto label_244e78;
        case 0x244e7cu: goto label_244e7c;
        case 0x244e80u: goto label_244e80;
        case 0x244e84u: goto label_244e84;
        case 0x244e88u: goto label_244e88;
        case 0x244e8cu: goto label_244e8c;
        case 0x244e90u: goto label_244e90;
        case 0x244e94u: goto label_244e94;
        case 0x244e98u: goto label_244e98;
        case 0x244e9cu: goto label_244e9c;
        case 0x244ea0u: goto label_244ea0;
        case 0x244ea4u: goto label_244ea4;
        case 0x244ea8u: goto label_244ea8;
        case 0x244eacu: goto label_244eac;
        case 0x244eb0u: goto label_244eb0;
        case 0x244eb4u: goto label_244eb4;
        case 0x244eb8u: goto label_244eb8;
        case 0x244ebcu: goto label_244ebc;
        case 0x244ec0u: goto label_244ec0;
        case 0x244ec4u: goto label_244ec4;
        case 0x244ec8u: goto label_244ec8;
        case 0x244eccu: goto label_244ecc;
        case 0x244ed0u: goto label_244ed0;
        case 0x244ed4u: goto label_244ed4;
        case 0x244ed8u: goto label_244ed8;
        case 0x244edcu: goto label_244edc;
        case 0x244ee0u: goto label_244ee0;
        case 0x244ee4u: goto label_244ee4;
        case 0x244ee8u: goto label_244ee8;
        case 0x244eecu: goto label_244eec;
        case 0x244ef0u: goto label_244ef0;
        case 0x244ef4u: goto label_244ef4;
        case 0x244ef8u: goto label_244ef8;
        case 0x244efcu: goto label_244efc;
        case 0x244f00u: goto label_244f00;
        case 0x244f04u: goto label_244f04;
        case 0x244f08u: goto label_244f08;
        case 0x244f0cu: goto label_244f0c;
        case 0x244f10u: goto label_244f10;
        case 0x244f14u: goto label_244f14;
        case 0x244f18u: goto label_244f18;
        case 0x244f1cu: goto label_244f1c;
        case 0x244f20u: goto label_244f20;
        default: break;
    }

    ctx->pc = 0x244e68u;

label_244e68:
    // 0x244e68: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x244e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_244e6c:
    // 0x244e6c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x244e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_244e70:
    // 0x244e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244e74:
    // 0x244e74: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x244e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_244e78:
    // 0x244e78: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_244e7c:
    if (ctx->pc == 0x244E7Cu) {
        ctx->pc = 0x244E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E78u;
        // 0x244e7c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E80u;
        goto label_244e80;
    }
    ctx->pc = 0x244E78u;
    {
        const bool branch_taken_0x244e78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x244E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E78u;
        // 0x244e7c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e78) {
            ctx->pc = 0x244E90u;
            goto label_244e90;
        }
    }
    ctx->pc = 0x244E80u;
label_244e80:
    // 0x244e80: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244e84:
    // 0x244e84: 0x1000001f  b           . + 4 + (0x1F << 2)
label_244e88:
    if (ctx->pc == 0x244E88u) {
        ctx->pc = 0x244E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E84u;
        // 0x244e88: 0x2484c3e8  addiu       $a0, $a0, -0x3C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E8Cu;
        goto label_244e8c;
    }
    ctx->pc = 0x244E84u;
    {
        const bool branch_taken_0x244e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E84u;
        // 0x244e88: 0x2484c3e8  addiu       $a0, $a0, -0x3C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e84) {
            ctx->pc = 0x244F04u;
            goto label_244f04;
        }
    }
    ctx->pc = 0x244E8Cu;
label_244e8c:
    // 0x244e8c: 0x0  nop
    ctx->pc = 0x244e8cu;
    // NOP
label_244e90:
    // 0x244e90: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x244e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_244e94:
    // 0x244e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244e98:
    // 0x244e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244e9c:
    // 0x244e9c: 0xc090fbe  jal         func_243EF8
label_244ea0:
    if (ctx->pc == 0x244EA0u) {
        ctx->pc = 0x244EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E9Cu;
        // 0x244ea0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EA4u;
        goto label_244ea4;
    }
    ctx->pc = 0x244E9Cu;
    SET_GPR_U32(ctx, 31, 0x244EA4u);
    ctx->pc = 0x244EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E9Cu;
    // 0x244ea0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x244E9Cu, 0x244EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EA4u;
label_244ea4:
    // 0x244ea4: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x244ea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_244ea8:
    // 0x244ea8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_244eac:
    if (ctx->pc == 0x244EACu) {
        ctx->pc = 0x244EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EA8u;
        // 0x244eac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EB0u;
        goto label_244eb0;
    }
    ctx->pc = 0x244EA8u;
    {
        const bool branch_taken_0x244ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EA8u;
        // 0x244eac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ea8) {
            ctx->pc = 0x244EC0u;
            goto label_244ec0;
        }
    }
    ctx->pc = 0x244EB0u;
label_244eb0:
    // 0x244eb0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244eb4:
    // 0x244eb4: 0x10000013  b           . + 4 + (0x13 << 2)
label_244eb8:
    if (ctx->pc == 0x244EB8u) {
        ctx->pc = 0x244EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EB4u;
        // 0x244eb8: 0x2484c3e8  addiu       $a0, $a0, -0x3C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EBCu;
        goto label_244ebc;
    }
    ctx->pc = 0x244EB4u;
    {
        const bool branch_taken_0x244eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EB4u;
        // 0x244eb8: 0x2484c3e8  addiu       $a0, $a0, -0x3C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244eb4) {
            ctx->pc = 0x244F04u;
            goto label_244f04;
        }
    }
    ctx->pc = 0x244EBCu;
label_244ebc:
    // 0x244ebc: 0x0  nop
    ctx->pc = 0x244ebcu;
    // NOP
label_244ec0:
    // 0x244ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244ec4:
    // 0x244ec4: 0xc090f2c  jal         func_243CB0
label_244ec8:
    if (ctx->pc == 0x244EC8u) {
        ctx->pc = 0x244EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EC4u;
        // 0x244ec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244ECCu;
        goto label_244ecc;
    }
    ctx->pc = 0x244EC4u;
    SET_GPR_U32(ctx, 31, 0x244ECCu);
    ctx->pc = 0x244EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244EC4u;
    // 0x244ec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x244EC4u, 0x244ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ECCu;
label_244ecc:
    // 0x244ecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244ed0:
    // 0x244ed0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_244ed4:
    if (ctx->pc == 0x244ED4u) {
        ctx->pc = 0x244ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ED0u;
        // 0x244ed4: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244ED8u;
        goto label_244ed8;
    }
    ctx->pc = 0x244ED0u;
    {
        const bool branch_taken_0x244ed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x244ed0) {
            ctx->pc = 0x244ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244ED0u;
            // 0x244ed4: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244EE8u;
            goto label_244ee8;
        }
    }
    ctx->pc = 0x244ED8u;
label_244ed8:
    // 0x244ed8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244edc:
    // 0x244edc: 0xc090d8a  jal         func_243628
label_244ee0:
    if (ctx->pc == 0x244EE0u) {
        ctx->pc = 0x244EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EDCu;
        // 0x244ee0: 0x2484c438  addiu       $a0, $a0, -0x3BC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EE4u;
        goto label_244ee4;
    }
    ctx->pc = 0x244EDCu;
    SET_GPR_U32(ctx, 31, 0x244EE4u);
    ctx->pc = 0x244EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244EDCu;
    // 0x244ee0: 0x2484c438  addiu       $a0, $a0, -0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244EDCu, 0x244EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EE4u;
label_244ee4:
    // 0x244ee4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x244ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_244ee8:
    // 0x244ee8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_244eec:
    if (ctx->pc == 0x244EECu) {
        ctx->pc = 0x244EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EE8u;
        // 0x244eec: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EF0u;
        goto label_244ef0;
    }
    ctx->pc = 0x244EE8u;
    {
        const bool branch_taken_0x244ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ee8) {
            ctx->pc = 0x244EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244EE8u;
            // 0x244eec: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244F00u;
            goto label_244f00;
        }
    }
    ctx->pc = 0x244EF0u;
label_244ef0:
    // 0x244ef0: 0x40f809  jalr        $v0
label_244ef4:
    if (ctx->pc == 0x244EF4u) {
        ctx->pc = 0x244EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF0u;
        // 0x244ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EF8u;
        goto label_244ef8;
    }
    ctx->pc = 0x244EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244EF8u);
        ctx->pc = 0x244EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF0u;
        // 0x244ef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244EF0u, 0x244EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244EF8u;
label_244ef8:
    // 0x244ef8: 0x10000006  b           . + 4 + (0x6 << 2)
label_244efc:
    if (ctx->pc == 0x244EFCu) {
        ctx->pc = 0x244EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF8u;
        // 0x244efc: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F00u;
        goto label_244f00;
    }
    ctx->pc = 0x244EF8u;
    {
        const bool branch_taken_0x244ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF8u;
        // 0x244efc: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ef8) {
            ctx->pc = 0x244F14u;
            goto label_244f14;
        }
    }
    ctx->pc = 0x244F00u;
label_244f00:
    // 0x244f00: 0x2484c460  addiu       $a0, $a0, -0x3BA0
    ctx->pc = 0x244f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952032));
label_244f04:
    // 0x244f04: 0xc090d8a  jal         func_243628
label_244f08:
    if (ctx->pc == 0x244F08u) {
        ctx->pc = 0x244F0Cu;
        goto label_244f0c;
    }
    ctx->pc = 0x244F04u;
    SET_GPR_U32(ctx, 31, 0x244F0Cu);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244F04u, 0x244F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F0Cu;
label_244f0c:
    // 0x244f0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244f10:
    // 0x244f10: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x244f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_244f14:
    // 0x244f14: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x244f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_244f18:
    // 0x244f18: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x244f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_244f1c:
    // 0x244f1c: 0x3e00008  jr          $ra
label_244f20:
    if (ctx->pc == 0x244F20u) {
        ctx->pc = 0x244F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F1Cu;
        // 0x244f20: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244F24u;
        goto label_fallthrough_0x244f1c;
    }
    ctx->pc = 0x244F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F1Cu;
        // 0x244f20: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244f1c:
    ctx->pc = 0x244F24u;
}
