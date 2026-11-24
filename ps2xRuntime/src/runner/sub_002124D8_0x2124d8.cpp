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

// Function: sub_002124D8
// Address: 0x2124d8 - 0x2125a0
void sub_002124D8_0x2124d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002124D8_0x2124d8");
#endif

    switch (ctx->pc) {
        case 0x212538u: goto label_212538;
        default: break;
    }

    ctx->pc = 0x2124d8u;

    // 0x2124d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2124d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2124dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2124dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2124e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2124e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2124e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2124e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2124e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124ec: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2124ECu;
    {
        const bool branch_taken_0x2124ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2124ECu;
        // 0x2124f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2124ec) {
            ctx->pc = 0x212530u;
            goto label_212530;
        }
    }
    ctx->pc = 0x2124F4u;
    // 0x2124f4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2124f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2124f8: 0x24429fc8  addiu       $v0, $v0, -0x6038
    ctx->pc = 0x2124f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942664));
    // 0x2124fc: 0x684301a3  ldl         $v1, 0x1A3($v0)
    ctx->pc = 0x2124fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 419); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x212500: 0x6c43019c  ldr         $v1, 0x19C($v0)
    ctx->pc = 0x212500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 412); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x212504: 0x684401ab  ldl         $a0, 0x1AB($v0)
    ctx->pc = 0x212504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x212508: 0x6c4401a4  ldr         $a0, 0x1A4($v0)
    ctx->pc = 0x212508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21250c: 0x8c4501ac  lw          $a1, 0x1AC($v0)
    ctx->pc = 0x21250cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BA174u));
    // 0x212510: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x212510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212514: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x212514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212518: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x212518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21251c: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x21251cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212520: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x212520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x212524: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x212524u;
    {
        const bool branch_taken_0x212524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212524u;
        // 0x212528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212524) {
            ctx->pc = 0x21258Cu;
            goto label_21258c;
        }
    }
    ctx->pc = 0x21252Cu;
    // 0x21252c: 0x0  nop
    ctx->pc = 0x21252cu;
    // NOP
label_212530:
    // 0x212530: 0xc084968  jal         func_2125A0
    ctx->pc = 0x212530u;
    SET_GPR_U32(ctx, 31, 0x212538u);
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x212530u, 0x212538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212538u;
label_212538:
    // 0x212538: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x212538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21253c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21253Cu;
    {
        const bool branch_taken_0x21253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21253Cu;
        // 0x212540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21253c) {
            ctx->pc = 0x212560u;
            goto label_212560;
        }
    }
    ctx->pc = 0x212544u;
    // 0x212544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212548: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x212548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x21254c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21254cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212554: 0x80848e0  j           func_212380
    ctx->pc = 0x212554u;
    ctx->pc = 0x212558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212554u;
    // 0x212558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21255Cu;
    // 0x21255c: 0x0  nop
    ctx->pc = 0x21255cu;
    // NOP
label_212560:
    // 0x212560: 0x6a0209ff  ldl         $v0, 0x9FF($s0)
    ctx->pc = 0x212560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x212564: 0x6e0209f8  ldr         $v0, 0x9F8($s0)
    ctx->pc = 0x212564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2552); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x212568: 0x6a030a07  ldl         $v1, 0xA07($s0)
    ctx->pc = 0x212568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2567); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21256c: 0x6e030a00  ldr         $v1, 0xA00($s0)
    ctx->pc = 0x21256cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x212570: 0x8e040a08  lw          $a0, 0xA08($s0)
    ctx->pc = 0x212570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2568)));
    // 0x212574: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x212574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212578: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x212578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21257c: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x21257cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212580: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x212580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212584: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x212584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x212588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21258c:
    // 0x21258c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21258cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212598: 0x3e00008  jr          $ra
    ctx->pc = 0x212598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212598u;
        // 0x21259c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2125A0u;
}
