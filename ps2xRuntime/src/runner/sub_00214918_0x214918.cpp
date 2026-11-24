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

// Function: sub_00214918
// Address: 0x214918 - 0x214a08
void sub_00214918_0x214918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214918_0x214918");
#endif

    switch (ctx->pc) {
        case 0x214988u: goto label_214988;
        case 0x2149c8u: goto label_2149c8;
        default: break;
    }

    ctx->pc = 0x214918u;

    // 0x214918: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x214918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x21491c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x21491cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214920: 0x24425970  addiu       $v0, $v0, 0x5970
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22896));
    // 0x214924: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x214924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x214928: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x214928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21492c: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x21492cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x214930: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x214930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x214934: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x214934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x214938: 0x69280017  ldl         $t0, 0x17($t1)
    ctx->pc = 0x214938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x21493c: 0x6d280010  ldr         $t0, 0x10($t1)
    ctx->pc = 0x21493cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x214940: 0x692a001f  ldl         $t2, 0x1F($t1)
    ctx->pc = 0x214940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x214944: 0x6d2a0018  ldr         $t2, 0x18($t1)
    ctx->pc = 0x214944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x214948: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x214948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21494c: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x21494cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214950: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x214950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214954: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x214954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214958: 0xb0480017  sdl         $t0, 0x17($v0)
    ctx->pc = 0x214958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21495c: 0xb4480010  sdr         $t0, 0x10($v0)
    ctx->pc = 0x21495cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214960: 0xb04a001f  sdl         $t2, 0x1F($v0)
    ctx->pc = 0x214960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214964: 0xb44a0018  sdr         $t2, 0x18($v0)
    ctx->pc = 0x214964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x214968: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x214968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x21496c: 0x246b5998  addiu       $t3, $v1, 0x5998
    ctx->pc = 0x21496cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 22936));
    // 0x214970: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x214970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x885990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885990u, _value); } while (0);
    // 0x214974: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x214974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214978: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x214978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x885990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885990u, _value); } while (0);
    // 0x21497c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21497cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214980: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x214980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x885980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885980u, _value); } while (0);
    // 0x214984: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x214984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_214988:
    // 0x214988: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x214988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x21498c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21498cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x214990: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x214990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x214994: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x214994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x214998: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x214998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21499c: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x21499cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2149a0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2149a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2149a4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2149a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2149a8: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2149A8u;
    {
        const bool branch_taken_0x2149a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149A8u;
        // 0x2149ac: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149a8) {
            ctx->pc = 0x214988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214988;
        }
    }
    ctx->pc = 0x2149B0u;
    // 0x2149b0: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2149b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2149b4: 0x8d24001c  lw          $a0, 0x1C($t1)
    ctx->pc = 0x2149b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2149b8: 0x244559a0  addiu       $a1, $v0, 0x59A0
    ctx->pc = 0x2149b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x2149bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2149bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149c0: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x2149c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x2149c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2149c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2149c8:
    // 0x2149c8: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2149c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2149cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2149ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2149d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2149D0u;
    {
        const bool branch_taken_0x2149d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149D0u;
        // 0x2149d4: 0x28e80010  slti        $t0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149d0) {
            ctx->pc = 0x2149F0u;
            goto label_2149f0;
        }
    }
    ctx->pc = 0x2149D8u;
    // 0x2149d8: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x2149d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2149dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2149dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2149e0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2149e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2149e4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x2149e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x2149e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2149E8u;
    {
        const bool branch_taken_0x2149e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149E8u;
        // 0x2149ec: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149e8) {
            ctx->pc = 0x2149F4u;
            goto label_2149f4;
        }
    }
    ctx->pc = 0x2149F0u;
label_2149f0:
    // 0x2149f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2149f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2149f4:
    // 0x2149f4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2149f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2149f8: 0x1500fff3  bnez        $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2149F8u;
    {
        const bool branch_taken_0x2149f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149F8u;
        // 0x2149fc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149f8) {
            ctx->pc = 0x2149C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2149c8;
        }
    }
    ctx->pc = 0x214A00u;
    // 0x214a00: 0x3e00008  jr          $ra
    ctx->pc = 0x214A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214A08u;
}
