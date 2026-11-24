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

// Function: sub_001FB4D8
// Address: 0x1fb4d8 - 0x1fb5f4
void sub_001FB4D8_0x1fb4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB4D8_0x1fb4d8");
#endif

    switch (ctx->pc) {
        case 0x1fb508u: goto label_1fb508;
        case 0x1fb52cu: goto label_1fb52c;
        default: break;
    }

    ctx->pc = 0x1fb4d8u;

    // 0x1fb4d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fb4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fb4dc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1fb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1fb4e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fb4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fb4e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fb4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fb4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fb4ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fb4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fb4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fb4f4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1fb4f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fb4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fb4fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fb4fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb500: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1fb500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1fb504: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fb504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb508:
    // 0x1fb508: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1fb508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fb50c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FB50Cu;
    {
        const bool branch_taken_0x1fb50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb50c) {
            ctx->pc = 0x1FB510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB50Cu;
            // 0x1fb510: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB55Cu;
            goto label_1fb55c;
        }
    }
    ctx->pc = 0x1FB514u;
    // 0x1fb514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fb514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb518: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fb518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb51c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb520: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fb520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb524: 0xc07ed7e  jal         func_1FB5F8
    ctx->pc = 0x1FB524u;
    SET_GPR_U32(ctx, 31, 0x1FB52Cu);
    ctx->pc = 0x1FB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB524u;
    // 0x1fb528: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB5F8u, 0x1FB524u, 0x1FB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB52Cu;
label_1fb52c:
    // 0x1fb52c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1fb52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fb530: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fb530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb534: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fb538: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1fb538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fb53c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1fb53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fb540: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fb540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb544: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb548: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1fb548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1fb54c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1fb54cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1fb550: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FB550u;
    {
        const bool branch_taken_0x1fb550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB550u;
        // 0x1fb554: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb550) {
            ctx->pc = 0x1FB508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb508;
        }
    }
    ctx->pc = 0x1FB558u;
    // 0x1fb558: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb55c:
    // 0x1fb55c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1fb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1fb560: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fb560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fb564: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB564u;
    {
        const bool branch_taken_0x1fb564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB564u;
        // 0x1fb568: 0x26840028  addiu       $a0, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb564) {
            ctx->pc = 0x1FB5D0u;
            goto label_1fb5d0;
        }
    }
    ctx->pc = 0x1FB56Cu;
    // 0x1fb56c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fb570: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB570u;
    {
        const bool branch_taken_0x1fb570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB570u;
        // 0x1fb574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb570) {
            ctx->pc = 0x1FB588u;
            goto label_1fb588;
        }
    }
    ctx->pc = 0x1FB578u;
    // 0x1fb578: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fb57c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb584: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1fb584u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1fb588:
    // 0x1fb588: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1fb58c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1fb58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fb590: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x1fb590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1fb594: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x1fb594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1fb598: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x1fb598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1fb59c: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x1fb59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1fb5a0: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x1fb5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1fb5a4: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x1fb5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1fb5a8: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x1fb5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1fb5ac: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x1fb5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1fb5b0: 0xb043004f  sdl         $v1, 0x4F($v0)
    ctx->pc = 0x1fb5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb5b4: 0xb4430048  sdr         $v1, 0x48($v0)
    ctx->pc = 0x1fb5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb5b8: 0xb0450057  sdl         $a1, 0x57($v0)
    ctx->pc = 0x1fb5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb5bc: 0xb4450050  sdr         $a1, 0x50($v0)
    ctx->pc = 0x1fb5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb5c0: 0xb046005f  sdl         $a2, 0x5F($v0)
    ctx->pc = 0x1fb5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb5c4: 0xb4460058  sdr         $a2, 0x58($v0)
    ctx->pc = 0x1fb5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb5c8: 0xb0470067  sdl         $a3, 0x67($v0)
    ctx->pc = 0x1fb5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1fb5cc: 0xb4470060  sdr         $a3, 0x60($v0)
    ctx->pc = 0x1fb5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1fb5d0:
    // 0x1fb5d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fb5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb5d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb5d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fb5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb5dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fb5dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb5e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fb5e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fb5e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1fb5e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb5e8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fb5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fb5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5ECu;
        // 0x1fb5f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB5F4u;
}
