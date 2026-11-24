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

// Function: sub_001EE6C0
// Address: 0x1ee6c0 - 0x1ee848
void sub_001EE6C0_0x1ee6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE6C0_0x1ee6c0");
#endif

    switch (ctx->pc) {
        case 0x1ee774u: goto label_1ee774;
        case 0x1ee790u: goto label_1ee790;
        case 0x1ee7c8u: goto label_1ee7c8;
        case 0x1ee7e8u: goto label_1ee7e8;
        default: break;
    }

    ctx->pc = 0x1ee6c0u;

    // 0x1ee6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee6c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1ee6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee6c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ee6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ee6cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee6d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee6d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ee6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee6dc: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1ee6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee6e0: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x1ee6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee6e4: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x1ee6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee6e8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1ee6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1ee6ec: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ee6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1ee6f0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1ee6f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ee6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ee6f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ee6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ee6fc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1ee6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1ee700: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1ee700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ee704: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ee704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ee708: 0x84c60006  lh          $a2, 0x6($a2)
    ctx->pc = 0x1ee708u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1ee70c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1ee70cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ee710: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ee714: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ee714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1ee718: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1ee718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1ee71c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1ee71cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1ee720: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1ee720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1ee724: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ee724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ee728: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1ee728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1ee72c: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x1ee72cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee730: 0xa087002c  sb          $a3, 0x2C($a0)
    ctx->pc = 0x1ee730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ee734: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x1ee734u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ee738: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ee738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ee73c: 0x84470004  lh          $a3, 0x4($v0)
    ctx->pc = 0x1ee73cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ee740: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1ee744: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1ee744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ee748: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1ee748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1ee74c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x1ee74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ee750: 0x658024  and         $s0, $v1, $a1
    ctx->pc = 0x1ee750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ee754: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ee754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ee758: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1ee758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1ee75c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1ee75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1ee760: 0xc58824  and         $s1, $a2, $a1
    ctx->pc = 0x1ee760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1ee764: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1ee764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1ee768: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ee768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ee76c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x1EE76Cu;
    SET_GPR_U32(ctx, 31, 0x1EE774u);
    ctx->pc = 0x1EE770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE76Cu;
    // 0x1ee770: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1EE76Cu, 0x1EE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE774u;
label_1ee774:
    // 0x1ee774: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1ee774u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1ee778: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1ee778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1ee77c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1ee77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ee780: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE780u;
    {
        const bool branch_taken_0x1ee780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE780u;
        // 0x1ee784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee780) {
            ctx->pc = 0x1EE798u;
            goto label_1ee798;
        }
    }
    ctx->pc = 0x1EE788u;
    // 0x1ee788: 0xc07ba14  jal         func_1EE850
    ctx->pc = 0x1EE788u;
    SET_GPR_U32(ctx, 31, 0x1EE790u);
    ctx->pc = 0x1EE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE850u, 0x1EE788u, 0x1EE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE790u;
label_1ee790:
    // 0x1ee790: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1EE790u;
    {
        const bool branch_taken_0x1ee790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE790u;
        // 0x1ee794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee790) {
            ctx->pc = 0x1EE830u;
            goto label_1ee830;
        }
    }
    ctx->pc = 0x1EE798u;
label_1ee798:
    // 0x1ee798: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1ee798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ee79c: 0x2303021  addu        $a2, $s1, $s0
    ctx->pc = 0x1ee79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1ee7a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ee7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee7a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ee7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ee7a8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1ee7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ee7ac: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1ee7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ee7b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ee7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee7b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ee7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ee7b8: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1ee7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1ee7bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ee7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ee7c0: 0xc049590  jal         func_125640
    ctx->pc = 0x1EE7C0u;
    SET_GPR_U32(ctx, 31, 0x1EE7C8u);
    ctx->pc = 0x1EE7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE7C0u;
    // 0x1ee7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1EE7C0u, 0x1EE7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE7C8u;
label_1ee7c8:
    // 0x1ee7c8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ee7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ee7cc: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1ee7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ee7d0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ee7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee7d4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EE7D4u;
    {
        const bool branch_taken_0x1ee7d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE7D4u;
        // 0x1ee7d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7d4) {
            ctx->pc = 0x1EE828u;
            goto label_1ee828;
        }
    }
    ctx->pc = 0x1EE7DCu;
    // 0x1ee7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee7e0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1ee7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee7e4: 0x0  nop
    ctx->pc = 0x1ee7e4u;
    // NOP
label_1ee7e8:
    // 0x1ee7e8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1ee7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ee7ec: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ee7f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ee7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ee7f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ee7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ee7f8: 0x80840004  lb          $a0, 0x4($a0)
    ctx->pc = 0x1ee7f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ee7fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ee7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ee800: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1ee800u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee804: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1ee804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ee808: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ee808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ee80c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1ee80cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee810: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ee810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ee814: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1ee814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ee818: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1ee818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ee81c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1EE81Cu;
    {
        const bool branch_taken_0x1ee81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE81Cu;
        // 0x1ee820: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee81c) {
            ctx->pc = 0x1EE7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee7e8;
        }
    }
    ctx->pc = 0x1EE824u;
    // 0x1ee824: 0x0  nop
    ctx->pc = 0x1ee824u;
    // NOP
label_1ee828:
    // 0x1ee828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee82c: 0x0  nop
    ctx->pc = 0x1ee82cu;
    // NOP
label_1ee830:
    // 0x1ee830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ee830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee840: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE840u;
        // 0x1ee844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE848u;
}
