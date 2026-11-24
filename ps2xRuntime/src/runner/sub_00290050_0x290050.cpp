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

// Function: sub_00290050
// Address: 0x290050 - 0x2900e0
void sub_00290050_0x290050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290050_0x290050");
#endif

    switch (ctx->pc) {
        case 0x29006cu: goto label_29006c;
        case 0x290084u: goto label_290084;
        case 0x2900a0u: goto label_2900a0;
        default: break;
    }

    ctx->pc = 0x290050u;

    // 0x290050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290054: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x290054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x290058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29005c: 0x24844820  addiu       $a0, $a0, 0x4820
    ctx->pc = 0x29005cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    // 0x290060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290064: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x290064u;
    SET_GPR_U32(ctx, 31, 0x29006Cu);
    ctx->pc = 0x290068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290064u;
    // 0x290068: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x290064u, 0x29006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29006Cu;
label_29006c:
    // 0x29006c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29006cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x290070: 0xaf908ba0  sw          $s0, -0x7460($gp)
    ctx->pc = 0x290070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 16));
    // 0x290074: 0x27848ba0  addiu       $a0, $gp, -0x7460
    ctx->pc = 0x290074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    // 0x290078: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x290078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x29007c: 0xc0d1c6c  jal         func_3471B0
    ctx->pc = 0x29007Cu;
    SET_GPR_U32(ctx, 31, 0x290084u);
    ctx->pc = 0x290080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29007Cu;
    // 0x290080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3471B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3471B0u, 0x29007Cu, 0x290084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290084u;
label_290084:
    // 0x290084: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290084u;
    {
        const bool branch_taken_0x290084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290084) {
            ctx->pc = 0x290098u;
            goto label_290098;
        }
    }
    ctx->pc = 0x29008Cu;
    // 0x29008c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x29008Cu;
    {
        const bool branch_taken_0x29008c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29008Cu;
        // 0x290090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29008c) {
            ctx->pc = 0x2900D0u;
            goto label_2900d0;
        }
    }
    ctx->pc = 0x290094u;
    // 0x290094: 0x0  nop
    ctx->pc = 0x290094u;
    // NOP
label_290098:
    // 0x290098: 0xc0a3e60  jal         func_28F980
    ctx->pc = 0x290098u;
    SET_GPR_U32(ctx, 31, 0x2900A0u);
    ctx->pc = 0x29009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290098u;
    // 0x29009c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F980u, 0x290098u, 0x2900A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900A0u;
label_2900a0:
    // 0x2900a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2900A0u;
    {
        const bool branch_taken_0x2900a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2900a0) {
            ctx->pc = 0x2900C8u;
            goto label_2900c8;
        }
    }
    ctx->pc = 0x2900A8u;
    // 0x2900a8: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x2900a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x2900ac: 0x344250fc  ori         $v0, $v0, 0x50FC
    ctx->pc = 0x2900acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20732);
    // 0x2900b0: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2900B0u;
    {
        const bool branch_taken_0x2900b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2900B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900B0u;
        // 0x2900b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900b0) {
            ctx->pc = 0x2900BCu;
            goto label_2900bc;
        }
    }
    ctx->pc = 0x2900B8u;
    // 0x2900b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2900bc:
    // 0x2900bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2900BCu;
    {
        const bool branch_taken_0x2900bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2900bc) {
            ctx->pc = 0x2900D0u;
            goto label_2900d0;
        }
    }
    ctx->pc = 0x2900C4u;
    // 0x2900c4: 0x0  nop
    ctx->pc = 0x2900c4u;
    // NOP
label_2900c8:
    // 0x2900c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2900c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2900cc: 0x0  nop
    ctx->pc = 0x2900ccu;
    // NOP
label_2900d0:
    // 0x2900d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2900d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2900d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2900d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2900d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2900D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2900DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900D8u;
        // 0x2900dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2900D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2900E0u;
}
