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

// Function: sub_00291C90
// Address: 0x291c90 - 0x291d7c
void sub_00291C90_0x291c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291C90_0x291c90");
#endif

    switch (ctx->pc) {
        case 0x291d04u: goto label_291d04;
        case 0x291d44u: goto label_291d44;
        case 0x291d68u: goto label_291d68;
        default: break;
    }

    ctx->pc = 0x291c90u;

    // 0x291c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291c94: 0x3c0a008d  lui         $t2, 0x8D
    ctx->pc = 0x291c94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)141 << 16));
    // 0x291c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291c9c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x291C9Cu;
    {
        const bool branch_taken_0x291c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x291CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C9Cu;
        // 0x291ca0: 0x254a2380  addiu       $t2, $t2, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c9c) {
            ctx->pc = 0x291CB4u;
            goto label_291cb4;
        }
    }
    ctx->pc = 0x291CA4u;
    // 0x291ca4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x291ca4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291ca8: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x291ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x291cac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x291CACu;
    {
        const bool branch_taken_0x291cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CACu;
        // 0x291cb0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cac) {
            ctx->pc = 0x291CC0u;
            goto label_291cc0;
        }
    }
    ctx->pc = 0x291CB4u;
label_291cb4:
    // 0x291cb4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x291cb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291cb8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x291cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x291cbc: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x291cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_291cc0:
    // 0x291cc0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x291cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x291cc4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x291CC4u;
    {
        const bool branch_taken_0x291cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CC4u;
        // 0x291cc8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291cc4) {
            ctx->pc = 0x291D50u;
            goto label_291d50;
        }
    }
    ctx->pc = 0x291CCCu;
    // 0x291ccc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x291CCCu;
    {
        const bool branch_taken_0x291ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x291ccc) {
            ctx->pc = 0x291D18u;
            goto label_291d18;
        }
    }
    ctx->pc = 0x291CD4u;
    // 0x291cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291cd8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291CD8u;
    {
        const bool branch_taken_0x291cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x291cd8) {
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291CE0u;
    // 0x291ce0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x291CE0u;
    {
        const bool branch_taken_0x291ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ce0) {
            ctx->pc = 0x291D68u;
            goto label_291d68;
        }
    }
    ctx->pc = 0x291CE8u;
label_291ce8:
    // 0x291ce8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x291ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x291cec: 0x25490008  addiu       $t1, $t2, 0x8
    ctx->pc = 0x291cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x291cf0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x291cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x291cf4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cfc: 0xc09565c  jal         func_255970
    ctx->pc = 0x291CFCu;
    SET_GPR_U32(ctx, 31, 0x291D04u);
    ctx->pc = 0x291D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CFCu;
    // 0x291d00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x291CFCu, 0x291D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D04u;
label_291d04:
    // 0x291d04: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x291D04u;
    {
        const bool branch_taken_0x291d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d04) {
            ctx->pc = 0x291D68u;
            goto label_291d68;
        }
    }
    ctx->pc = 0x291D0Cu;
    // 0x291d0c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x291D0Cu;
    {
        const bool branch_taken_0x291d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D0Cu;
        // 0x291d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d0c) {
            ctx->pc = 0x291D70u;
            goto label_291d70;
        }
    }
    ctx->pc = 0x291D14u;
    // 0x291d14: 0x0  nop
    ctx->pc = 0x291d14u;
    // NOP
label_291d18:
    // 0x291d18: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x291d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x291d1c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x291d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291d20: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x291d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x291d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x291d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d28: 0x25490008  addiu       $t1, $t2, 0x8
    ctx->pc = 0x291d28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x291d2c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x291d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x291d30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x291d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x291d34: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x291d34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x291d38: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x291d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x291d3c: 0xc09565c  jal         func_255970
    ctx->pc = 0x291D3Cu;
    SET_GPR_U32(ctx, 31, 0x291D44u);
    ctx->pc = 0x291D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D3Cu;
    // 0x291d40: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x291D3Cu, 0x291D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D44u;
label_291d44:
    // 0x291d44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291D44u;
    {
        const bool branch_taken_0x291d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d44) {
            ctx->pc = 0x291D68u;
            goto label_291d68;
        }
    }
    ctx->pc = 0x291D4Cu;
    // 0x291d4c: 0x0  nop
    ctx->pc = 0x291d4cu;
    // NOP
label_291d50:
    // 0x291d50: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x291d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x291d54: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x291d54u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x291d58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x291d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291d5c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x291d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x291d60: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x291D60u;
    SET_GPR_U32(ctx, 31, 0x291D68u);
    ctx->pc = 0x291D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D60u;
    // 0x291d64: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x291D60u, 0x291D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D68u;
label_291d68:
    // 0x291d68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291d6c: 0x0  nop
    ctx->pc = 0x291d6cu;
    // NOP
label_291d70:
    // 0x291d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291d74: 0x3e00008  jr          $ra
    ctx->pc = 0x291D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D74u;
        // 0x291d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291D7Cu;
}
