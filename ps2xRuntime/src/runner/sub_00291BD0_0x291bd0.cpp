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

// Function: sub_00291BD0
// Address: 0x291bd0 - 0x291c90
void sub_00291BD0_0x291bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291BD0_0x291bd0");
#endif

    switch (ctx->pc) {
        case 0x291c00u: goto label_291c00;
        case 0x291c44u: goto label_291c44;
        case 0x291c78u: goto label_291c78;
        default: break;
    }

    ctx->pc = 0x291bd0u;

    // 0x291bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291bd4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x291bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x291bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291bdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x291bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291be4: 0x8c242384  lw          $a0, 0x2384($at)
    ctx->pc = 0x291be4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8D2384u));
    // 0x291be8: 0x3c10008d  lui         $s0, 0x8D
    ctx->pc = 0x291be8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)141 << 16));
    // 0x291bec: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x291BECu;
    {
        const bool branch_taken_0x291bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x291BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BECu;
        // 0x291bf0: 0x26102380  addiu       $s0, $s0, 0x2380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291bec) {
            ctx->pc = 0x291C80u;
            goto label_291c80;
        }
    }
    ctx->pc = 0x291BF4u;
    // 0x291bf4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x291bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x291bf8: 0xc0bd478  jal         func_2F51E0
    ctx->pc = 0x291BF8u;
    SET_GPR_U32(ctx, 31, 0x291C00u);
    ctx->pc = 0x291BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BF8u;
    // 0x291bfc: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51E0u, 0x291BF8u, 0x291C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C00u;
label_291c00:
    // 0x291c00: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x291C00u;
    {
        const bool branch_taken_0x291c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C00u;
        // 0x291c04: 0x3c010089  lui         $at, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c00) {
            ctx->pc = 0x291C80u;
            goto label_291c80;
        }
    }
    ctx->pc = 0x291C08u;
    // 0x291c08: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x291c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x291c0c: 0x8c238a10  lw          $v1, -0x75F0($at)
    ctx->pc = 0x291c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937104)));
    // 0x291c10: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x291c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x291c14: 0x14650010  bne         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x291C14u;
    {
        const bool branch_taken_0x291c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x291c14) {
            ctx->pc = 0x291C58u;
            goto label_291c58;
        }
    }
    ctx->pc = 0x291C1Cu;
    // 0x291c1c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x291c1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x291c20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x291c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x291c24: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x291C24u;
    {
        const bool branch_taken_0x291c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x291C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C24u;
        // 0x291c28: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c24) {
            ctx->pc = 0x291C80u;
            goto label_291c80;
        }
    }
    ctx->pc = 0x291C2Cu;
    // 0x291c2c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x291c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x291c30: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x291c30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x291c34: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x291C34u;
    {
        const bool branch_taken_0x291c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C34u;
        // 0x291c38: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c34) {
            ctx->pc = 0x291C50u;
            goto label_291c50;
        }
    }
    ctx->pc = 0x291C3Cu;
    // 0x291c3c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x291C3Cu;
    SET_GPR_U32(ctx, 31, 0x291C44u);
    ctx->pc = 0x291C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C3Cu;
    // 0x291c40: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x291C3Cu, 0x291C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C44u;
label_291c44:
    // 0x291c44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x291c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291c48: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x291c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x291c4c: 0x0  nop
    ctx->pc = 0x291c4cu;
    // NOP
label_291c50:
    // 0x291c50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x291C50u;
    {
        const bool branch_taken_0x291c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c50) {
            ctx->pc = 0x291C80u;
            goto label_291c80;
        }
    }
    ctx->pc = 0x291C58u;
label_291c58:
    // 0x291c58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x291c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291c5c: 0x14660008  bne         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x291C5Cu;
    {
        const bool branch_taken_0x291c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x291C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C5Cu;
        // 0x291c60: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c5c) {
            ctx->pc = 0x291C80u;
            goto label_291c80;
        }
    }
    ctx->pc = 0x291C64u;
    // 0x291c64: 0x26090008  addiu       $t1, $s0, 0x8
    ctx->pc = 0x291c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x291c68: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x291c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x291c6c: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x291c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x291c70: 0xc09565c  jal         func_255970
    ctx->pc = 0x291C70u;
    SET_GPR_U32(ctx, 31, 0x291C78u);
    ctx->pc = 0x291C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C70u;
    // 0x291c74: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x291C70u, 0x291C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C78u;
label_291c78:
    // 0x291c78: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x291C78u;
    {
        const bool branch_taken_0x291c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c78) {
            ctx->pc = 0x291C80u;
            goto label_291c80;
        }
    }
    ctx->pc = 0x291C80u;
label_291c80:
    // 0x291c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291c88: 0x3e00008  jr          $ra
    ctx->pc = 0x291C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C88u;
        // 0x291c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291C90u;
}
