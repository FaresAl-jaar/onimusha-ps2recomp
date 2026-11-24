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

// Function: sub_0011EC00
// Address: 0x11ec00 - 0x11ecac
void sub_0011EC00_0x11ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EC00_0x11ec00");
#endif

    switch (ctx->pc) {
        case 0x11ec5cu: goto label_11ec5c;
        case 0x11ec88u: goto label_11ec88;
        case 0x11ec98u: goto label_11ec98;
        default: break;
    }

    ctx->pc = 0x11ec00u;

    // 0x11ec00: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11ec00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11ec04: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11ec04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11ec08: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ec08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ec0c: 0x440c6000  mfc1        $t4, $f12
    ctx->pc = 0x11ec0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11ec10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ec14: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11ec14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11ec18: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11ec18u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11ec1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ec20: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11ec20u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11ec24: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x11ec24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11ec28: 0xf6dc2  srl         $t5, $t7, 23
    ctx->pc = 0x11ec28u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x11ec2c: 0x1cf702b  sltu        $t6, $t6, $t7
    ctx->pc = 0x11ec2cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x11ec30: 0x11c0000a  beqz        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x11EC30u;
    {
        const bool branch_taken_0x11ec30 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC30u;
        // 0x11ec34: 0x1a46821  addu        $t5, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec30) {
            ctx->pc = 0x11EC5Cu;
            goto label_11ec5c;
        }
    }
    ctx->pc = 0x11EC38u;
    // 0x11ec38: 0x29af0100  slti        $t7, $t5, 0x100
    ctx->pc = 0x11ec38u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11ec3c: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EC3Cu;
    {
        const bool branch_taken_0x11ec3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC3Cu;
        // 0x11ec40: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec3c) {
            ctx->pc = 0x11EC84u;
            goto label_11ec84;
        }
    }
    ctx->pc = 0x11EC44u;
    // 0x11ec44: 0x19a0000a  blez        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x11EC44u;
    {
        const bool branch_taken_0x11ec44 = (GPR_S64(ctx, 13) <= 0);
        ctx->pc = 0x11EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC44u;
        // 0x11ec48: 0x3c0f807f  lui         $t7, 0x807F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32895 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec44) {
            ctx->pc = 0x11EC70u;
            goto label_11ec70;
        }
    }
    ctx->pc = 0x11EC4Cu;
    // 0x11ec4c: 0xd75c0  sll         $t6, $t5, 23
    ctx->pc = 0x11ec4cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 23));
    // 0x11ec50: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ec50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ec54: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11ec54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11ec58: 0x1ee6025  or          $t4, $t7, $t6
    ctx->pc = 0x11ec58u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
label_11ec5c:
    // 0x11ec5c: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x11ec5cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ec60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec64: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x11ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x11EC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC68u;
        // 0x11ec6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EC70u;
label_11ec70:
    // 0x11ec70: 0x340fc350  ori         $t7, $zero, 0xC350
    ctx->pc = 0x11ec70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x11ec74: 0x1e4782a  slt         $t7, $t7, $a0
    ctx->pc = 0x11ec74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11ec78: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11EC78u;
    {
        const bool branch_taken_0x11ec78 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC78u;
        // 0x11ec7c: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec78) {
            ctx->pc = 0x11ECA4u;
            goto label_11eca4;
        }
    }
    ctx->pc = 0x11EC80u;
    // 0x11ec80: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ec80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_11ec84:
    // 0x11ec84: 0x25ef36c8  addiu       $t7, $t7, 0x36C8
    ctx->pc = 0x11ec84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 14024));
label_11ec88:
    // 0x11ec88: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11ec88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11ec8c: 0xc5f40000  lwc1        $f20, 0x0($t7)
    ctx->pc = 0x11ec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ec90: 0xc047a8e  jal         func_11EA38
    ctx->pc = 0x11EC90u;
    SET_GPR_U32(ctx, 31, 0x11EC98u);
    ctx->pc = 0x11EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC90u;
    // 0x11ec94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA38u, 0x11EC90u, 0x11EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC98u;
label_11ec98:
    // 0x11ec98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x11ec98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x11ec9c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x11EC9Cu;
    {
        const bool branch_taken_0x11ec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC9Cu;
        // 0x11eca0: 0x440c0000  mfc1        $t4, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec9c) {
            ctx->pc = 0x11EC5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ec5c;
        }
    }
    ctx->pc = 0x11ECA4u;
label_11eca4:
    // 0x11eca4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11ECA4u;
    {
        const bool branch_taken_0x11eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECA4u;
        // 0x11eca8: 0x25ef36cc  addiu       $t7, $t7, 0x36CC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 14028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eca4) {
            ctx->pc = 0x11EC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ec88;
        }
    }
    ctx->pc = 0x11ECACu;
}
