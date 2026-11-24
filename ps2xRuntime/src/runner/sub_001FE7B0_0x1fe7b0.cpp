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

// Function: sub_001FE7B0
// Address: 0x1fe7b0 - 0x1fe878
void sub_001FE7B0_0x1fe7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE7B0_0x1fe7b0");
#endif

    switch (ctx->pc) {
        case 0x1fe810u: goto label_1fe810;
        default: break;
    }

    ctx->pc = 0x1fe7b0u;

    // 0x1fe7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe7b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe7c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7c4: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE7C4u;
    {
        const bool branch_taken_0x1fe7c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7C4u;
        // 0x1fe7c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7c4) {
            ctx->pc = 0x1FE808u;
            goto label_1fe808;
        }
    }
    ctx->pc = 0x1FE7CCu;
    // 0x1fe7cc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1fe7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1fe7d0: 0x24468140  addiu       $a2, $v0, -0x7EC0
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934848));
    // 0x1fe7d4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1fe7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1fe7d8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1fe7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1fe7dc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1fe7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1fe7e0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1fe7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1fe7e4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1fe7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4B8150u));
    // 0x1fe7e8: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x1fe7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe7ec: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x1fe7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe7f0: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x1fe7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe7f4: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x1fe7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe7f8: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x1fe7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x1fe7fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1FE7FCu;
    {
        const bool branch_taken_0x1fe7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7FCu;
        // 0x1fe800: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7fc) {
            ctx->pc = 0x1FE864u;
            goto label_1fe864;
        }
    }
    ctx->pc = 0x1FE804u;
    // 0x1fe804: 0x0  nop
    ctx->pc = 0x1fe804u;
    // NOP
label_1fe808:
    // 0x1fe808: 0xc080496  jal         func_201258
    ctx->pc = 0x1FE808u;
    SET_GPR_U32(ctx, 31, 0x1FE810u);
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FE808u, 0x1FE810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE810u;
label_1fe810:
    // 0x1fe810: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fe810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1fe814: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE814u;
    {
        const bool branch_taken_0x1fe814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE814u;
        // 0x1fe818: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe814) {
            ctx->pc = 0x1FE838u;
            goto label_1fe838;
        }
    }
    ctx->pc = 0x1FE81Cu;
    // 0x1fe81c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe820: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x1fe820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x1fe824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe82c: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FE82Cu;
    ctx->pc = 0x1FE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE82Cu;
    // 0x1fe830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FE834u;
    // 0x1fe834: 0x0  nop
    ctx->pc = 0x1fe834u;
    // NOP
label_1fe838:
    // 0x1fe838: 0x6a020257  ldl         $v0, 0x257($s0)
    ctx->pc = 0x1fe838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1fe83c: 0x6e020250  ldr         $v0, 0x250($s0)
    ctx->pc = 0x1fe83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1fe840: 0x6a03025f  ldl         $v1, 0x25F($s0)
    ctx->pc = 0x1fe840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1fe844: 0x6e030258  ldr         $v1, 0x258($s0)
    ctx->pc = 0x1fe844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1fe848: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1fe848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1fe84c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1fe84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe850: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1fe850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe854: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x1fe854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe858: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x1fe858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fe85c: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1fe85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1fe860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe864:
    // 0x1fe864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe868: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe86c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe870: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE870u;
        // 0x1fe874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE878u;
}
