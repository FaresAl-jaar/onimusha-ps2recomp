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

// Function: sub_00218540
// Address: 0x218540 - 0x218848
void sub_00218540_0x218540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218540_0x218540");
#endif

    switch (ctx->pc) {
        case 0x218590u: goto label_218590;
        case 0x2185c8u: goto label_2185c8;
        case 0x21862cu: goto label_21862c;
        case 0x21869cu: goto label_21869c;
        default: break;
    }

    ctx->pc = 0x218540u;

    // 0x218540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218548: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21854c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218550: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x218550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218554: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218558: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x218558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21855c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218560: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x218560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218564: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x218564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x218568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21856c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x218570: 0x8e701fc0  lw          $s0, 0x1FC0($s3)
    ctx->pc = 0x218570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8128)));
    // 0x218574: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x218574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x218578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x218578u;
    {
        const bool branch_taken_0x218578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218578u;
        // 0x21857c: 0x26750950  addiu       $s5, $s3, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218578) {
            ctx->pc = 0x218588u;
            goto label_218588;
        }
    }
    ctx->pc = 0x218580u;
    // 0x218580: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x218580u;
    {
        const bool branch_taken_0x218580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218580u;
        // 0x218584: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218580) {
            ctx->pc = 0x2185A8u;
            goto label_2185a8;
        }
    }
    ctx->pc = 0x218588u;
label_218588:
    // 0x218588: 0xc086812  jal         func_21A048
    ctx->pc = 0x218588u;
    SET_GPR_U32(ctx, 31, 0x218590u);
    ctx->pc = 0x21A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A048u, 0x218588u, 0x218590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218590u;
label_218590:
    // 0x218590: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218590u;
    {
        const bool branch_taken_0x218590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218590u;
        // 0x218594: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218590) {
            ctx->pc = 0x2185A8u;
            goto label_2185a8;
        }
    }
    ctx->pc = 0x218598u;
    // 0x218598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21859c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2185a0: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2185A0u;
    {
        const bool branch_taken_0x2185a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2185A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185A0u;
        // 0x2185a4: 0xaea3002c  sw          $v1, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185a0) {
            ctx->pc = 0x218824u;
            goto label_218824;
        }
    }
    ctx->pc = 0x2185A8u;
label_2185a8:
    // 0x2185a8: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x2185a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2185ac: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2185acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2185b0: 0x2544005c  addiu       $a0, $t2, 0x5C
    ctx->pc = 0x2185b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x2185b4: 0x2441025  or          $v0, $s2, $a0
    ctx->pc = 0x2185b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x2185b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2185b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2185bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2185BCu;
    {
        const bool branch_taken_0x2185bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2185C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185BCu;
        // 0x2185c0: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185bc) {
            ctx->pc = 0x218628u;
            goto label_218628;
        }
    }
    ctx->pc = 0x2185C4u;
    // 0x2185c4: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x2185c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_2185c8:
    // 0x2185c8: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2185c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2185cc: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2185ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2185d0: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2185d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2185d4: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2185d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2185d8: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2185d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2185dc: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2185dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2185e0: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x2185e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2185e4: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x2185e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2185e8: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2185e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2185ec: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2185ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2185f0: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x2185f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2185f4: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x2185f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2185f8: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x2185f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2185fc: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x2185fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218600: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x218600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218604: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x218604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218608: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x218608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x21860c: 0x0  nop
    ctx->pc = 0x21860cu;
    // NOP
    // 0x218610: 0x0  nop
    ctx->pc = 0x218610u;
    // NOP
    // 0x218614: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x218614u;
    {
        const bool branch_taken_0x218614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x218618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218614u;
        // 0x218618: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218614) {
            ctx->pc = 0x2185C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2185c8;
        }
    }
    ctx->pc = 0x21861Cu;
    // 0x21861c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21861Cu;
    {
        const bool branch_taken_0x21861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21861Cu;
        // 0x218620: 0xde021120  ld          $v0, 0x1120($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21861c) {
            ctx->pc = 0x218664u;
            goto label_218664;
        }
    }
    ctx->pc = 0x218624u;
    // 0x218624: 0x0  nop
    ctx->pc = 0x218624u;
    // NOP
label_218628:
    // 0x218628: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x218628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_21862c:
    // 0x21862c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x21862cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218630: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x218630u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x218634: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x218634u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x218638: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x218638u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21863c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x21863cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x218640: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x218640u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x218644: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x218644u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x218648: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x218648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x21864c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x21864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x218650: 0x0  nop
    ctx->pc = 0x218650u;
    // NOP
    // 0x218654: 0x0  nop
    ctx->pc = 0x218654u;
    // NOP
    // 0x218658: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x218658u;
    {
        const bool branch_taken_0x218658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218658u;
        // 0x21865c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218658) {
            ctx->pc = 0x21862Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21862c;
        }
    }
    ctx->pc = 0x218660u;
    // 0x218660: 0xde021120  ld          $v0, 0x1120($s0)
    ctx->pc = 0x218660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4384)));
label_218664:
    // 0x218664: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x218664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x218668: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x218668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x21866c: 0x14830042  bne         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x21866Cu;
    {
        const bool branch_taken_0x21866c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x218670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21866Cu;
        // 0x218670: 0xfca200e0  sd          $v0, 0xE0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21866c) {
            ctx->pc = 0x218778u;
            goto label_218778;
        }
    }
    ctx->pc = 0x218674u;
    // 0x218674: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x218674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x218678: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x218678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21867c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x21867cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x218680: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x218680u;
    {
        const bool branch_taken_0x218680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218680) {
            ctx->pc = 0x218684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218680u;
            // 0x218684: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186B4u;
            goto label_2186b4;
        }
    }
    ctx->pc = 0x218688u;
    // 0x218688: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x218688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21868c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21868Cu;
    {
        const bool branch_taken_0x21868c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21868c) {
            ctx->pc = 0x218690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21868Cu;
            // 0x218690: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186B4u;
            goto label_2186b4;
        }
    }
    ctx->pc = 0x218694u;
    // 0x218694: 0xc086850  jal         func_21A140
    ctx->pc = 0x218694u;
    SET_GPR_U32(ctx, 31, 0x21869Cu);
    ctx->pc = 0x218698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218694u;
    // 0x218698: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A140u, 0x218694u, 0x21869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21869Cu;
label_21869c:
    // 0x21869c: 0x8e020164  lw          $v0, 0x164($s0)
    ctx->pc = 0x21869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2186a0: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x2186a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x2186a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2186a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2186a8: 0xae030164  sw          $v1, 0x164($s0)
    ctx->pc = 0x2186a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 3));
    // 0x2186ac: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x2186acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2186b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2186b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2186b4:
    // 0x2186b4: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x2186b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2186b8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2186b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2186bc: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x2186bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x2186c0: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x2186c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2186c4: 0x2505000f  addiu       $a1, $t0, 0xF
    ctx->pc = 0x2186c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x2186c8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2186c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2186cc: 0x28a90000  slti        $t1, $a1, 0x0
    ctx->pc = 0x2186ccu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2186d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2186d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2186d4: 0x2508001e  addiu       $t0, $t0, 0x1E
    ctx->pc = 0x2186d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30));
    // 0x2186d8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2186d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2186dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2186dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2186e0: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2186e4: 0x2484007e  addiu       $a0, $a0, 0x7E
    ctx->pc = 0x2186e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
    // 0x2186e8: 0x2446003f  addiu       $a2, $v0, 0x3F
    ctx->pc = 0x2186e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x2186ec: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x2186ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x2186f0: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x2186f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2186f4: 0x109280b  movn        $a1, $t0, $t1
    ctx->pc = 0x2186f4u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x2186f8: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x2186f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x2186fc: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x2186fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x218700: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x218700u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x218704: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x218704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x218708: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x218708u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x21870c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x21870cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x218710: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x218710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x218714: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x218714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x218718: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x218718u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x21871c: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x21871cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x218720: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x218720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x218724: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x218724u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x218728: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x218728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21872c: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x21872cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x218730: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x218730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x218734: 0xa627001e  sh          $a3, 0x1E($s1)
    ctx->pc = 0x218734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 7));
    // 0x218738: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x218738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x21873c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x21873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x218740: 0x52a40  sll         $a1, $a1, 9
    ctx->pc = 0x218740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x218744: 0xa626001c  sh          $a2, 0x1C($s1)
    ctx->pc = 0x218744u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x218748: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x218748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21874c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x21874cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x218750: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x218750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x218754: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x218754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x218758: 0xa627000e  sh          $a3, 0xE($s1)
    ctx->pc = 0x218758u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x21875c: 0xa626000c  sh          $a2, 0xC($s1)
    ctx->pc = 0x21875cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x218760: 0xae280008  sw          $t0, 0x8($s1)
    ctx->pc = 0x218760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x218764: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x218764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x218768: 0xae290018  sw          $t1, 0x18($s1)
    ctx->pc = 0x218768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 9));
    // 0x21876c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x21876Cu;
    {
        const bool branch_taken_0x21876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21876Cu;
        // 0x218770: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21876c) {
            ctx->pc = 0x218804u;
            goto label_218804;
        }
    }
    ctx->pc = 0x218774u;
    // 0x218774: 0x0  nop
    ctx->pc = 0x218774u;
    // NOP
label_218778:
    // 0x218778: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x218778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x21877c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21877cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218780: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x218780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x218784: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218784u;
    {
        const bool branch_taken_0x218784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218784u;
        // 0x218788: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218784) {
            ctx->pc = 0x2187ACu;
            goto label_2187ac;
        }
    }
    ctx->pc = 0x21878Cu;
    // 0x21878c: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x21878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x218790: 0xae050164  sw          $a1, 0x164($s0)
    ctx->pc = 0x218790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 5));
    // 0x218794: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x218794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x218798: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x218798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x21879c: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x21879cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x2187a0: 0xae03013c  sw          $v1, 0x13C($s0)
    ctx->pc = 0x2187a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 3));
    // 0x2187a4: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x2187a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2187a8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x2187a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_2187ac:
    // 0x2187ac: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x2187acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2187b0: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x2187b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2187b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2187b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2187b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2187b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2187bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2187bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2187c0: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2187c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2187c4: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2187c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2187c8: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2187c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2187cc: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2187ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2187d0: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x2187d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2187d4: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x2187d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2187d8: 0xb226000f  sdl         $a2, 0xF($s1)
    ctx->pc = 0x2187d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2187dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2187dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2187e0: 0xb6260008  sdr         $a2, 0x8($s1)
    ctx->pc = 0x2187e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2187e4: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x2187e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2187e8: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x2187e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2187ec: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x2187ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2187f0: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x2187f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2187f4: 0xb2290017  sdl         $t1, 0x17($s1)
    ctx->pc = 0x2187f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2187f8: 0xb6290010  sdr         $t1, 0x10($s1)
    ctx->pc = 0x2187f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2187fc: 0xb222001f  sdl         $v0, 0x1F($s1)
    ctx->pc = 0x2187fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218800: 0xb6220018  sdr         $v0, 0x18($s1)
    ctx->pc = 0x218800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_218804:
    // 0x218804: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x218804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x218808: 0x2544005c  addiu       $a0, $t2, 0x5C
    ctx->pc = 0x218808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 92));
    // 0x21880c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x21880cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x218810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x218810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218814: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x218814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x218818: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x218818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x21881c: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x21881cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x218820: 0xaea0002c  sw          $zero, 0x2C($s5)
    ctx->pc = 0x218820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 0));
label_218824:
    // 0x218824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21882c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21882cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218830: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218834: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218834u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218838: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x218838u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21883c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21883cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218840: 0x3e00008  jr          $ra
    ctx->pc = 0x218840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218840u;
        // 0x218844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218848u;
}
