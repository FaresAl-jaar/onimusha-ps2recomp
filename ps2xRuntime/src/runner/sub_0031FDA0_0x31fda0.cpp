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

// Function: sub_0031FDA0
// Address: 0x31fda0 - 0x31ff00
void sub_0031FDA0_0x31fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FDA0_0x31fda0");
#endif

    ctx->pc = 0x31fda0u;

    // 0x31fda0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x31fda0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fda4: 0x24069fff  addiu       $a2, $zero, -0x6001
    ctx->pc = 0x31fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294942719));
    // 0x31fda8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x31fda8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31fdac: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x31fdacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31fdb0: 0x1262824  and         $a1, $t1, $a2
    ctx->pc = 0x31fdb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x31fdb4: 0x31232000  andi        $v1, $t1, 0x2000
    ctx->pc = 0x31fdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8192);
    // 0x31fdb8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31fdbc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x31fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31fdc0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x31fdc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x31fdc4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x31fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x31fdc8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x31fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31fdcc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x31fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x31fdd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31FDD0u;
    {
        const bool branch_taken_0x31fdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDD0u;
        // 0x31fdd4: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdd0) {
            ctx->pc = 0x31FDE8u;
            goto label_31fde8;
        }
    }
    ctx->pc = 0x31FDD8u;
    // 0x31fdd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fddc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31fddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31fde0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x31fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x31fde4: 0x0  nop
    ctx->pc = 0x31fde4u;
    // NOP
label_31fde8:
    // 0x31fde8: 0x31032000  andi        $v1, $t0, 0x2000
    ctx->pc = 0x31fde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8192);
    // 0x31fdec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FDECu;
    {
        const bool branch_taken_0x31fdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fdec) {
            ctx->pc = 0x31FE00u;
            goto label_31fe00;
        }
    }
    ctx->pc = 0x31FDF4u;
    // 0x31fdf4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31fdf8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31fdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31fdfc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_31fe00:
    // 0x31fe00: 0x30e32000  andi        $v1, $a3, 0x2000
    ctx->pc = 0x31fe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
    // 0x31fe04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE04u;
    {
        const bool branch_taken_0x31fe04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe04) {
            ctx->pc = 0x31FE18u;
            goto label_31fe18;
        }
    }
    ctx->pc = 0x31FE0Cu;
    // 0x31fe0c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31fe10: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31fe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31fe14: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x31fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_31fe18:
    // 0x31fe18: 0x31234000  andi        $v1, $t1, 0x4000
    ctx->pc = 0x31fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16384);
    // 0x31fe1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE1Cu;
    {
        const bool branch_taken_0x31fe1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe1c) {
            ctx->pc = 0x31FE30u;
            goto label_31fe30;
        }
    }
    ctx->pc = 0x31FE24u;
    // 0x31fe24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31fe28: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31fe2c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x31fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_31fe30:
    // 0x31fe30: 0x31034000  andi        $v1, $t0, 0x4000
    ctx->pc = 0x31fe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x31fe34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE34u;
    {
        const bool branch_taken_0x31fe34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe34) {
            ctx->pc = 0x31FE48u;
            goto label_31fe48;
        }
    }
    ctx->pc = 0x31FE3Cu;
    // 0x31fe3c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31fe40: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31fe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31fe44: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_31fe48:
    // 0x31fe48: 0x30e34000  andi        $v1, $a3, 0x4000
    ctx->pc = 0x31fe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x31fe4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE4Cu;
    {
        const bool branch_taken_0x31fe4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe4c) {
            ctx->pc = 0x31FE60u;
            goto label_31fe60;
        }
    }
    ctx->pc = 0x31FE54u;
    // 0x31fe54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31fe58: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31fe58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31fe5c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x31fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_31fe60:
    // 0x31fe60: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x31fe60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31fe64: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x31fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31fe68: 0x30e32000  andi        $v1, $a3, 0x2000
    ctx->pc = 0x31fe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
    // 0x31fe6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE6Cu;
    {
        const bool branch_taken_0x31fe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE6Cu;
        // 0x31fe70: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe6c) {
            ctx->pc = 0x31FE80u;
            goto label_31fe80;
        }
    }
    ctx->pc = 0x31FE74u;
    // 0x31fe74: 0x34e34000  ori         $v1, $a3, 0x4000
    ctx->pc = 0x31fe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x31fe78: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x31fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x31fe7c: 0x0  nop
    ctx->pc = 0x31fe7cu;
    // NOP
label_31fe80:
    // 0x31fe80: 0x30c32000  andi        $v1, $a2, 0x2000
    ctx->pc = 0x31fe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x31fe84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE84u;
    {
        const bool branch_taken_0x31fe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe84) {
            ctx->pc = 0x31FE98u;
            goto label_31fe98;
        }
    }
    ctx->pc = 0x31FE8Cu;
    // 0x31fe8c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x31fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31fe90: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31fe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31fe94: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x31fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_31fe98:
    // 0x31fe98: 0x30a32000  andi        $v1, $a1, 0x2000
    ctx->pc = 0x31fe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x31fe9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FE9Cu;
    {
        const bool branch_taken_0x31fe9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fe9c) {
            ctx->pc = 0x31FEB0u;
            goto label_31feb0;
        }
    }
    ctx->pc = 0x31FEA4u;
    // 0x31fea4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x31fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31fea8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x31fea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x31feac: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x31feacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_31feb0:
    // 0x31feb0: 0x30e34000  andi        $v1, $a3, 0x4000
    ctx->pc = 0x31feb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x31feb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FEB4u;
    {
        const bool branch_taken_0x31feb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31feb4) {
            ctx->pc = 0x31FEC8u;
            goto label_31fec8;
        }
    }
    ctx->pc = 0x31FEBCu;
    // 0x31febc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x31febcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31fec0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31fec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31fec4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x31fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_31fec8:
    // 0x31fec8: 0x30c34000  andi        $v1, $a2, 0x4000
    ctx->pc = 0x31fec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x31fecc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FECCu;
    {
        const bool branch_taken_0x31fecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fecc) {
            ctx->pc = 0x31FEE0u;
            goto label_31fee0;
        }
    }
    ctx->pc = 0x31FED4u;
    // 0x31fed4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x31fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31fed8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31fed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31fedc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x31fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_31fee0:
    // 0x31fee0: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x31fee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x31fee4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FEE4u;
    {
        const bool branch_taken_0x31fee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fee4) {
            ctx->pc = 0x31FEF8u;
            goto label_31fef8;
        }
    }
    ctx->pc = 0x31FEECu;
    // 0x31feec: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x31feecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31fef0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31fef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31fef4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x31fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_31fef8:
    // 0x31fef8: 0x3e00008  jr          $ra
    ctx->pc = 0x31FEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FF00u;
}
