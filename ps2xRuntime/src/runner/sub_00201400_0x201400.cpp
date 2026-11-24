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

// Function: sub_00201400
// Address: 0x201400 - 0x201540
void sub_00201400_0x201400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201400_0x201400");
#endif

    switch (ctx->pc) {
        case 0x20141cu: goto label_20141c;
        case 0x201428u: goto label_201428;
        case 0x20143cu: goto label_20143c;
        case 0x20144cu: goto label_20144c;
        case 0x201460u: goto label_201460;
        case 0x2014c4u: goto label_2014c4;
        default: break;
    }

    ctx->pc = 0x201400u;

    // 0x201400: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x201400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x201404: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x201404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x201408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20140c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x20140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x201410: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x201410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201414: 0xc07d42c  jal         func_1F50B0
    ctx->pc = 0x201414u;
    SET_GPR_U32(ctx, 31, 0x20141Cu);
    ctx->pc = 0x201418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201414u;
    // 0x201418: 0x8e0403b4  lw          $a0, 0x3B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50B0u, 0x201414u, 0x20141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20141Cu;
label_20141c:
    // 0x20141c: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x20141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x201420: 0xc07d436  jal         func_1F50D8
    ctx->pc = 0x201420u;
    SET_GPR_U32(ctx, 31, 0x201428u);
    ctx->pc = 0x201424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201420u;
    // 0x201424: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50D8u, 0x201420u, 0x201428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201428u;
label_201428:
    // 0x201428: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x20142c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x201430: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x201434: 0xc07d440  jal         func_1F5100
    ctx->pc = 0x201434u;
    SET_GPR_U32(ctx, 31, 0x20143Cu);
    ctx->pc = 0x201438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201434u;
    // 0x201438: 0x27a7008c  addiu       $a3, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5100u, 0x201434u, 0x20143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20143Cu;
label_20143c:
    // 0x20143c: 0x8e0403b4  lw          $a0, 0x3B4($s0)
    ctx->pc = 0x20143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    // 0x201440: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x201444: 0xc07d44a  jal         func_1F5128
    ctx->pc = 0x201444u;
    SET_GPR_U32(ctx, 31, 0x20144Cu);
    ctx->pc = 0x201448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201444u;
    // 0x201448: 0x27a60094  addiu       $a2, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5128u, 0x201444u, 0x20144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20144Cu;
label_20144c:
    // 0x20144c: 0x260301d0  addiu       $v1, $s0, 0x1D0
    ctx->pc = 0x20144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x201450: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x201450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x201454: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x201454u;
    {
        const bool branch_taken_0x201454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201454u;
        // 0x201458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201454) {
            ctx->pc = 0x2014C0u;
            goto label_2014c0;
        }
    }
    ctx->pc = 0x20145Cu;
    // 0x20145c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_201460:
    // 0x201460: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x201460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x201464: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x201464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x201468: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x201468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x20146c: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x20146cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x201470: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x201470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x201474: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x201474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x201478: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x201478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x20147c: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x20147cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x201480: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x201480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201484: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x201484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201488: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x201488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20148c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x20148cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201490: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x201490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201494: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x201494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201498: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x201498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20149c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x20149cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2014a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2014a4: 0x0  nop
    ctx->pc = 0x2014a4u;
    // NOP
    // 0x2014a8: 0x0  nop
    ctx->pc = 0x2014a8u;
    // NOP
    // 0x2014ac: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2014ACu;
    {
        const bool branch_taken_0x2014ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014ACu;
        // 0x2014b0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014ac) {
            ctx->pc = 0x201460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201460;
        }
    }
    ctx->pc = 0x2014B4u;
    // 0x2014b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2014B4u;
    {
        const bool branch_taken_0x2014b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014B4u;
        // 0x2014b8: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014b4) {
            ctx->pc = 0x2014FCu;
            goto label_2014fc;
        }
    }
    ctx->pc = 0x2014BCu;
    // 0x2014bc: 0x0  nop
    ctx->pc = 0x2014bcu;
    // NOP
label_2014c0:
    // 0x2014c0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2014c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2014c4:
    // 0x2014c4: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x2014c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2014c8: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2014c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2014cc: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2014ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2014d0: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x2014d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2014d4: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x2014d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2014d8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2014d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2014dc: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x2014dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2014e0: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x2014e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2014e4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2014e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2014e8: 0x0  nop
    ctx->pc = 0x2014e8u;
    // NOP
    // 0x2014ec: 0x0  nop
    ctx->pc = 0x2014ecu;
    // NOP
    // 0x2014f0: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2014F0u;
    {
        const bool branch_taken_0x2014f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2014F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014F0u;
        // 0x2014f4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014f0) {
            ctx->pc = 0x2014C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2014c4;
        }
    }
    ctx->pc = 0x2014F8u;
    // 0x2014f8: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x2014f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2014fc:
    // 0x2014fc: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2014fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x201500: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x201500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x201504: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x201504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x201508: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20150c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20150cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x201510: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x201510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x201514: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x201518: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x201518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x20151c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x20151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x201520: 0xae0602a8  sw          $a2, 0x2A8($s0)
    ctx->pc = 0x201520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 6));
    // 0x201524: 0xae0302b8  sw          $v1, 0x2B8($s0)
    ctx->pc = 0x201524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 3));
    // 0x201528: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x201528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x20152c: 0xae0502bc  sw          $a1, 0x2BC($s0)
    ctx->pc = 0x20152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 5));
    // 0x201530: 0xae0402b4  sw          $a0, 0x2B4($s0)
    ctx->pc = 0x201530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 4));
    // 0x201534: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x201534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x201538: 0x3e00008  jr          $ra
    ctx->pc = 0x201538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201538u;
        // 0x20153c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201540u;
}
