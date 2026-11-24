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

// Function: sub_002277D0
// Address: 0x2277d0 - 0x2278b0
void sub_002277D0_0x2277d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002277D0_0x2277d0");
#endif

    switch (ctx->pc) {
        case 0x22785cu: goto label_22785c;
        case 0x227878u: goto label_227878;
        case 0x227894u: goto label_227894;
        default: break;
    }

    ctx->pc = 0x2277d0u;

    // 0x2277d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2277d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2277d4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2277d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2277d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2277d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2277dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2277dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277e0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2277e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2277e4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2277e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2277e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2277e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2277ec: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2277ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2277f0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2277f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2277f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2277f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2277f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2277fc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2277fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x227800: 0x246a9570  addiu       $t2, $v1, -0x6A90
    ctx->pc = 0x227800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940016));
    // 0x227804: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x227804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x227808: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x227808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x22780c: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x22780cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x227810: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x227810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x227814: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x227814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x227818: 0x24a99588  addiu       $t1, $a1, -0x6A78
    ctx->pc = 0x227818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940040));
    // 0x22781c: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x22781cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x227820: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x227820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x227824: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x227824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x227828: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x227828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22782c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x227830: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x227830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x227834: 0x24c795a0  addiu       $a3, $a2, -0x6A60
    ctx->pc = 0x227834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940064));
    // 0x227838: 0x68ea0007  ldl         $t2, 0x7($a3)
    ctx->pc = 0x227838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x22783c: 0x6cea0000  ldr         $t2, 0x0($a3)
    ctx->pc = 0x22783cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x227840: 0xb24a0007  sdl         $t2, 0x7($s2)
    ctx->pc = 0x227840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x227844: 0xb64a0000  sdr         $t2, 0x0($s2)
    ctx->pc = 0x227844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x227848: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x227848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22784c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22784cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227850: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x227850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x227854: 0xc04a040  jal         func_128100
    ctx->pc = 0x227854u;
    SET_GPR_U32(ctx, 31, 0x22785Cu);
    ctx->pc = 0x227858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227854u;
    // 0x227858: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x227854u, 0x22785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22785Cu;
label_22785c:
    // 0x22785c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x22785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x227860: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x227860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x227864: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x227864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227868: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22786c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x22786cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x227870: 0xc04a040  jal         func_128100
    ctx->pc = 0x227870u;
    SET_GPR_U32(ctx, 31, 0x227878u);
    ctx->pc = 0x227874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227870u;
    // 0x227874: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x227870u, 0x227878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227878u;
label_227878:
    // 0x227878: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x227878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x22787c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x22787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x227880: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x227880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227884: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x227888: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x227888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x22788c: 0xc04a040  jal         func_128100
    ctx->pc = 0x22788Cu;
    SET_GPR_U32(ctx, 31, 0x227894u);
    ctx->pc = 0x227890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22788Cu;
    // 0x227890: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x22788Cu, 0x227894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227894u;
label_227894:
    // 0x227894: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x227894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227898: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x227898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22789c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x22789cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2278a0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2278a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2278a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2278a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2278a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2278A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278A8u;
        // 0x2278ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278B0u;
}
