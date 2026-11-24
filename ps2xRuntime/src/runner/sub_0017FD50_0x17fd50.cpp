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

// Function: sub_0017FD50
// Address: 0x17fd50 - 0x17fe30
void sub_0017FD50_0x17fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FD50_0x17fd50");
#endif

    ctx->pc = 0x17fd50u;

    // 0x17fd50: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x17fd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17fd54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17fd58: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x17FD58u;
    {
        const bool branch_taken_0x17fd58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD58u;
        // 0x17fd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd58) {
            ctx->pc = 0x17FDE8u;
            goto label_17fde8;
        }
    }
    ctx->pc = 0x17FD60u;
    // 0x17fd60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17fd64: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x17FD64u;
    {
        const bool branch_taken_0x17fd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD64u;
        // 0x17fd68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd64) {
            ctx->pc = 0x17FDE0u;
            goto label_17fde0;
        }
    }
    ctx->pc = 0x17FD6Cu;
    // 0x17fd6c: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x17FD6Cu;
    {
        const bool branch_taken_0x17fd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17fd6c) {
            ctx->pc = 0x17FDD8u;
            goto label_17fdd8;
        }
    }
    ctx->pc = 0x17FD74u;
    // 0x17fd74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fd78: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FD78u;
    {
        const bool branch_taken_0x17fd78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17fd78) {
            ctx->pc = 0x17FD88u;
            goto label_17fd88;
        }
    }
    ctx->pc = 0x17FD80u;
    // 0x17fd80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17FD80u;
    {
        const bool branch_taken_0x17fd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fd80) {
            ctx->pc = 0x17FDF0u;
            goto label_17fdf0;
        }
    }
    ctx->pc = 0x17FD88u;
label_17fd88:
    // 0x17fd88: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x17fd88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17fd8c: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x17fd8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17fd90: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x17fd94: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x17fd98: 0x24420214  addiu       $v0, $v0, 0x214
    ctx->pc = 0x17fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x17fd9c: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x17fd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x17fda0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17fda4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17fda8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x17fda8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17fdac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17fdb0: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x17fdb4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17fdb8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x17fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17fdbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17fdc0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x17fdc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17fdc8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17fdcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17FDCCu;
    {
        const bool branch_taken_0x17fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDCCu;
        // 0x17fdd0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdcc) {
            ctx->pc = 0x17FDF0u;
            goto label_17fdf0;
        }
    }
    ctx->pc = 0x17FDD4u;
    // 0x17fdd4: 0x0  nop
    ctx->pc = 0x17fdd4u;
    // NOP
label_17fdd8:
    // 0x17fdd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17FDD8u;
    {
        const bool branch_taken_0x17fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDD8u;
        // 0x17fddc: 0x244200e4  addiu       $v0, $v0, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdd8) {
            ctx->pc = 0x17FDF0u;
            goto label_17fdf0;
        }
    }
    ctx->pc = 0x17FDE0u;
label_17fde0:
    // 0x17fde0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17FDE0u;
    {
        const bool branch_taken_0x17fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE0u;
        // 0x17fde4: 0x244200d4  addiu       $v0, $v0, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fde0) {
            ctx->pc = 0x17FDF0u;
            goto label_17fdf0;
        }
    }
    ctx->pc = 0x17FDE8u;
label_17fde8:
    // 0x17fde8: 0x244201e4  addiu       $v0, $v0, 0x1E4
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 484));
    // 0x17fdec: 0x0  nop
    ctx->pc = 0x17fdecu;
    // NOP
label_17fdf0:
    // 0x17fdf0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x17fdf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x17fdf4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x17fdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17fdf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FDF8u;
    {
        const bool branch_taken_0x17fdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fdf8) {
            ctx->pc = 0x17FE08u;
            goto label_17fe08;
        }
    }
    ctx->pc = 0x17FE00u;
    // 0x17fe00: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x17fe04: 0x0  nop
    ctx->pc = 0x17fe04u;
    // NOP
label_17fe08:
    // 0x17fe08: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x17fe08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x17fe0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE0Cu;
    {
        const bool branch_taken_0x17fe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe0c) {
            ctx->pc = 0x17FE18u;
            goto label_17fe18;
        }
    }
    ctx->pc = 0x17FE14u;
    // 0x17fe14: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
label_17fe18:
    // 0x17fe18: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x17fe18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x17fe1c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE1Cu;
    {
        const bool branch_taken_0x17fe1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe1c) {
            ctx->pc = 0x17FE28u;
            goto label_17fe28;
        }
    }
    ctx->pc = 0x17FE24u;
    // 0x17fe24: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x17fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_17fe28:
    // 0x17fe28: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FE30u;
}
