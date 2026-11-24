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

// Function: sub_002584B0
// Address: 0x2584b0 - 0x2586e4
void sub_002584B0_0x2584b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002584B0_0x2584b0");
#endif

    switch (ctx->pc) {
        case 0x258510u: goto label_258510;
        case 0x258594u: goto label_258594;
        case 0x2585fcu: goto label_2585fc;
        case 0x258620u: goto label_258620;
        case 0x258634u: goto label_258634;
        case 0x258650u: goto label_258650;
        case 0x25866cu: goto label_25866c;
        default: break;
    }

    ctx->pc = 0x2584b0u;

    // 0x2584b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2584b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2584b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2584b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2584b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2584b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2584bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2584bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2584c0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2584c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2584c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2584c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2584c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2584ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2584d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2584d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2584d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2584d8: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2584d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2584dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2584e0: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2584E0u;
    {
        const bool branch_taken_0x2584e0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2584E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584E0u;
        // 0x2584e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584e0) {
            ctx->pc = 0x2584F0u;
            goto label_2584f0;
        }
    }
    ctx->pc = 0x2584E8u;
    // 0x2584e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2584E8u;
    {
        const bool branch_taken_0x2584e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584E8u;
        // 0x2584ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584e8) {
            ctx->pc = 0x2584F8u;
            goto label_2584f8;
        }
    }
    ctx->pc = 0x2584F0u;
label_2584f0:
    // 0x2584f0: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x2584f0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2584f4: 0x63023  negu        $a2, $a2
    ctx->pc = 0x2584f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_2584f8:
    // 0x2584f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2584f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2584fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x258500: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x258500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x258504: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x258504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x258508: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x258508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x25850c: 0x0  nop
    ctx->pc = 0x25850cu;
    // NOP
label_258510:
    // 0x258510: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258510u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258514: 0xc4001b  divu        $zero, $a2, $a0
    ctx->pc = 0x258514u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x258518: 0x0  nop
    ctx->pc = 0x258518u;
    // NOP
    // 0x25851c: 0x0  nop
    ctx->pc = 0x25851cu;
    // NOP
    // 0x258520: 0x1010  mfhi        $v0
    ctx->pc = 0x258520u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x258524: 0x660019  multu       $v1, $a2
    ctx->pc = 0x258524u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x258528: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x258528u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25852c: 0x0  nop
    ctx->pc = 0x25852cu;
    // NOP
    // 0x258530: 0x1010  mfhi        $v0
    ctx->pc = 0x258530u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x258534: 0x230c2  srl         $a2, $v0, 3
    ctx->pc = 0x258534u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x258538: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x258538u;
    {
        const bool branch_taken_0x258538 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258538u;
        // 0x25853c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258538) {
            ctx->pc = 0x258510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258510;
        }
    }
    ctx->pc = 0x258540u;
    // 0x258540: 0x247082a  slt         $at, $s2, $a3
    ctx->pc = 0x258540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x258544: 0x241380a  movz        $a3, $s2, $at
    ctx->pc = 0x258544u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x258548: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x258548u;
    {
        const bool branch_taken_0x258548 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x25854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258548u;
        // 0x25854c: 0xf28823  subu        $s1, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258548) {
            ctx->pc = 0x258578u;
            goto label_258578;
        }
    }
    ctx->pc = 0x258550u;
    // 0x258550: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x258550u;
    {
        const bool branch_taken_0x258550 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x258550) {
            ctx->pc = 0x258578u;
            goto label_258578;
        }
    }
    ctx->pc = 0x258558u;
    // 0x258558: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x258558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x25855c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x25855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x258560: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x258560u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x258564: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x258564u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x258568: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x258568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x25856c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x25856cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x258570: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x258570u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x258574: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x258574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_258578:
    // 0x258578: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x258578u;
    {
        const bool branch_taken_0x258578 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x258578) {
            ctx->pc = 0x2585A0u;
            goto label_2585a0;
        }
    }
    ctx->pc = 0x258580u;
    // 0x258580: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x258580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x258584: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258588: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x258588u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25858c: 0xc09559c  jal         func_255670
    ctx->pc = 0x25858Cu;
    SET_GPR_U32(ctx, 31, 0x258594u);
    ctx->pc = 0x258590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25858Cu;
    // 0x258590: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255670u, 0x25858Cu, 0x258594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258594u;
label_258594:
    // 0x258594: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x258594u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x258598: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x258598u;
    {
        const bool branch_taken_0x258598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258598u;
        // 0x25859c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258598) {
            ctx->pc = 0x258608u;
            goto label_258608;
        }
    }
    ctx->pc = 0x2585A0u;
label_2585a0:
    // 0x2585a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2585a4: 0x11220010  beq         $t1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2585A4u;
    {
        const bool branch_taken_0x2585a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2585a4) {
            ctx->pc = 0x2585E8u;
            goto label_2585e8;
        }
    }
    ctx->pc = 0x2585ACu;
    // 0x2585ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2585acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2585b0: 0x11220003  beq         $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2585B0u;
    {
        const bool branch_taken_0x2585b0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x2585b0) {
            ctx->pc = 0x2585C0u;
            goto label_2585c0;
        }
    }
    ctx->pc = 0x2585B8u;
    // 0x2585b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2585B8u;
    {
        const bool branch_taken_0x2585b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2585b8) {
            ctx->pc = 0x258608u;
            goto label_258608;
        }
    }
    ctx->pc = 0x2585C0u;
label_2585c0:
    // 0x2585c0: 0x240200f5  addiu       $v0, $zero, 0xF5
    ctx->pc = 0x2585c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x2585c4: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2585c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2585c8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2585c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2585cc: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x2585ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2585d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2585d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2585d4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x2585d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x2585d8: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2585d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2585dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2585DCu;
    {
        const bool branch_taken_0x2585dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585DCu;
        // 0x2585e0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585dc) {
            ctx->pc = 0x258608u;
            goto label_258608;
        }
    }
    ctx->pc = 0x2585E4u;
    // 0x2585e4: 0x0  nop
    ctx->pc = 0x2585e4u;
    // NOP
label_2585e8:
    // 0x2585e8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x2585e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2585ec: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2585ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2585f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2585f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585f4: 0xc09559c  jal         func_255670
    ctx->pc = 0x2585F4u;
    SET_GPR_U32(ctx, 31, 0x2585FCu);
    ctx->pc = 0x2585F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2585F4u;
    // 0x2585f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255670u, 0x2585F4u, 0x2585FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585FCu;
label_2585fc:
    // 0x2585fc: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x2585fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x258600: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x258600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x258604: 0x0  nop
    ctx->pc = 0x258604u;
    // NOP
label_258608:
    // 0x258608: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x258608u;
    {
        const bool branch_taken_0x258608 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x258608) {
            ctx->pc = 0x258648u;
            goto label_258648;
        }
    }
    ctx->pc = 0x258610u;
    // 0x258610: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x258610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x258614: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x258614u;
    {
        const bool branch_taken_0x258614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x258618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258614u;
        // 0x258618: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258614) {
            ctx->pc = 0x258648u;
            goto label_258648;
        }
    }
    ctx->pc = 0x25861Cu;
    // 0x25861c: 0x0  nop
    ctx->pc = 0x25861cu;
    // NOP
label_258620:
    // 0x258620: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x258620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x258624: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x258624u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x258628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25862c: 0xc09559c  jal         func_255670
    ctx->pc = 0x25862Cu;
    SET_GPR_U32(ctx, 31, 0x258634u);
    ctx->pc = 0x258630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25862Cu;
    // 0x258630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255670u, 0x25862Cu, 0x258634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258634u;
label_258634:
    // 0x258634: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x258634u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x258638: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25863c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x25863cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x258640: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258640u;
    {
        const bool branch_taken_0x258640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258640u;
        // 0x258644: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258640) {
            ctx->pc = 0x258620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258620;
        }
    }
    ctx->pc = 0x258648u;
label_258648:
    // 0x258648: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x258648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x25864c: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x25864cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_258650:
    // 0x258650: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x258650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x258654: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x258654u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x258658: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25865c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25865cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258660: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x258660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x258664: 0xc09559c  jal         func_255670
    ctx->pc = 0x258664u;
    SET_GPR_U32(ctx, 31, 0x25866Cu);
    ctx->pc = 0x258668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258664u;
    // 0x258668: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255670u, 0x258664u, 0x25866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25866Cu;
label_25866c:
    // 0x25866c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25866cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x258670: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x258670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x258674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258678: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x258678u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x25867c: 0x1640fff4  bnez        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x25867Cu;
    {
        const bool branch_taken_0x25867c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x258680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25867Cu;
        // 0x258680: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25867c) {
            ctx->pc = 0x258650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258650;
        }
    }
    ctx->pc = 0x258684u;
    // 0x258684: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x258684u;
    {
        const bool branch_taken_0x258684 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x258684) {
            ctx->pc = 0x2586B8u;
            goto label_2586b8;
        }
    }
    ctx->pc = 0x25868Cu;
    // 0x25868c: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x25868Cu;
    {
        const bool branch_taken_0x25868c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x25868c) {
            ctx->pc = 0x2586B8u;
            goto label_2586b8;
        }
    }
    ctx->pc = 0x258694u;
    // 0x258694: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x258694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x258698: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x258698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x25869c: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x25869cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2586a0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2586a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2586a4: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x2586a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2586a8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x2586a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x2586ac: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x2586acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2586b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2586b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2586b4: 0x0  nop
    ctx->pc = 0x2586b4u;
    // NOP
label_2586b8:
    // 0x2586b8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2586b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2586bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2586c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2586c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2586c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2586c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2586c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2586c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2586cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2586ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2586d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2586d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2586d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2586d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2586d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2586d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2586dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2586DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2586E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586DCu;
        // 0x2586e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2586E4u;
}
