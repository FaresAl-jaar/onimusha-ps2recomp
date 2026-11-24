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

// Function: sub_00132980
// Address: 0x132980 - 0x132b60
void sub_00132980_0x132980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132980_0x132980");
#endif

    switch (ctx->pc) {
        case 0x1329a0u: goto label_1329a0;
        case 0x1329c0u: goto label_1329c0;
        case 0x132a14u: goto label_132a14;
        case 0x132a38u: goto label_132a38;
        default: break;
    }

    ctx->pc = 0x132980u;

    // 0x132980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x132984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x132988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13298c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132994: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x132994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132998: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x132998u;
    SET_GPR_U32(ctx, 31, 0x1329A0u);
    ctx->pc = 0x13299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132998u;
    // 0x13299c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x132998u, 0x1329A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329A0u;
label_1329a0:
    // 0x1329a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1329a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329a4: 0x12400066  beqz        $s2, . + 4 + (0x66 << 2)
    ctx->pc = 0x1329A4u;
    {
        const bool branch_taken_0x1329a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329a4) {
            ctx->pc = 0x132B40u;
            goto label_132b40;
        }
    }
    ctx->pc = 0x1329ACu;
    // 0x1329ac: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1329acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1329b0: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1329B0u;
    {
        const bool branch_taken_0x1329b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329B0u;
        // 0x1329b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329b0) {
            ctx->pc = 0x132B40u;
            goto label_132b40;
        }
    }
    ctx->pc = 0x1329B8u;
    // 0x1329b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1329B8u;
    {
        const bool branch_taken_0x1329b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329b8) {
            ctx->pc = 0x1329E0u;
            goto label_1329e0;
        }
    }
    ctx->pc = 0x1329C0u;
label_1329c0:
    // 0x1329c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1329c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1329c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1329c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1329c8: 0x0  nop
    ctx->pc = 0x1329c8u;
    // NOP
    // 0x1329cc: 0x0  nop
    ctx->pc = 0x1329ccu;
    // NOP
    // 0x1329d0: 0x0  nop
    ctx->pc = 0x1329d0u;
    // NOP
    // 0x1329d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1329D4u;
    {
        const bool branch_taken_0x1329d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329d4) {
            ctx->pc = 0x1329C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1329c0;
        }
    }
    ctx->pc = 0x1329DCu;
    // 0x1329dc: 0x0  nop
    ctx->pc = 0x1329dcu;
    // NOP
label_1329e0:
    // 0x1329e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1329E0u;
    {
        const bool branch_taken_0x1329e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1329E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329E0u;
        // 0x1329e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329e0) {
            ctx->pc = 0x1329F0u;
            goto label_1329f0;
        }
    }
    ctx->pc = 0x1329E8u;
    // 0x1329e8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1329E8u;
    {
        const bool branch_taken_0x1329e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329e8) {
            ctx->pc = 0x132B48u;
            goto label_132b48;
        }
    }
    ctx->pc = 0x1329F0u;
label_1329f0:
    // 0x1329f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1329F0u;
    {
        const bool branch_taken_0x1329f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329f0) {
            ctx->pc = 0x132A00u;
            goto label_132a00;
        }
    }
    ctx->pc = 0x1329F8u;
    // 0x1329f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1329F8u;
    {
        const bool branch_taken_0x1329f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329f8) {
            ctx->pc = 0x132A28u;
            goto label_132a28;
        }
    }
    ctx->pc = 0x132A00u;
label_132a00:
    // 0x132a00: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x132a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x132a04: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x132a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x132a08: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x132a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x132a0c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x132A0Cu;
    SET_GPR_U32(ctx, 31, 0x132A14u);
    ctx->pc = 0x132A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A0Cu;
    // 0x132a10: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x132A0Cu, 0x132A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A14u;
label_132a14:
    // 0x132a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a18: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132A18u;
    {
        const bool branch_taken_0x132a18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x132a18) {
            ctx->pc = 0x132A28u;
            goto label_132a28;
        }
    }
    ctx->pc = 0x132A20u;
    // 0x132a20: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x132A20u;
    {
        const bool branch_taken_0x132a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A20u;
        // 0x132a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a20) {
            ctx->pc = 0x132B48u;
            goto label_132b48;
        }
    }
    ctx->pc = 0x132A28u;
label_132a28:
    // 0x132a28: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x132a2c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x132A2Cu;
    {
        const bool branch_taken_0x132a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x132A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A2Cu;
        // 0x132a30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a2c) {
            ctx->pc = 0x132AD8u;
            goto label_132ad8;
        }
    }
    ctx->pc = 0x132A34u;
    // 0x132a34: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x132a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
label_132a38:
    // 0x132a38: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x132a38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x132a3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x132a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x132a40: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x132a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x132a44: 0x94c30010  lhu         $v1, 0x10($a2)
    ctx->pc = 0x132a44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x132a48: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x132a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x132a4c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x132a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x132a50: 0xdcc40020  ld          $a0, 0x20($a2)
    ctx->pc = 0x132a50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x132a54: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x132a54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x132a58: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x132a58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x132a5c: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x132a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x132a60: 0xdcc30030  ld          $v1, 0x30($a2)
    ctx->pc = 0x132a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x132a64: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x132a64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x132a68: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x132a68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x132a6c: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x132a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x132a70: 0xdcc30040  ld          $v1, 0x40($a2)
    ctx->pc = 0x132a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x132a74: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x132a74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x132a78: 0xdcc30048  ld          $v1, 0x48($a2)
    ctx->pc = 0x132a78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x132a7c: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x132a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x132a80: 0xdcc30050  ld          $v1, 0x50($a2)
    ctx->pc = 0x132a80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x132a84: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x132a84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x132a88: 0xdcc30058  ld          $v1, 0x58($a2)
    ctx->pc = 0x132a88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x132a8c: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x132a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x132a90: 0xdcc30060  ld          $v1, 0x60($a2)
    ctx->pc = 0x132a90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x132a94: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x132a94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x132a98: 0xdcc30068  ld          $v1, 0x68($a2)
    ctx->pc = 0x132a98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x132a9c: 0xfc430058  sd          $v1, 0x58($v0)
    ctx->pc = 0x132a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 3));
    // 0x132aa0: 0xdcc40070  ld          $a0, 0x70($a2)
    ctx->pc = 0x132aa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x132aa4: 0xdcc30078  ld          $v1, 0x78($a2)
    ctx->pc = 0x132aa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x132aa8: 0xfc440060  sd          $a0, 0x60($v0)
    ctx->pc = 0x132aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 4));
    // 0x132aac: 0xfc430068  sd          $v1, 0x68($v0)
    ctx->pc = 0x132aacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 3));
    // 0x132ab0: 0x78c30080  lq          $v1, 0x80($a2)
    ctx->pc = 0x132ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x132ab4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x132ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x132ab8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x132ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x132abc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x132abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x132ac0: 0x94c30080  lhu         $v1, 0x80($a2)
    ctx->pc = 0x132ac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x132ac4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x132ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x132ac8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x132ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x132acc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x132accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132ad0: 0x14c0ffd9  bnez        $a2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x132AD0u;
    {
        const bool branch_taken_0x132ad0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x132AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AD0u;
        // 0x132ad4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ad0) {
            ctx->pc = 0x132A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132a38;
        }
    }
    ctx->pc = 0x132AD8u;
label_132ad8:
    // 0x132ad8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x132ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x132adc: 0x34650002  ori         $a1, $v1, 0x2
    ctx->pc = 0x132adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x132ae0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x132ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x132ae4: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x132ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x132ae8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x132ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x132aec: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x132aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x132af0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x132af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x132af4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x132af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x132af8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x132af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x132afc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x132afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132b00: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x132b00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x132b04: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x132b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x132b08: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x132b08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x132b0c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x132b10: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x132b14: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x132b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x132b18: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x132b18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x132b1c: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x132b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x132b20: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x132b20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x132b24: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132B24u;
    {
        const bool branch_taken_0x132b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B24u;
        // 0x132b28: 0xfc400018  sd          $zero, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b24) {
            ctx->pc = 0x132B38u;
            goto label_132b38;
        }
    }
    ctx->pc = 0x132B2Cu;
    // 0x132b2c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x132b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x132b30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x132b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x132b34: 0x0  nop
    ctx->pc = 0x132b34u;
    // NOP
label_132b38:
    // 0x132b38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132B38u;
    {
        const bool branch_taken_0x132b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B38u;
        // 0x132b3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b38) {
            ctx->pc = 0x132B48u;
            goto label_132b48;
        }
    }
    ctx->pc = 0x132B40u;
label_132b40:
    // 0x132b40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b44: 0x0  nop
    ctx->pc = 0x132b44u;
    // NOP
label_132b48:
    // 0x132b48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x132b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132b4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132b58: 0x3e00008  jr          $ra
    ctx->pc = 0x132B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B58u;
        // 0x132b5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132B60u;
}
