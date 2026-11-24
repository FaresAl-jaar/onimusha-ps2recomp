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

// Function: sub_001A5F80
// Address: 0x1a5f80 - 0x1a60e8
void sub_001A5F80_0x1a5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5F80_0x1a5f80");
#endif

    switch (ctx->pc) {
        case 0x1a5fd0u: goto label_1a5fd0;
        case 0x1a6084u: goto label_1a6084;
        default: break;
    }

    ctx->pc = 0x1a5f80u;

    // 0x1a5f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a5f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5f90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5f98: 0x8c827838  lw          $v0, 0x7838($a0)
    ctx->pc = 0x1a5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30776)));
    // 0x1a5f9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5F9Cu;
    {
        const bool branch_taken_0x1a5f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F9Cu;
        // 0x1a5fa0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f9c) {
            ctx->pc = 0x1A5FB0u;
            goto label_1a5fb0;
        }
    }
    ctx->pc = 0x1A5FA4u;
    // 0x1a5fa4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1A5FA4u;
    {
        const bool branch_taken_0x1a5fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FA4u;
        // 0x1a5fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fa4) {
            ctx->pc = 0x1A60D0u;
            goto label_1a60d0;
        }
    }
    ctx->pc = 0x1A5FACu;
    // 0x1a5fac: 0x0  nop
    ctx->pc = 0x1a5facu;
    // NOP
label_1a5fb0:
    // 0x1a5fb0: 0x8e427830  lw          $v0, 0x7830($s2)
    ctx->pc = 0x1a5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30768)));
    // 0x1a5fb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5FB4u;
    {
        const bool branch_taken_0x1a5fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB4u;
        // 0x1a5fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fb4) {
            ctx->pc = 0x1A5FC8u;
            goto label_1a5fc8;
        }
    }
    ctx->pc = 0x1A5FBCu;
    // 0x1a5fbc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1A5FBCu;
    {
        const bool branch_taken_0x1a5fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fbc) {
            ctx->pc = 0x1A60D0u;
            goto label_1a60d0;
        }
    }
    ctx->pc = 0x1A5FC4u;
    // 0x1a5fc4: 0x0  nop
    ctx->pc = 0x1a5fc4u;
    // NOP
label_1a5fc8:
    // 0x1a5fc8: 0xc069860  jal         func_1A6180
    ctx->pc = 0x1A5FC8u;
    SET_GPR_U32(ctx, 31, 0x1A5FD0u);
    ctx->pc = 0x1A5FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FC8u;
    // 0x1a5fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6180u, 0x1A5FC8u, 0x1A5FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FD0u;
label_1a5fd0:
    // 0x1a5fd0: 0x8e50783c  lw          $s0, 0x783C($s2)
    ctx->pc = 0x1a5fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1a5fd4: 0x8e457834  lw          $a1, 0x7834($s2)
    ctx->pc = 0x1a5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a5fd8: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x1a5fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a5fdc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5FDCu;
    {
        const bool branch_taken_0x1a5fdc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FDCu;
        // 0x1a5fe0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fdc) {
            ctx->pc = 0x1A5FECu;
            goto label_1a5fec;
        }
    }
    ctx->pc = 0x1A5FE4u;
    // 0x1a5fe4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1a5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1a5fe8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a5fec:
    // 0x1a5fec: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x1a5fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a5ff0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5FF0u;
    {
        const bool branch_taken_0x1a5ff0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ff0) {
            ctx->pc = 0x1A6000u;
            goto label_1a6000;
        }
    }
    ctx->pc = 0x1A5FF8u;
    // 0x1a5ff8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A5FF8u;
    {
        const bool branch_taken_0x1a5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF8u;
        // 0x1a5ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff8) {
            ctx->pc = 0x1A60D0u;
            goto label_1a60d0;
        }
    }
    ctx->pc = 0x1A6000u;
label_1a6000:
    // 0x1a6000: 0x6200023  bltz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A6000u;
    {
        const bool branch_taken_0x1a6000 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x1a6000) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A6008u;
    // 0x1a6008: 0x8e47783c  lw          $a3, 0x783C($s2)
    ctx->pc = 0x1a6008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30780)));
    // 0x1a600c: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x1a600cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1a6010: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1a6014: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a6014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a6018: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a601c: 0x1022825  or          $a1, $t0, $v0
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1a6020: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x1a6020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a6024: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a6024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a6028: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1a6028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1a602c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a6030: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x1a6030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a6034: 0xae44783c  sw          $a0, 0x783C($s2)
    ctx->pc = 0x1a6034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30780), GPR_U32(ctx, 4));
    // 0x1a6038: 0x8e447834  lw          $a0, 0x7834($s2)
    ctx->pc = 0x1a6038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a603c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1a603cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1a6040: 0x8e447834  lw          $a0, 0x7834($s2)
    ctx->pc = 0x1a6040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a6044: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a6044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a6048: 0x8e447834  lw          $a0, 0x7834($s2)
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a604c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1a604cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1a6050: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1a6050u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1a6054: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a6054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a6058: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a6058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a605c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x1a605cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1a6060: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a6060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a6064: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6064u;
    {
        const bool branch_taken_0x1a6064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6064) {
            ctx->pc = 0x1A6088u;
            goto label_1a6088;
        }
    }
    ctx->pc = 0x1A606Cu;
    // 0x1a606c: 0x8e457838  lw          $a1, 0x7838($s2)
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30776)));
    // 0x1a6070: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1a6070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1a6074: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a6074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6078: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x1a6078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x1a607c: 0xc061c60  jal         func_187180
    ctx->pc = 0x1A607Cu;
    SET_GPR_U32(ctx, 31, 0x1A6084u);
    ctx->pc = 0x1A6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A607Cu;
    // 0x1a6080: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1A607Cu, 0x1A6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6084u;
label_1a6084:
    // 0x1a6084: 0x0  nop
    ctx->pc = 0x1a6084u;
    // NOP
label_1a6088:
    // 0x1a6088: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A6088u;
    {
        const bool branch_taken_0x1a6088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6088u;
        // 0x1a608c: 0xae407838  sw          $zero, 0x7838($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 30776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6088) {
            ctx->pc = 0x1A60C0u;
            goto label_1a60c0;
        }
    }
    ctx->pc = 0x1A6090u;
label_1a6090:
    // 0x1a6090: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1a6094: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a6094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a6098: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a6098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a609c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a609cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a60a0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1a60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1a60a4: 0x1021825  or          $v1, $t0, $v0
    ctx->pc = 0x1a60a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1a60a8: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1a60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x1a60ac: 0x8e427834  lw          $v0, 0x7834($s2)
    ctx->pc = 0x1a60acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a60b0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a60b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a60b4: 0x8e427834  lw          $v0, 0x7834($s2)
    ctx->pc = 0x1a60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30772)));
    // 0x1a60b8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a60bc: 0x0  nop
    ctx->pc = 0x1a60bcu;
    // NOP
label_1a60c0:
    // 0x1a60c0: 0xae407834  sw          $zero, 0x7834($s2)
    ctx->pc = 0x1a60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30772), GPR_U32(ctx, 0));
    // 0x1a60c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a60c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60c8: 0xae407830  sw          $zero, 0x7830($s2)
    ctx->pc = 0x1a60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 30768), GPR_U32(ctx, 0));
    // 0x1a60cc: 0x0  nop
    ctx->pc = 0x1a60ccu;
    // NOP
label_1a60d0:
    // 0x1a60d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a60d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a60d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a60d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a60d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a60d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a60dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a60dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a60e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A60E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60E0u;
        // 0x1a60e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A60E8u;
}
