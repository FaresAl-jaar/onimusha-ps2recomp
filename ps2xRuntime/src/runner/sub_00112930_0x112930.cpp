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

// Function: sub_00112930
// Address: 0x112930 - 0x112ce4
void sub_00112930_0x112930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112930_0x112930");
#endif

    switch (ctx->pc) {
        case 0x1129ccu: goto label_1129cc;
        case 0x1129f8u: goto label_1129f8;
        case 0x112a20u: goto label_112a20;
        case 0x112a70u: goto label_112a70;
        case 0x112aa0u: goto label_112aa0;
        case 0x112ad8u: goto label_112ad8;
        case 0x112b34u: goto label_112b34;
        case 0x112b7cu: goto label_112b7c;
        case 0x112c18u: goto label_112c18;
        case 0x112c60u: goto label_112c60;
        case 0x112c9cu: goto label_112c9c;
        case 0x112cd4u: goto label_112cd4;
        default: break;
    }

    ctx->pc = 0x112930u;

    // 0x112930: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x112930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x112934: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112938: 0x8c432b40  lw          $v1, 0x2B40($v0)
    ctx->pc = 0x112938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B40u));
    // 0x11293c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11293cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112940: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x112940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x112944: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x112944u;
    {
        const bool branch_taken_0x112944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112944u;
        // 0x112948: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112944) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x11294Cu;
    // 0x11294c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x11294cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_112950:
    // 0x112950: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x112950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x112954: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x112954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x112958: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x112958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11295c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11295cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x112960: 0xac452b38  sw          $a1, 0x2B38($v0)
    ctx->pc = 0x112960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11064), GPR_U32(ctx, 5));
    // 0x112964: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x112964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x112968: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x112968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x11296c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112970: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x112970u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x112974: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x112974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x112978: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x112978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x11297c: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x11297cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112980: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x112980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112984: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x112984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x112988: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x112988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x11298c: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x11298cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112990: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x112990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112994: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x112994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x112998: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x112998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x11299c: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x11299cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1129a0: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x1129a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1129a4: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x1129a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1129a8: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x1129a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1129ac: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x1129acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1129b0: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x1129b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1129b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1129b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1129b8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1129B8u;
    {
        const bool branch_taken_0x1129b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1129BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129B8u;
        // 0x1129bc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129b8) {
            ctx->pc = 0x1129CCu;
            goto label_1129cc;
        }
    }
    ctx->pc = 0x1129C0u;
    // 0x1129c0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1129c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1129c4: 0xc049522  jal         func_125488
    ctx->pc = 0x1129C4u;
    SET_GPR_U32(ctx, 31, 0x1129CCu);
    ctx->pc = 0x1129C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129C4u;
    // 0x1129c8: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1129C4u, 0x1129CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129CCu;
label_1129cc:
    // 0x1129cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1129ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1129d0: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1129d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1129d4: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1129d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1129d8: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1129D8u;
    {
        const bool branch_taken_0x1129d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129D8u;
        // 0x1129dc: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129d8) {
            ctx->pc = 0x112C60u;
            goto label_112c60;
        }
    }
    ctx->pc = 0x1129E0u;
    // 0x1129e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1129e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1129e4: 0x244226a0  addiu       $v0, $v0, 0x26A0
    ctx->pc = 0x1129e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9888));
    // 0x1129e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1129e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1129ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1129ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1129f0: 0x800008  jr          $a0
    ctx->pc = 0x1129F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1129F8u: goto label_1129f8;
            case 0x112AA0u: goto label_112aa0;
            case 0x112B7Cu: goto label_112b7c;
            case 0x112C18u: goto label_112c18;
            case 0x112C60u: goto label_112c60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1129F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1129F8u;
label_1129f8:
    // 0x1129f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1129f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1129fc: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1129FCu;
    {
        const bool branch_taken_0x1129fc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x112A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129FCu;
        // 0x112a00: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129fc) {
            ctx->pc = 0x112A48u;
            goto label_112a48;
        }
    }
    ctx->pc = 0x112A04u;
    // 0x112a04: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x112a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x112a08: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x112a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x112a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a10: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x112A10u;
    {
        const bool branch_taken_0x112a10 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x112A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A10u;
        // 0x112a14: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a10) {
            ctx->pc = 0x112A48u;
            goto label_112a48;
        }
    }
    ctx->pc = 0x112A18u;
    // 0x112a18: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x112a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x112a1c: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x112a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_112a20:
    // 0x112a20: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x112a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x112a24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112a28: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x112a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x112a2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x112a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x112a30: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x112a30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x112a34: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x112a34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x112a38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x112a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x112a3c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x112a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112a40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x112A40u;
    {
        const bool branch_taken_0x112a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A40u;
        // 0x112a44: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a40) {
            ctx->pc = 0x112A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112a20;
        }
    }
    ctx->pc = 0x112A48u;
label_112a48:
    // 0x112a48: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x112a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x112a4c: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x112A4Cu;
    {
        const bool branch_taken_0x112a4c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x112A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A4Cu;
        // 0x112a50: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a4c) {
            ctx->pc = 0x112C60u;
            goto label_112c60;
        }
    }
    ctx->pc = 0x112A54u;
    // 0x112a54: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x112a54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x112a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a5c: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x112A5Cu;
    {
        const bool branch_taken_0x112a5c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x112A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A5Cu;
        // 0x112a60: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a5c) {
            ctx->pc = 0x112C60u;
            goto label_112c60;
        }
    }
    ctx->pc = 0x112A64u;
    // 0x112a64: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x112a64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x112a68: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x112a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x112a6c: 0x0  nop
    ctx->pc = 0x112a6cu;
    // NOP
label_112a70:
    // 0x112a70: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x112a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x112a74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112a78: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x112a7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x112a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x112a80: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x112a80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x112a84: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x112a84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x112a88: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x112a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x112a8c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x112a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112a90: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x112A90u;
    {
        const bool branch_taken_0x112a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A90u;
        // 0x112a94: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a90) {
            ctx->pc = 0x112A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112a70;
        }
    }
    ctx->pc = 0x112A98u;
    // 0x112a98: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x112A98u;
    {
        const bool branch_taken_0x112a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A98u;
        // 0x112a9c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a98) {
            ctx->pc = 0x112C64u;
            goto label_112c64;
        }
    }
    ctx->pc = 0x112AA0u;
label_112aa0:
    // 0x112aa0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x112aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112aa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112aa8: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x112AA8u;
    {
        const bool branch_taken_0x112aa8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x112AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA8u;
        // 0x112aac: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa8) {
            ctx->pc = 0x112C64u;
            goto label_112c64;
        }
    }
    ctx->pc = 0x112AB0u;
    // 0x112ab0: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x112ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x112ab4: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x112ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x112ab8: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x112ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112abc: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x112abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112ac0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x112ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x112ac4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x112ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112ac8: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x112ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x112acc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x112accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x112ad0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x112AD0u;
    {
        const bool branch_taken_0x112ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AD0u;
        // 0x112ad4: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ad0) {
            ctx->pc = 0x112B34u;
            goto label_112b34;
        }
    }
    ctx->pc = 0x112AD8u;
label_112ad8:
    // 0x112ad8: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x112ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x112adc: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x112adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x112ae0: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x112ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x112ae4: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x112ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x112ae8: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x112ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x112aec: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x112aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x112af0: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x112af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x112af4: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x112af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x112af8: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x112af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112afc: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x112afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112b00: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x112b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112b04: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x112b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112b08: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x112b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112b0c: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x112b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112b10: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x112b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112b14: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x112b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112b18: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x112b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x112b1c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x112b20: 0x0  nop
    ctx->pc = 0x112b20u;
    // NOP
    // 0x112b24: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x112B24u;
    {
        const bool branch_taken_0x112b24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x112b24) {
            ctx->pc = 0x112AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112ad8;
        }
    }
    ctx->pc = 0x112B2Cu;
    // 0x112b2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x112B2Cu;
    {
        const bool branch_taken_0x112b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112b2c) {
            ctx->pc = 0x112B68u;
            goto label_112b68;
        }
    }
    ctx->pc = 0x112B34u;
label_112b34:
    // 0x112b34: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x112b34u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112b38: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x112b38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x112b3c: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x112b3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x112b40: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x112b40u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x112b44: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x112b44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x112b48: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x112b48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x112b4c: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x112b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x112b50: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x112b50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x112b54: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x112b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x112b58: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x112b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x112b5c: 0x0  nop
    ctx->pc = 0x112b5cu;
    // NOP
    // 0x112b60: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x112B60u;
    {
        const bool branch_taken_0x112b60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x112b60) {
            ctx->pc = 0x112B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112b34;
        }
    }
    ctx->pc = 0x112B68u;
label_112b68:
    // 0x112b68: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x112b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x112b6c: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x112b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x112b70: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x112b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112b74: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x112B74u;
    {
        const bool branch_taken_0x112b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B74u;
        // 0x112b78: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b74) {
            ctx->pc = 0x112C60u;
            goto label_112c60;
        }
    }
    ctx->pc = 0x112B7Cu;
label_112b7c:
    // 0x112b7c: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x112b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x112b80: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x112b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x112b84: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x112b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112b88: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x112b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112b90: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x112b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x112b94: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x112b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x112b98: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x112b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x112b9c: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x112b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x112ba0: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x112ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x112ba4: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x112ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x112ba8: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x112ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x112bac: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x112bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x112bb0: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x112bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bb4: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x112bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bb8: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x112bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bbc: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x112bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bc0: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x112bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bc4: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x112bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bc8: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x112bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bcc: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x112bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bd0: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x112bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x112bd4: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x112bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x112bd8: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x112bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x112bdc: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x112bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x112be0: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x112be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x112be4: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x112be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x112be8: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x112be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x112bec: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x112becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x112bf0: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x112bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bf4: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x112bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bf8: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x112bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112bfc: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x112bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112c00: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x112c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112c04: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x112c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112c08: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x112c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112c0c: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x112c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112c10: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112C10u;
    {
        const bool branch_taken_0x112c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C10u;
        // 0x112c14: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c10) {
            ctx->pc = 0x112C64u;
            goto label_112c64;
        }
    }
    ctx->pc = 0x112C18u;
label_112c18:
    // 0x112c18: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x112c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x112c1c: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x112c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x112c20: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x112c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112c24: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x112c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112c28: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x112c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x112c2c: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x112c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x112c30: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x112c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112c34: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x112c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x112c38: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x112c3c: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x112c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x112c40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112C40u;
    {
        const bool branch_taken_0x112c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C40u;
        // 0x112c44: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c40) {
            ctx->pc = 0x112C58u;
            goto label_112c58;
        }
    }
    ctx->pc = 0x112C48u;
    // 0x112c48: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x112c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x112c4c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x112c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x112c50: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x112c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x112c54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x112c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_112c58:
    // 0x112c58: 0xc049522  jal         func_125488
    ctx->pc = 0x112C58u;
    SET_GPR_U32(ctx, 31, 0x112C60u);
    ctx->pc = 0x112C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C58u;
    // 0x112c5c: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x112C58u, 0x112C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112C60u;
label_112c60:
    // 0x112c60: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x112c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_112c64:
    // 0x112c64: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x112C64u;
    {
        const bool branch_taken_0x112c64 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x112C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C64u;
        // 0x112c68: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c64) {
            ctx->pc = 0x112CCCu;
            goto label_112ccc;
        }
    }
    ctx->pc = 0x112C6Cu;
    // 0x112c6c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x112c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x112c70: 0x8ce32ab8  lw          $v1, 0x2AB8($a3)
    ctx->pc = 0x112c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10936)));
    // 0x112c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x112c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x112c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x112c7c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112C7Cu;
    {
        const bool branch_taken_0x112c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x112C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C7Cu;
        // 0x112c80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c7c) {
            ctx->pc = 0x112C98u;
            goto label_112c98;
        }
    }
    ctx->pc = 0x112C84u;
    // 0x112c84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112c88: 0xace22ab8  sw          $v0, 0x2AB8($a3)
    ctx->pc = 0x112c88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 10936), GPR_U32(ctx, 2));
    // 0x112c8c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112C8Cu;
    {
        const bool branch_taken_0x112c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C8Cu;
        // 0x112c90: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c8c) {
            ctx->pc = 0x112CD8u;
            goto label_112cd8;
        }
    }
    ctx->pc = 0x112C94u;
    // 0x112c94: 0x0  nop
    ctx->pc = 0x112c94u;
    // NOP
label_112c98:
    // 0x112c98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x112c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_112c9c:
    // 0x112c9c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x112c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x112ca0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x112CA0u;
    {
        const bool branch_taken_0x112ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CA0u;
        // 0x112ca4: 0x24e22ab8  addiu       $v0, $a3, 0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 10936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ca0) {
            ctx->pc = 0x112CD4u;
            goto label_112cd4;
        }
    }
    ctx->pc = 0x112CA8u;
    // 0x112ca8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x112ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x112cac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x112cb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112cb4: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112CB4u;
    {
        const bool branch_taken_0x112cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x112CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CB4u;
        // 0x112cb8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cb4) {
            ctx->pc = 0x112C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112c9c;
        }
    }
    ctx->pc = 0x112CBCu;
    // 0x112cbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112cc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x112cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x112cc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x112CC4u;
    {
        const bool branch_taken_0x112cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CC4u;
        // 0x112cc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112cc4) {
            ctx->pc = 0x112CD8u;
            goto label_112cd8;
        }
    }
    ctx->pc = 0x112CCCu;
label_112ccc:
    // 0x112ccc: 0xc043804  jal         func_10E010
    ctx->pc = 0x112CCCu;
    SET_GPR_U32(ctx, 31, 0x112CD4u);
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x112CCCu, 0x112CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CD4u;
label_112cd4:
    // 0x112cd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x112cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_112cd8:
    // 0x112cd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x112cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x112CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CDCu;
        // 0x112ce0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112CE4u;
}
