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

// Function: sub_00217038
// Address: 0x217038 - 0x2170f8
void sub_00217038_0x217038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217038_0x217038");
#endif

    switch (ctx->pc) {
        case 0x2170a4u: goto label_2170a4;
        case 0x2170b4u: goto label_2170b4;
        case 0x2170c0u: goto label_2170c0;
        default: break;
    }

    ctx->pc = 0x217038u;

    // 0x217038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21703c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21703cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217040: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x217040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x217044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217048: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x217048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x21704c: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x21704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
    // 0x217050: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x217050u;
    {
        const bool branch_taken_0x217050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217050u;
        // 0x217054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217050) {
            ctx->pc = 0x2170E8u;
            goto label_2170e8;
        }
    }
    ctx->pc = 0x217058u;
    // 0x217058: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x217058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21705c: 0x6a020d53  ldl         $v0, 0xD53($s0)
    ctx->pc = 0x21705cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3411); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x217060: 0x6e020d4c  ldr         $v0, 0xD4C($s0)
    ctx->pc = 0x217060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3404); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x217064: 0x6a030d5b  ldl         $v1, 0xD5B($s0)
    ctx->pc = 0x217064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3419); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x217068: 0x6e030d54  ldr         $v1, 0xD54($s0)
    ctx->pc = 0x217068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3412); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21706c: 0x6a070d63  ldl         $a3, 0xD63($s0)
    ctx->pc = 0x21706cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x217070: 0x6e070d5c  ldr         $a3, 0xD5C($s0)
    ctx->pc = 0x217070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x217074: 0x6a080d6b  ldl         $t0, 0xD6B($s0)
    ctx->pc = 0x217074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x217078: 0x6e080d64  ldr         $t0, 0xD64($s0)
    ctx->pc = 0x217078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x21707c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x21707cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217080: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x217080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217084: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x217084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217088: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x217088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21708c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x21708cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217090: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x217090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217094: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x217094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217098: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x217098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21709c: 0xc0883ea  jal         func_220FA8
    ctx->pc = 0x21709Cu;
    SET_GPR_U32(ctx, 31, 0x2170A4u);
    ctx->pc = 0x2170A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21709Cu;
    // 0x2170a0: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220FA8u, 0x21709Cu, 0x2170A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170A4u;
label_2170a4:
    // 0x2170a4: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x2170a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2170a8: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2170a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2170ac: 0xc0883ea  jal         func_220FA8
    ctx->pc = 0x2170ACu;
    SET_GPR_U32(ctx, 31, 0x2170B4u);
    ctx->pc = 0x2170B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170ACu;
    // 0x2170b0: 0x26040d9c  addiu       $a0, $s0, 0xD9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220FA8u, 0x2170ACu, 0x2170B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170B4u;
label_2170b4:
    // 0x2170b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2170b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170b8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2170B8u;
    SET_GPR_U32(ctx, 31, 0x2170C0u);
    ctx->pc = 0x2170BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170B8u;
    // 0x2170bc: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2170B8u, 0x2170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170C0u;
label_2170c0:
    // 0x2170c0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2170c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2170c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2170c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2170c8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2170c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2170cc: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x2170ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2170d0: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x2170d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2170d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2170D4u;
    {
        const bool branch_taken_0x2170d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170D4u;
        // 0x2170d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170d4) {
            ctx->pc = 0x2170E8u;
            goto label_2170e8;
        }
    }
    ctx->pc = 0x2170DCu;
    // 0x2170dc: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2170dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2170e0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2170e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2170e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2170e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2170e8:
    // 0x2170e8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2170e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2170ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2170ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2170f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2170F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2170F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F0u;
        // 0x2170f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2170F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2170F8u;
}
