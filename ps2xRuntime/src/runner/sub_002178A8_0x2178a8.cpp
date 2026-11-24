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

// Function: sub_002178A8
// Address: 0x2178a8 - 0x2179c4
void sub_002178A8_0x2178a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002178A8_0x2178a8");
#endif

    switch (ctx->pc) {
        case 0x2178d0u: goto label_2178d0;
        case 0x217910u: goto label_217910;
        default: break;
    }

    ctx->pc = 0x2178a8u;

    // 0x2178a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2178a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2178ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2178acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2178b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2178b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2178b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2178b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2178b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2178b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2178bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2178bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2178c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2178c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2178c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2178c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2178c8: 0xc08674c  jal         func_219D30
    ctx->pc = 0x2178C8u;
    SET_GPR_U32(ctx, 31, 0x2178D0u);
    ctx->pc = 0x2178CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2178C8u;
    // 0x2178cc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219D30u, 0x2178C8u, 0x2178D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2178D0u;
label_2178d0:
    // 0x2178d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2178d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2178d4: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2178D4u;
    {
        const bool branch_taken_0x2178d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2178d4) {
            ctx->pc = 0x2178D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2178D4u;
            // 0x2178d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2179ACu;
            goto label_2179ac;
        }
    }
    ctx->pc = 0x2178DCu;
    // 0x2178dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2178dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2178e0: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2178E0u;
    {
        const bool branch_taken_0x2178e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2178e0) {
            ctx->pc = 0x2178E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2178E0u;
            // 0x2178e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2179ACu;
            goto label_2179ac;
        }
    }
    ctx->pc = 0x2178E8u;
    // 0x2178e8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2178e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2178ec: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2178ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2178f0: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x2178f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x2178f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2178f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2178f8: 0x28c20201  slti        $v0, $a2, 0x201
    ctx->pc = 0x2178f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x2178fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2178fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217900: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x217900u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x217904: 0x26720d30  addiu       $s2, $s3, 0xD30
    ctx->pc = 0x217904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3376));
    // 0x217908: 0xc07eb68  jal         func_1FADA0
    ctx->pc = 0x217908u;
    SET_GPR_U32(ctx, 31, 0x217910u);
    ctx->pc = 0x21790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217908u;
    // 0x21790c: 0xac660200  sw          $a2, 0x200($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x217908u, 0x217910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217910u;
label_217910:
    // 0x217910: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x217910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x217914: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x217914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x217918: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x217918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21791c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x21791cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x217920: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x217920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x217924: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217924u;
    {
        const bool branch_taken_0x217924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x217928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217924u;
        // 0x217928: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217924) {
            ctx->pc = 0x217938u;
            goto label_217938;
        }
    }
    ctx->pc = 0x21792Cu;
    // 0x21792c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x217930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x217930u;
    {
        const bool branch_taken_0x217930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217930u;
        // 0x217934: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217930) {
            ctx->pc = 0x217948u;
            goto label_217948;
        }
    }
    ctx->pc = 0x217938u;
label_217938:
    // 0x217938: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x217938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21793c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217940: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x217940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x217944: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x217944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_217948:
    // 0x217948: 0x6a420043  ldl         $v0, 0x43($s2)
    ctx->pc = 0x217948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21794c: 0x6e42003c  ldr         $v0, 0x3C($s2)
    ctx->pc = 0x21794cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x217950: 0x6a43004b  ldl         $v1, 0x4B($s2)
    ctx->pc = 0x217950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x217954: 0x6e430044  ldr         $v1, 0x44($s2)
    ctx->pc = 0x217954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x217958: 0x6a440053  ldl         $a0, 0x53($s2)
    ctx->pc = 0x217958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21795c: 0x6e44004c  ldr         $a0, 0x4C($s2)
    ctx->pc = 0x21795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x217960: 0x6a45005b  ldl         $a1, 0x5B($s2)
    ctx->pc = 0x217960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x217964: 0x6e450054  ldr         $a1, 0x54($s2)
    ctx->pc = 0x217964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x217968: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x217968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21796c: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x21796cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217970: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x217970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217974: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x217974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217978: 0xb2040023  sdl         $a0, 0x23($s0)
    ctx->pc = 0x217978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21797c: 0xb604001c  sdr         $a0, 0x1C($s0)
    ctx->pc = 0x21797cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217980: 0xb205002b  sdl         $a1, 0x2B($s0)
    ctx->pc = 0x217980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217984: 0xb6050024  sdr         $a1, 0x24($s0)
    ctx->pc = 0x217984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217988: 0x6a420063  ldl         $v0, 0x63($s2)
    ctx->pc = 0x217988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21798c: 0x6e42005c  ldr         $v0, 0x5C($s2)
    ctx->pc = 0x21798cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x217990: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x217990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x217994: 0xb2020033  sdl         $v0, 0x33($s0)
    ctx->pc = 0x217994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x217998: 0xb602002c  sdr         $v0, 0x2C($s0)
    ctx->pc = 0x217998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21799c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x21799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x2179a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2179a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2179a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2179a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2179a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2179a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2179ac:
    // 0x2179ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2179acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2179b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2179b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2179b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2179b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2179b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2179b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2179bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2179BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179BCu;
        // 0x2179c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2179BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2179C4u;
}
