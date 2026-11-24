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

// Function: sub_00252A50
// Address: 0x252a50 - 0x252be8
void sub_00252A50_0x252a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252A50_0x252a50");
#endif

    switch (ctx->pc) {
        case 0x252aa0u: goto label_252aa0;
        case 0x252aa8u: goto label_252aa8;
        case 0x252ad0u: goto label_252ad0;
        case 0x252ae4u: goto label_252ae4;
        case 0x252ae8u: goto label_252ae8;
        case 0x252b38u: goto label_252b38;
        case 0x252b4cu: goto label_252b4c;
        case 0x252b50u: goto label_252b50;
        case 0x252b88u: goto label_252b88;
        case 0x252b9cu: goto label_252b9c;
        case 0x252bb4u: goto label_252bb4;
        default: break;
    }

    ctx->pc = 0x252a50u;

    // 0x252a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252a54: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x252a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x252a58: 0x3c15004e  lui         $s5, 0x4E
    ctx->pc = 0x252a58u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)78 << 16));
    // 0x252a5c: 0x8ea2fb9c  lw          $v0, -0x464($s5)
    ctx->pc = 0x252a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DFB9Cu));
    // 0x252a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252a64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x252a68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x252a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x252a6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x252a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x252a70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x252a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x252a74: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x252A74u;
    {
        const bool branch_taken_0x252a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A74u;
        // 0x252a78: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a74) {
            ctx->pc = 0x252BB4u;
            goto label_252bb4;
        }
    }
    ctx->pc = 0x252A7Cu;
    // 0x252a7c: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x252a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x252a80: 0x3c14004e  lui         $s4, 0x4E
    ctx->pc = 0x252a80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)78 << 16));
    // 0x252a84: 0x2610fe38  addiu       $s0, $s0, -0x1C8
    ctx->pc = 0x252a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966840));
    // 0x252a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a90: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x252a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x252a94: 0x240608d0  addiu       $a2, $zero, 0x8D0
    ctx->pc = 0x252a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x252a98: 0xc049590  jal         func_125640
    ctx->pc = 0x252A98u;
    SET_GPR_U32(ctx, 31, 0x252AA0u);
    ctx->pc = 0x252A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A98u;
    // 0x252a9c: 0x2693fba4  addiu       $s3, $s4, -0x45C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x252A98u, 0x252AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AA0u;
label_252aa0:
    // 0x252aa0: 0xc091e8c  jal         func_247A30
    ctx->pc = 0x252AA0u;
    SET_GPR_U32(ctx, 31, 0x252AA8u);
    ctx->pc = 0x252AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252AA0u;
    // 0x252aa4: 0x3c12004e  lui         $s2, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)78 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A30u, 0x252AA0u, 0x252AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AA8u;
label_252aa8:
    // 0x252aa8: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x252aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x252aac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x252aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x252ab0: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x252ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x252ab4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x252ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x252ab8: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x252ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x252abc: 0xae44fe34  sw          $a0, -0x1CC($s2)
    ctx->pc = 0x252abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966836), GPR_U32(ctx, 4));
    // 0x252ac0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x252AC0u;
    {
        const bool branch_taken_0x252ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AC0u;
        // 0x252ac4: 0xae30fba0  sw          $s0, -0x460($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966176), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ac0) {
            ctx->pc = 0x252B08u;
            goto label_252b08;
        }
    }
    ctx->pc = 0x252AC8u;
    // 0x252ac8: 0xc0458c6  jal         func_116318
    ctx->pc = 0x252AC8u;
    SET_GPR_U32(ctx, 31, 0x252AD0u);
    ctx->pc = 0x252ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252AC8u;
    // 0x252acc: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116318u, 0x252AC8u, 0x252AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AD0u;
label_252ad0:
    // 0x252ad0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x252AD0u;
    {
        const bool branch_taken_0x252ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AD0u;
        // 0x252ad4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ad0) {
            ctx->pc = 0x252B08u;
            goto label_252b08;
        }
    }
    ctx->pc = 0x252AD8u;
    // 0x252ad8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x252ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x252adc: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x252ADCu;
    SET_GPR_U32(ctx, 31, 0x252AE4u);
    ctx->pc = 0x252AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252ADCu;
    // 0x252ae0: 0x2484ee70  addiu       $a0, $a0, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x252ADCu, 0x252AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AE4u;
label_252ae4:
    // 0x252ae4: 0x0  nop
    ctx->pc = 0x252ae4u;
    // NOP
label_252ae8:
    // 0x252ae8: 0x0  nop
    ctx->pc = 0x252ae8u;
    // NOP
    // 0x252aec: 0x0  nop
    ctx->pc = 0x252aecu;
    // NOP
    // 0x252af0: 0x0  nop
    ctx->pc = 0x252af0u;
    // NOP
    // 0x252af4: 0x0  nop
    ctx->pc = 0x252af4u;
    // NOP
    // 0x252af8: 0x0  nop
    ctx->pc = 0x252af8u;
    // NOP
    // 0x252afc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x252AFCu;
    {
        const bool branch_taken_0x252afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252afc) {
            ctx->pc = 0x252AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252ae8;
        }
    }
    ctx->pc = 0x252B04u;
    // 0x252b04: 0x0  nop
    ctx->pc = 0x252b04u;
    // NOP
label_252b08:
    // 0x252b08: 0x8e82fba4  lw          $v0, -0x45C($s4)
    ctx->pc = 0x252b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966180)));
    // 0x252b0c: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x252b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x252b10: 0x8e25fba0  lw          $a1, -0x460($s1)
    ctx->pc = 0x252b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966176)));
    // 0x252b14: 0x3c08004e  lui         $t0, 0x4E
    ctx->pc = 0x252b14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)78 << 16));
    // 0x252b18: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x252b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x252b1c: 0x8e47fe34  lw          $a3, -0x1CC($s2)
    ctx->pc = 0x252b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966836)));
    // 0x252b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x252b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x252b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b2c: 0xad02fba8  sw          $v0, -0x458($t0)
    ctx->pc = 0x252b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294966184), GPR_U32(ctx, 2));
    // 0x252b30: 0xc091da8  jal         func_2476A0
    ctx->pc = 0x252B30u;
    SET_GPR_U32(ctx, 31, 0x252B38u);
    ctx->pc = 0x252B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B30u;
    // 0x252b34: 0x3c10004e  lui         $s0, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2476A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2476A0u, 0x252B30u, 0x252B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B38u;
label_252b38:
    // 0x252b38: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x252B38u;
    {
        const bool branch_taken_0x252b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B38u;
        // 0x252b3c: 0xae02fe30  sw          $v0, -0x1D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b38) {
            ctx->pc = 0x252B70u;
            goto label_252b70;
        }
    }
    ctx->pc = 0x252B40u;
    // 0x252b40: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x252b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x252b44: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x252B44u;
    SET_GPR_U32(ctx, 31, 0x252B4Cu);
    ctx->pc = 0x252B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B44u;
    // 0x252b48: 0x2484eea0  addiu       $a0, $a0, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x252B44u, 0x252B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B4Cu;
label_252b4c:
    // 0x252b4c: 0x0  nop
    ctx->pc = 0x252b4cu;
    // NOP
label_252b50:
    // 0x252b50: 0x0  nop
    ctx->pc = 0x252b50u;
    // NOP
    // 0x252b54: 0x0  nop
    ctx->pc = 0x252b54u;
    // NOP
    // 0x252b58: 0x0  nop
    ctx->pc = 0x252b58u;
    // NOP
    // 0x252b5c: 0x0  nop
    ctx->pc = 0x252b5cu;
    // NOP
    // 0x252b60: 0x0  nop
    ctx->pc = 0x252b60u;
    // NOP
    // 0x252b64: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x252B64u;
    {
        const bool branch_taken_0x252b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b64) {
            ctx->pc = 0x252B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252b50;
        }
    }
    ctx->pc = 0x252B6Cu;
    // 0x252b6c: 0x0  nop
    ctx->pc = 0x252b6cu;
    // NOP
label_252b70:
    // 0x252b70: 0x2610fe30  addiu       $s0, $s0, -0x1D0
    ctx->pc = 0x252b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966832));
    // 0x252b74: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x252b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x252b78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x252b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252b7c: 0x24a52888  addiu       $a1, $a1, 0x2888
    ctx->pc = 0x252b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10376));
    // 0x252b80: 0xc091e28  jal         func_2478A0
    ctx->pc = 0x252B80u;
    SET_GPR_U32(ctx, 31, 0x252B88u);
    ctx->pc = 0x252B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B80u;
    // 0x252b84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2478A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2478A0u, 0x252B80u, 0x252B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B88u;
label_252b88:
    // 0x252b88: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x252b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x252b8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x252b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252b90: 0x24a52928  addiu       $a1, $a1, 0x2928
    ctx->pc = 0x252b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10536));
    // 0x252b94: 0xc091e2c  jal         func_2478B0
    ctx->pc = 0x252B94u;
    SET_GPR_U32(ctx, 31, 0x252B9Cu);
    ctx->pc = 0x252B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B94u;
    // 0x252b98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2478B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2478B0u, 0x252B94u, 0x252B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B9Cu;
label_252b9c:
    // 0x252b9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x252b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x252ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ba8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252bac: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x252BACu;
    SET_GPR_U32(ctx, 31, 0x252BB4u);
    ctx->pc = 0x252BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BACu;
    // 0x252bb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x252BACu, 0x252BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BB4u;
label_252bb4:
    // 0x252bb4: 0x26a3fb9c  addiu       $v1, $s5, -0x464
    ctx->pc = 0x252bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966172));
    // 0x252bb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x252bb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x252bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x252bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x252bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x252bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252bd4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x252bd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252bd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252bdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x252bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x252be0: 0x3e00008  jr          $ra
    ctx->pc = 0x252BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BE0u;
        // 0x252be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252BE8u;
}
