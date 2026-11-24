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

// Function: sub_003DFDC0
// Address: 0x3dfdc0 - 0x3dfecc
void sub_003DFDC0_0x3dfdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFDC0_0x3dfdc0");
#endif

    switch (ctx->pc) {
        case 0x3dfdd4u: goto label_3dfdd4;
        default: break;
    }

    ctx->pc = 0x3dfdc0u;

    // 0x3dfdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dfdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dfdc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dfdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dfdc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dfdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dfdcc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3DFDCCu;
    SET_GPR_U32(ctx, 31, 0x3DFDD4u);
    ctx->pc = 0x3DFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFDCCu;
    // 0x3dfdd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3DFDCCu, 0x3DFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFDD4u;
label_3dfdd4:
    // 0x3dfdd4: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3dfdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3dfdd8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3dfdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3dfddc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3dfddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3dfde0: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3dfde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3dfde4: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x3dfde8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3dfde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3dfdec: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x3dfdf0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3dfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3dfdf4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3dfdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3dfdf8: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3dfdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3dfdfc: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x3dfe00: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3dfe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3dfe04: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x3dfe08: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3dfe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3dfe0c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3dfe0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3dfe10: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3dfe10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3dfe14: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x3dfe18: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3dfe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3dfe1c: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x3dfe20: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3dfe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3dfe24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3dfe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3dfe28: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3dfe28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3dfe2c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x3dfe30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3dfe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3dfe34: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x3dfe34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x3dfe38: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3dfe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3dfe3c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DFE3Cu;
    {
        const bool branch_taken_0x3dfe3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE3Cu;
        // 0x3dfe40: 0x3c0444fa  lui         $a0, 0x44FA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe3c) {
            ctx->pc = 0x3DFE60u;
            goto label_3dfe60;
        }
    }
    ctx->pc = 0x3DFE44u;
    // 0x3dfe44: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3dfe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3dfe48: 0xaca40084  sw          $a0, 0x84($a1)
    ctx->pc = 0x3dfe48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 4));
    // 0x3dfe4c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x3dfe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3dfe50: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3dfe50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3dfe54: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3dfe54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3dfe58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3dfe58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3dfe5c: 0x0  nop
    ctx->pc = 0x3dfe5cu;
    // NOP
label_3dfe60:
    // 0x3dfe60: 0x920407d8  lbu         $a0, 0x7D8($s0)
    ctx->pc = 0x3dfe60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x3dfe64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dfe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dfe68: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DFE68u;
    {
        const bool branch_taken_0x3dfe68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dfe68) {
            ctx->pc = 0x3DFE90u;
            goto label_3dfe90;
        }
    }
    ctx->pc = 0x3DFE70u;
    // 0x3dfe70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DFE70u;
    {
        const bool branch_taken_0x3dfe70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfe70) {
            ctx->pc = 0x3DFE80u;
            goto label_3dfe80;
        }
    }
    ctx->pc = 0x3DFE78u;
    // 0x3dfe78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3DFE78u;
    {
        const bool branch_taken_0x3dfe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfe78) {
            ctx->pc = 0x3DFEB0u;
            goto label_3dfeb0;
        }
    }
    ctx->pc = 0x3DFE80u;
label_3dfe80:
    // 0x3dfe80: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3dfe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3dfe84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DFE84u;
    {
        const bool branch_taken_0x3dfe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE84u;
        // 0x3dfe88: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfe84) {
            ctx->pc = 0x3DFEB0u;
            goto label_3dfeb0;
        }
    }
    ctx->pc = 0x3DFE8Cu;
    // 0x3dfe8c: 0x0  nop
    ctx->pc = 0x3dfe8cu;
    // NOP
label_3dfe90:
    // 0x3dfe90: 0x8e0406c8  lw          $a0, 0x6C8($s0)
    ctx->pc = 0x3dfe90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3dfe94: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3dfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3dfe98: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3dfe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3dfe9c: 0xae0406c8  sw          $a0, 0x6C8($s0)
    ctx->pc = 0x3dfe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 4));
    // 0x3dfea0: 0x8e0406cc  lw          $a0, 0x6CC($s0)
    ctx->pc = 0x3dfea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3dfea4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3dfea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3dfea8: 0xae0406cc  sw          $a0, 0x6CC($s0)
    ctx->pc = 0x3dfea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 4));
    // 0x3dfeac: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3dfeacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3dfeb0:
    // 0x3dfeb0: 0xae002c74  sw          $zero, 0x2C74($s0)
    ctx->pc = 0x3dfeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11380), GPR_U32(ctx, 0));
    // 0x3dfeb4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x3dfeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3dfeb8: 0xa2030730  sb          $v1, 0x730($s0)
    ctx->pc = 0x3dfeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dfebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dfebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dfec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dfec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dfec4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFEC4u;
        // 0x3dfec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFECCu;
}
