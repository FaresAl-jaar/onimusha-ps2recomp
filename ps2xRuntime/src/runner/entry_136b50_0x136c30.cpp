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

// Function: entry_136b50
// Address: 0x136b50 - 0x136c30
void entry_136b50_0x136c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_136b50_0x136c30");
#endif

    ctx->pc = 0x136b50u;

    // 0x136b50: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x136b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x136b54: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x136b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x136b58: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x136b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x136b5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x136b60: 0x24420ed0  addiu       $v0, $v0, 0xED0
    ctx->pc = 0x136b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
    // 0x136b64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136b68: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x136b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b6c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x136b70: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x136b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x136b74: 0x68c2001b  ldl         $v0, 0x1B($a2)
    ctx->pc = 0x136b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x136b78: 0x6cc20014  ldr         $v0, 0x14($a2)
    ctx->pc = 0x136b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x136b7c: 0x68c30023  ldl         $v1, 0x23($a2)
    ctx->pc = 0x136b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x136b80: 0x6cc3001c  ldr         $v1, 0x1C($a2)
    ctx->pc = 0x136b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x136b84: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x136b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136b88: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x136b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136b8c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x136b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136b90: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x136b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136b94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x136b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136b98: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x136B98u;
    {
        const bool branch_taken_0x136b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B98u;
        // 0x136b9c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b98) {
            ctx->pc = 0x136C24u;
            goto label_136c24;
        }
    }
    ctx->pc = 0x136BA0u;
    // 0x136ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ba4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x136BA4u;
    {
        const bool branch_taken_0x136ba4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x136BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BA4u;
        // 0x136ba8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ba4) {
            ctx->pc = 0x136BC0u;
            goto label_136bc0;
        }
    }
    ctx->pc = 0x136BACu;
    // 0x136bac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x136bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x136bb0: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x136BB0u;
    {
        const bool branch_taken_0x136bb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x136BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BB0u;
        // 0x136bb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bb0) {
            ctx->pc = 0x136BE0u;
            goto label_136be0;
        }
    }
    ctx->pc = 0x136BB8u;
    // 0x136bb8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x136BB8u;
    {
        const bool branch_taken_0x136bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136bb8) {
            ctx->pc = 0x136C28u;
            goto label_136c28;
        }
    }
    ctx->pc = 0x136BC0u;
label_136bc0:
    // 0x136bc0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x136bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x136bc4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x136bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x136bc8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x136bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136bcc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x136bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bd0: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x136bd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x136bd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x136bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x136bd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x136BD8u;
    {
        const bool branch_taken_0x136bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BD8u;
        // 0x136bdc: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bd8) {
            ctx->pc = 0x136C28u;
            goto label_136c28;
        }
    }
    ctx->pc = 0x136BE0u;
label_136be0:
    // 0x136be0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x136be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136be4: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x136be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x136be8: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x136be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x136bec: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x136becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136bf0: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x136bf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x136bf4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x136BF4u;
    {
        const bool branch_taken_0x136bf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BF4u;
        // 0x136bf8: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bf4) {
            ctx->pc = 0x136C1Cu;
            goto label_136c1c;
        }
    }
    ctx->pc = 0x136BFCu;
    // 0x136bfc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x136bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x136c00: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x136c00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x136c04: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x136c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x136c08: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x136c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x136c0c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x136c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136c10: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x136c14: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x136c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x136c18: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x136c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_136c1c:
    // 0x136c1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136C1Cu;
    {
        const bool branch_taken_0x136c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C1Cu;
        // 0x136c20: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c1c) {
            ctx->pc = 0x136C28u;
            goto label_136c28;
        }
    }
    ctx->pc = 0x136C24u;
label_136c24:
    // 0x136c24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x136c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_136c28:
    // 0x136c28: 0x3e00008  jr          $ra
    ctx->pc = 0x136C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C28u;
        // 0x136c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136C30u;
}
