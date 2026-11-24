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

// Function: sub_003E7ED0
// Address: 0x3e7ed0 - 0x3e82f0
void sub_003E7ED0_0x3e7ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7ED0_0x3e7ed0");
#endif

    switch (ctx->pc) {
        case 0x3e7f00u: goto label_3e7f00;
        case 0x3e7f38u: goto label_3e7f38;
        case 0x3e7f70u: goto label_3e7f70;
        case 0x3e7ff0u: goto label_3e7ff0;
        case 0x3e8040u: goto label_3e8040;
        case 0x3e8050u: goto label_3e8050;
        case 0x3e809cu: goto label_3e809c;
        case 0x3e80e4u: goto label_3e80e4;
        case 0x3e8118u: goto label_3e8118;
        case 0x3e813cu: goto label_3e813c;
        case 0x3e8170u: goto label_3e8170;
        case 0x3e819cu: goto label_3e819c;
        case 0x3e81c0u: goto label_3e81c0;
        case 0x3e822cu: goto label_3e822c;
        case 0x3e823cu: goto label_3e823c;
        case 0x3e82a0u: goto label_3e82a0;
        default: break;
    }

    ctx->pc = 0x3e7ed0u;

    // 0x3e7ed0: 0x27bdfa50  addiu       $sp, $sp, -0x5B0
    ctx->pc = 0x3e7ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965840));
    // 0x3e7ed4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e7ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e7ed8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3e7ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3e7edc: 0x24a5fb00  addiu       $a1, $a1, -0x500
    ctx->pc = 0x3e7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966016));
    // 0x3e7ee0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3e7ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3e7ee4: 0x27a603f0  addiu       $a2, $sp, 0x3F0
    ctx->pc = 0x3e7ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x3e7ee8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e7ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3e7eec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e7eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7ef0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e7ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e7ef4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3e7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3e7ef8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e7efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e7efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e7f00:
    // 0x3e7f00: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3e7f00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e7f04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e7f08: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3e7f08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3e7f0c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e7f10: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e7f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e7f14: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E7F14u;
    {
        const bool branch_taken_0x3e7f14 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x3e7f14) {
            ctx->pc = 0x3E7F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7f00;
        }
    }
    ctx->pc = 0x3E7F1Cu;
    // 0x3e7f1c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3e7f1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e7f20: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x3e7f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x3e7f24: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3e7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3e7f28: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e7f2c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x3e7f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x3e7f30: 0x24a5fcc0  addiu       $a1, $a1, -0x340
    ctx->pc = 0x3e7f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966464));
    // 0x3e7f34: 0x0  nop
    ctx->pc = 0x3e7f34u;
    // NOP
label_3e7f38:
    // 0x3e7f38: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3e7f38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e7f3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e7f40: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3e7f40u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3e7f44: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e7f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e7f48: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3e7f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3e7f4c: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E7F4Cu;
    {
        const bool branch_taken_0x3e7f4c = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x3e7f4c) {
            ctx->pc = 0x3E7F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7f38;
        }
    }
    ctx->pc = 0x3E7F54u;
    // 0x3e7f54: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3e7f54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e7f58: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e7f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e7f5c: 0x24c6fe80  addiu       $a2, $a2, -0x180
    ctx->pc = 0x3e7f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966912));
    // 0x3e7f60: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3e7f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3e7f64: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3e7f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e7f68: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3e7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3e7f6c: 0x0  nop
    ctx->pc = 0x3e7f6cu;
    // NOP
label_3e7f70:
    // 0x3e7f70: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3e7f70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e7f74: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e7f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e7f78: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3e7f78u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3e7f7c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3e7f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3e7f80: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3e7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3e7f84: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E7F84u;
    {
        const bool branch_taken_0x3e7f84 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x3e7f84) {
            ctx->pc = 0x3E7F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7f70;
        }
    }
    ctx->pc = 0x3E7F8Cu;
    // 0x3e7f8c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x3e7f8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e7f90: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e7f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e7f94: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3e7f94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3e7f98: 0x82840084  lb          $a0, 0x84($s4)
    ctx->pc = 0x3e7f98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3e7f9c: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e7fa0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x3e7fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3e7fa4: 0x106000ca  beqz        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x3E7FA4u;
    {
        const bool branch_taken_0x3e7fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FA4u;
        // 0x3e7fa8: 0x80870014  lb          $a3, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fa4) {
            ctx->pc = 0x3E82D0u;
            goto label_3e82d0;
        }
    }
    ctx->pc = 0x3E7FACu;
    // 0x3e7fac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e7facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e7fb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e7fb4: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e7fb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e7fb8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7FB8u;
    {
        const bool branch_taken_0x3e7fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FB8u;
        // 0x3e7fbc: 0x27b303f0  addiu       $s3, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fb8) {
            ctx->pc = 0x3E7FC8u;
            goto label_3e7fc8;
        }
    }
    ctx->pc = 0x3E7FC0u;
    // 0x3e7fc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7FC0u;
    {
        const bool branch_taken_0x3e7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7fc0) {
            ctx->pc = 0x3E7FE8u;
            goto label_3e7fe8;
        }
    }
    ctx->pc = 0x3E7FC8u;
label_3e7fc8:
    // 0x3e7fc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e7fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e7fcc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7FCCu;
    {
        const bool branch_taken_0x3e7fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FCCu;
        // 0x3e7fd0: 0x27b30070  addiu       $s3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fcc) {
            ctx->pc = 0x3E7FE0u;
            goto label_3e7fe0;
        }
    }
    ctx->pc = 0x3E7FD4u;
    // 0x3e7fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7FD4u;
    {
        const bool branch_taken_0x3e7fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7fd4) {
            ctx->pc = 0x3E7FE8u;
            goto label_3e7fe8;
        }
    }
    ctx->pc = 0x3E7FDCu;
    // 0x3e7fdc: 0x0  nop
    ctx->pc = 0x3e7fdcu;
    // NOP
label_3e7fe0:
    // 0x3e7fe0: 0x27b30230  addiu       $s3, $sp, 0x230
    ctx->pc = 0x3e7fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x3e7fe4: 0x0  nop
    ctx->pc = 0x3e7fe4u;
    // NOP
label_3e7fe8:
    // 0x3e7fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e7fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7fec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e7fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e7ff0:
    // 0x3e7ff0: 0x8ca400a4  lw          $a0, 0xA4($a1)
    ctx->pc = 0x3e7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x3e7ff4: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x3e7ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x3e7ff8: 0x28c30009  slti        $v1, $a2, 0x9
    ctx->pc = 0x3e7ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e7ffc: 0xaca400a0  sw          $a0, 0xA0($a1)
    ctx->pc = 0x3e7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 4));
    // 0x3e8000: 0x8ca400a8  lw          $a0, 0xA8($a1)
    ctx->pc = 0x3e8000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x3e8004: 0xaca400a4  sw          $a0, 0xA4($a1)
    ctx->pc = 0x3e8004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 4));
    // 0x3e8008: 0x8ca400ac  lw          $a0, 0xAC($a1)
    ctx->pc = 0x3e8008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
    // 0x3e800c: 0xaca400a8  sw          $a0, 0xA8($a1)
    ctx->pc = 0x3e800cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 4));
    // 0x3e8010: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3E8010u;
    {
        const bool branch_taken_0x3e8010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8010u;
        // 0x3e8014: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8010) {
            ctx->pc = 0x3E7FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7ff0;
        }
    }
    ctx->pc = 0x3E8018u;
    // 0x3e8018: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e8018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e801c: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x3e801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x3e8020: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x3e8020u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x3e8024: 0x2471001e  addiu       $s1, $v1, 0x1E
    ctx->pc = 0x3e8024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x3e8028: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e8028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e802c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e802cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8030: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e8030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e8034: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e8034u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e8038: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3e8038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e803c: 0xae8300c4  sw          $v1, 0xC4($s4)
    ctx->pc = 0x3e803cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 3));
label_3e8040:
    // 0x3e8040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e8040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e8044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8048: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e8048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e804c: 0x0  nop
    ctx->pc = 0x3e804cu;
    // NOP
label_3e8050:
    // 0x3e8050: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x3e8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x3e8054: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e8054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e8058: 0x8ca400a0  lw          $a0, 0xA0($a1)
    ctx->pc = 0x3e8058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x3e805c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3e805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3e8060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e8060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8064: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8064u;
    {
        const bool branch_taken_0x3e8064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e8064) {
            ctx->pc = 0x3E8078u;
            goto label_3e8078;
        }
    }
    ctx->pc = 0x3E806Cu;
    // 0x3e806c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3E806Cu;
    {
        const bool branch_taken_0x3e806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E806Cu;
        // 0x3e8070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e806c) {
            ctx->pc = 0x3E8088u;
            goto label_3e8088;
        }
    }
    ctx->pc = 0x3E8074u;
    // 0x3e8074: 0x0  nop
    ctx->pc = 0x3e8074u;
    // NOP
label_3e8078:
    // 0x3e8078: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e8078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e807c: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x3e807cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3e8080: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E8080u;
    {
        const bool branch_taken_0x3e8080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8080u;
        // 0x3e8084: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8080) {
            ctx->pc = 0x3E8050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8050;
        }
    }
    ctx->pc = 0x3E8088u;
label_3e8088:
    // 0x3e8088: 0x10c00039  beqz        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x3E8088u;
    {
        const bool branch_taken_0x3e8088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8088u;
        // 0x3e808c: 0x268400a0  addiu       $a0, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8088) {
            ctx->pc = 0x3E8170u;
            goto label_3e8170;
        }
    }
    ctx->pc = 0x3E8090u;
    // 0x3e8090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e8090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8094: 0xc049590  jal         func_125640
    ctx->pc = 0x3E8094u;
    SET_GPR_U32(ctx, 31, 0x3E809Cu);
    ctx->pc = 0x3E8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8094u;
    // 0x3e8098: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E8094u, 0x3E809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E809Cu;
label_3e809c:
    // 0x3e809c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e80a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e80a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e80a4: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e80a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e80a8: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E80A8u;
    {
        const bool branch_taken_0x3e80a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e80a8) {
            ctx->pc = 0x3E8120u;
            goto label_3e8120;
        }
    }
    ctx->pc = 0x3E80B0u;
    // 0x3e80b0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3e80b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e80b4: 0x1464002e  bne         $v1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3E80B4u;
    {
        const bool branch_taken_0x3e80b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e80b4) {
            ctx->pc = 0x3E8170u;
            goto label_3e8170;
        }
    }
    ctx->pc = 0x3E80BCu;
    // 0x3e80bc: 0x92840054  lbu         $a0, 0x54($s4)
    ctx->pc = 0x3e80bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x3e80c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e80c4: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x3e80c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x3e80c8: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E80C8u;
    {
        const bool branch_taken_0x3e80c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e80c8) {
            ctx->pc = 0x3E8170u;
            goto label_3e8170;
        }
    }
    ctx->pc = 0x3E80D0u;
    // 0x3e80d0: 0x82830084  lb          $v1, 0x84($s4)
    ctx->pc = 0x3e80d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x3e80d4: 0x14700026  bne         $v1, $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3E80D4u;
    {
        const bool branch_taken_0x3e80d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80D4u;
        // 0x3e80d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e80d4) {
            ctx->pc = 0x3E8170u;
            goto label_3e8170;
        }
    }
    ctx->pc = 0x3E80DCu;
    // 0x3e80dc: 0xc0f9f18  jal         func_3E7C60
    ctx->pc = 0x3E80DCu;
    SET_GPR_U32(ctx, 31, 0x3E80E4u);
    ctx->pc = 0x3E7C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7C60u, 0x3E80DCu, 0x3E80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E80E4u;
label_3e80e4:
    // 0x3e80e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e80e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e80e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e80ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e80ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e80f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e80f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e80f4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e80f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e80f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e80fc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e80fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e8100: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e8100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e8104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8108: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e8108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e810c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e810cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8110: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E8110u;
    SET_GPR_U32(ctx, 31, 0x3E8118u);
    ctx->pc = 0x3E8114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8110u;
    // 0x3e8114: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E8110u, 0x3E8118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8118u;
label_3e8118:
    // 0x3e8118: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3E8118u;
    {
        const bool branch_taken_0x3e8118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8118) {
            ctx->pc = 0x3E8170u;
            goto label_3e8170;
        }
    }
    ctx->pc = 0x3E8120u;
label_3e8120:
    // 0x3e8120: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x3e8120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3e8124: 0x8064001e  lb          $a0, 0x1E($v1)
    ctx->pc = 0x3e8124u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x3e8128: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e8128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e812c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E812Cu;
    {
        const bool branch_taken_0x3e812c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E812Cu;
        // 0x3e8130: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e812c) {
            ctx->pc = 0x3E8170u;
            goto label_3e8170;
        }
    }
    ctx->pc = 0x3E8134u;
    // 0x3e8134: 0xc0f9f18  jal         func_3E7C60
    ctx->pc = 0x3E8134u;
    SET_GPR_U32(ctx, 31, 0x3E813Cu);
    ctx->pc = 0x3E8138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8134u;
    // 0x3e8138: 0xa2900084  sb          $s0, 0x84($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 132), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7C60u, 0x3E8134u, 0x3E813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E813Cu;
label_3e813c:
    // 0x3e813c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e813cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e8140: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e8140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e8144: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e8144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e8148: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e8148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e814c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e8150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e8150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8154: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e8154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e8158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e8158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e815c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e815cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8160: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e8160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8164: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e8164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8168: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E8168u;
    SET_GPR_U32(ctx, 31, 0x3E8170u);
    ctx->pc = 0x3E816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8168u;
    // 0x3e816c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E8168u, 0x3E8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8170u;
label_3e8170:
    // 0x3e8170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e8170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e8174: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x3e8174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3e8178: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3E8178u;
    {
        const bool branch_taken_0x3e8178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8178u;
        // 0x3e817c: 0x2652000a  addiu       $s2, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8178) {
            ctx->pc = 0x3E8040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8040;
        }
    }
    ctx->pc = 0x3E8180u;
    // 0x3e8180: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e8180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e8184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e8184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8188: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e8188u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e818c: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3E818Cu;
    {
        const bool branch_taken_0x3e818c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E818Cu;
        // 0x3e8190: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e818c) {
            ctx->pc = 0x3E82D0u;
            goto label_3e82d0;
        }
    }
    ctx->pc = 0x3E8194u;
    // 0x3e8194: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x3E8194u;
    SET_GPR_U32(ctx, 31, 0x3E819Cu);
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x3E8194u, 0x3E819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E819Cu;
label_3e819c:
    // 0x3e819c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e81a0: 0x1043004b  beq         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x3E81A0u;
    {
        const bool branch_taken_0x3e81a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e81a0) {
            ctx->pc = 0x3E82D0u;
            goto label_3e82d0;
        }
    }
    ctx->pc = 0x3E81A8u;
    // 0x3e81a8: 0x92830054  lbu         $v1, 0x54($s4)
    ctx->pc = 0x3e81a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x3e81ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e81acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e81b0: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x3e81b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x3e81b4: 0x14660046  bne         $v1, $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x3E81B4u;
    {
        const bool branch_taken_0x3e81b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81B4u;
        // 0x3e81b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e81b4) {
            ctx->pc = 0x3E82D0u;
            goto label_3e82d0;
        }
    }
    ctx->pc = 0x3E81BCu;
    // 0x3e81bc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3e81bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e81c0:
    // 0x3e81c0: 0x8ce400a0  lw          $a0, 0xA0($a3)
    ctx->pc = 0x3e81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x3e81c4: 0x8e630190  lw          $v1, 0x190($s3)
    ctx->pc = 0x3e81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x3e81c8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E81C8u;
    {
        const bool branch_taken_0x3e81c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e81c8) {
            ctx->pc = 0x3E81D8u;
            goto label_3e81d8;
        }
    }
    ctx->pc = 0x3E81D0u;
    // 0x3e81d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E81D0u;
    {
        const bool branch_taken_0x3e81d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81D0u;
        // 0x3e81d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e81d0) {
            ctx->pc = 0x3E81F0u;
            goto label_3e81f0;
        }
    }
    ctx->pc = 0x3E81D8u;
label_3e81d8:
    // 0x3e81d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e81d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e81dc: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x3e81dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3e81e0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3e81e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3e81e4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3E81E4u;
    {
        const bool branch_taken_0x3e81e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81E4u;
        // 0x3e81e8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e81e4) {
            ctx->pc = 0x3E81C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e81c0;
        }
    }
    ctx->pc = 0x3E81ECu;
    // 0x3e81ec: 0x0  nop
    ctx->pc = 0x3e81ecu;
    // NOP
label_3e81f0:
    // 0x3e81f0: 0x10c00037  beqz        $a2, . + 4 + (0x37 << 2)
    ctx->pc = 0x3E81F0u;
    {
        const bool branch_taken_0x3e81f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e81f0) {
            ctx->pc = 0x3E82D0u;
            goto label_3e82d0;
        }
    }
    ctx->pc = 0x3E81F8u;
    // 0x3e81f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e81fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e81fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e8200: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e8200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e8204: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e8204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e8208: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e8208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e820c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e820cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8210: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e8210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e8214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e8214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8218: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e8218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e821c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e821cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8220: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e8220u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8224: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E8224u;
    SET_GPR_U32(ctx, 31, 0x3E822Cu);
    ctx->pc = 0x3E8228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8224u;
    // 0x3e8228: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E8224u, 0x3E822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E822Cu;
label_3e822c:
    // 0x3e822c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8230: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3e8230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e8234: 0xc0f8ca0  jal         func_3E3280
    ctx->pc = 0x3E8234u;
    SET_GPR_U32(ctx, 31, 0x3E823Cu);
    ctx->pc = 0x3E8238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8234u;
    // 0x3e8238: 0xa2820086  sb          $v0, 0x86($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 134), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3280u, 0x3E8234u, 0x3E823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E823Cu;
label_3e823c:
    // 0x3e823c: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x3e823cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3e8240: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e8240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8244: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e8248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e824c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3e824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3e8250: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x3e8250u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e8254: 0xa024ec40  sb          $a0, -0x13C0($at)
    ctx->pc = 0x3e8254u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EC40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC40u, _value); } while (0);
    // 0x3e8258: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e825c: 0xa024ec54  sb          $a0, -0x13AC($at)
    ctx->pc = 0x3e825cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EC54u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC54u, _value); } while (0);
    // 0x3e8260: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8264: 0xa024ec68  sb          $a0, -0x1398($at)
    ctx->pc = 0x3e8264u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC68u, _value); } while (0);
    // 0x3e8268: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e826c: 0xa024ec7c  sb          $a0, -0x1384($at)
    ctx->pc = 0x3e826cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EC7Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC7Cu, _value); } while (0);
    // 0x3e8270: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8274: 0xa024ec90  sb          $a0, -0x1370($at)
    ctx->pc = 0x3e8274u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EC90u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EC90u, _value); } while (0);
    // 0x3e8278: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e827c: 0xa024eca4  sb          $a0, -0x135C($at)
    ctx->pc = 0x3e827cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65ECA4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ECA4u, _value); } while (0);
    // 0x3e8280: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8284: 0xa024ecb8  sb          $a0, -0x1348($at)
    ctx->pc = 0x3e8284u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65ECB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ECB8u, _value); } while (0);
    // 0x3e8288: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e828c: 0xa024eccc  sb          $a0, -0x1334($at)
    ctx->pc = 0x3e828cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65ECCCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65ECCCu, _value); } while (0);
    // 0x3e8290: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8294: 0xa024ee68  sb          $a0, -0x1198($at)
    ctx->pc = 0x3e8294u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x65EE68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65EE68u, _value); } while (0);
    // 0x3e8298: 0x86860008  lh          $a2, 0x8($s4)
    ctx->pc = 0x3e8298u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3e829c: 0x0  nop
    ctx->pc = 0x3e829cu;
    // NOP
label_3e82a0:
    // 0x3e82a0: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x3e82a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x3e82a4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3e82a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3e82a8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3e82a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e82ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e82acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3e82b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E82B0u;
    {
        const bool branch_taken_0x3e82b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e82b0) {
            ctx->pc = 0x3E82C0u;
            goto label_3e82c0;
        }
    }
    ctx->pc = 0x3E82B8u;
    // 0x3e82b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E82B8u;
    {
        const bool branch_taken_0x3e82b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82B8u;
        // 0x3e82bc: 0xa2850059  sb          $a1, 0x59($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 89), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82b8) {
            ctx->pc = 0x3E82D0u;
            goto label_3e82d0;
        }
    }
    ctx->pc = 0x3E82C0u;
label_3e82c0:
    // 0x3e82c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3e82c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e82c4: 0x28a10008  slti        $at, $a1, 0x8
    ctx->pc = 0x3e82c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e82c8: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E82C8u;
    {
        const bool branch_taken_0x3e82c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e82c8) {
            ctx->pc = 0x3E82A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e82a0;
        }
    }
    ctx->pc = 0x3E82D0u;
label_3e82d0:
    // 0x3e82d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3e82d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e82d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e82d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e82d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e82d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e82dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e82dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e82e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e82e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e82e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e82e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e82e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E82E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E82ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82E8u;
        // 0x3e82ec: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E82E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E82F0u;
}
