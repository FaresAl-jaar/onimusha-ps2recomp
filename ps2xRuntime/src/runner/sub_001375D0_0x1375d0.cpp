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

// Function: sub_001375D0
// Address: 0x1375d0 - 0x1376c4
void sub_001375D0_0x1375d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001375D0_0x1375d0");
#endif

    switch (ctx->pc) {
        case 0x1375f8u: goto label_1375f8;
        case 0x137600u: goto label_137600;
        case 0x137694u: goto label_137694;
        default: break;
    }

    ctx->pc = 0x1375d0u;

    // 0x1375d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1375d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1375d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1375d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1375d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1375d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1375dc: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x1375dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x1375e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1375e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1375e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1375e8: 0x26446640  addiu       $a0, $s2, 0x6640
    ctx->pc = 0x1375e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26176));
    // 0x1375ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1375ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1375f0: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x1375F0u;
    SET_GPR_U32(ctx, 31, 0x1375F8u);
    ctx->pc = 0x1375F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1375F0u;
    // 0x1375f4: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x1375F0u, 0x1375F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1375F8u;
label_1375f8:
    // 0x1375f8: 0xc046028  jal         func_1180A0
    ctx->pc = 0x1375F8u;
    SET_GPR_U32(ctx, 31, 0x137600u);
    ctx->pc = 0x1375FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1375F8u;
    // 0x1375fc: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x1375F8u, 0x137600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137600u;
label_137600:
    // 0x137600: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x137600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x137604: 0x26466640  addiu       $a2, $s2, 0x6640
    ctx->pc = 0x137604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 26176));
    // 0x137608: 0x246566c0  addiu       $a1, $v1, 0x66C0
    ctx->pc = 0x137608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 26304));
    // 0x13760c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x13760cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x137610: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x137610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x137614: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x137614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x137618: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x137618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13761c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x13761cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137620: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x137620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137624: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x137624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137628: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x137628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13762c: 0x68c20017  ldl         $v0, 0x17($a2)
    ctx->pc = 0x13762cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x137630: 0x6cc20010  ldr         $v0, 0x10($a2)
    ctx->pc = 0x137630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x137634: 0x68c4001f  ldl         $a0, 0x1F($a2)
    ctx->pc = 0x137634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x137638: 0x6cc40018  ldr         $a0, 0x18($a2)
    ctx->pc = 0x137638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13763c: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x13763cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137640: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x137640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137644: 0xb0a4001f  sdl         $a0, 0x1F($a1)
    ctx->pc = 0x137644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137648: 0xb4a40018  sdr         $a0, 0x18($a1)
    ctx->pc = 0x137648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13764c: 0x68c20027  ldl         $v0, 0x27($a2)
    ctx->pc = 0x13764cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x137650: 0x6cc20020  ldr         $v0, 0x20($a2)
    ctx->pc = 0x137650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x137654: 0x68c4002f  ldl         $a0, 0x2F($a2)
    ctx->pc = 0x137654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x137658: 0x6cc40028  ldr         $a0, 0x28($a2)
    ctx->pc = 0x137658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13765c: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x13765cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137660: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x137660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137664: 0xb0a4002f  sdl         $a0, 0x2F($a1)
    ctx->pc = 0x137664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137668: 0xb4a40028  sdr         $a0, 0x28($a1)
    ctx->pc = 0x137668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13766c: 0x68c20037  ldl         $v0, 0x37($a2)
    ctx->pc = 0x13766cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x137670: 0x6cc20030  ldr         $v0, 0x30($a2)
    ctx->pc = 0x137670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x137674: 0x68c4003f  ldl         $a0, 0x3F($a2)
    ctx->pc = 0x137674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x137678: 0x6cc40038  ldr         $a0, 0x38($a2)
    ctx->pc = 0x137678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13767c: 0xb0a20037  sdl         $v0, 0x37($a1)
    ctx->pc = 0x13767cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137680: 0xb4a20030  sdr         $v0, 0x30($a1)
    ctx->pc = 0x137680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137684: 0xb0a4003f  sdl         $a0, 0x3F($a1)
    ctx->pc = 0x137684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137688: 0xb4a40038  sdr         $a0, 0x38($a1)
    ctx->pc = 0x137688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13768c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x13768Cu;
    SET_GPR_U32(ctx, 31, 0x137694u);
    ctx->pc = 0x137690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13768Cu;
    // 0x137690: 0x247166c0  addiu       $s1, $v1, 0x66C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 26304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x13768Cu, 0x137694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137694u;
label_137694:
    // 0x137694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x137694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137698: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x137698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x13769c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1376a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1376a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1376a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1376a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1376a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1376a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1376ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1376acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1376b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1376b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1376b4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1376b4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1376b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1376b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1376bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1376BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1376C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376BCu;
        // 0x1376c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1376BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1376C4u;
}
