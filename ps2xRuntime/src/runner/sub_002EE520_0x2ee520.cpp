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

// Function: sub_002EE520
// Address: 0x2ee520 - 0x2eea70
void sub_002EE520_0x2ee520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE520_0x2ee520");
#endif

    switch (ctx->pc) {
        case 0x2ee644u: goto label_2ee644;
        case 0x2ee6b0u: goto label_2ee6b0;
        case 0x2ee730u: goto label_2ee730;
        case 0x2ee744u: goto label_2ee744;
        case 0x2ee750u: goto label_2ee750;
        case 0x2ee770u: goto label_2ee770;
        case 0x2ee7f4u: goto label_2ee7f4;
        case 0x2ee868u: goto label_2ee868;
        case 0x2ee90cu: goto label_2ee90c;
        case 0x2ee9b4u: goto label_2ee9b4;
        default: break;
    }

    ctx->pc = 0x2ee520u;

    // 0x2ee520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ee520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ee524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ee524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ee528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ee528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ee52c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ee52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ee530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee534: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2ee534u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ee538: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ee538u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ee53c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ee53cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ee540: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x2ee540u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2ee544: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ee544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee548: 0x10c4011f  beq         $a2, $a0, . + 4 + (0x11F << 2)
    ctx->pc = 0x2EE548u;
    {
        const bool branch_taken_0x2ee548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE548u;
        // 0x2ee54c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee548) {
            ctx->pc = 0x2EE9C8u;
            goto label_2ee9c8;
        }
    }
    ctx->pc = 0x2EE550u;
    // 0x2ee550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ee550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee554: 0x10c500d4  beq         $a2, $a1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x2EE554u;
    {
        const bool branch_taken_0x2ee554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE554u;
        // 0x2ee558: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee554) {
            ctx->pc = 0x2EE8A8u;
            goto label_2ee8a8;
        }
    }
    ctx->pc = 0x2EE55Cu;
    // 0x2ee55c: 0x10c300c4  beq         $a2, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2EE55Cu;
    {
        const bool branch_taken_0x2ee55c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee55c) {
            ctx->pc = 0x2EE870u;
            goto label_2ee870;
        }
    }
    ctx->pc = 0x2EE564u;
    // 0x2ee564: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE564u;
    {
        const bool branch_taken_0x2ee564 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee564) {
            ctx->pc = 0x2EE578u;
            goto label_2ee578;
        }
    }
    ctx->pc = 0x2EE56Cu;
    // 0x2ee56c: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x2EE56Cu;
    {
        const bool branch_taken_0x2ee56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee56c) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE574u;
    // 0x2ee574: 0x0  nop
    ctx->pc = 0x2ee574u;
    // NOP
label_2ee578:
    // 0x2ee578: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE578u;
    {
        const bool branch_taken_0x2ee578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ee578) {
            ctx->pc = 0x2EE588u;
            goto label_2ee588;
        }
    }
    ctx->pc = 0x2EE580u;
    // 0x2ee580: 0xa2242b20  sb          $a0, 0x2B20($s1)
    ctx->pc = 0x2ee580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11040), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ee584: 0x0  nop
    ctx->pc = 0x2ee584u;
    // NOP
label_2ee588:
    // 0x2ee588: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2ee588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ee58c: 0x2e010009  sltiu       $at, $s0, 0x9
    ctx->pc = 0x2ee58cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2ee590: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EE590u;
    {
        const bool branch_taken_0x2ee590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE590u;
        // 0x2ee594: 0x7e220870  sq          $v0, 0x870($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee590) {
            ctx->pc = 0x2EE618u;
            goto label_2ee618;
        }
    }
    ctx->pc = 0x2EE598u;
    // 0x2ee598: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee59c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ee59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ee5a0: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x2ee5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x2ee5a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee5a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ee5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee5ac: 0x400008  jr          $v0
    ctx->pc = 0x2EE5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE5B8u: goto label_2ee5b8;
            case 0x2EE5E8u: goto label_2ee5e8;
            case 0x2EE5F8u: goto label_2ee5f8;
            case 0x2EE608u: goto label_2ee608;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE5ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EE5B4u;
    // 0x2ee5b4: 0x0  nop
    ctx->pc = 0x2ee5b4u;
    // NOP
label_2ee5b8:
    // 0x2ee5b8: 0x82232b20  lb          $v1, 0x2B20($s1)
    ctx->pc = 0x2ee5b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x2ee5bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee5c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE5C0u;
    {
        const bool branch_taken_0x2ee5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5C0u;
        // 0x2ee5c4: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5c0) {
            ctx->pc = 0x2EE5D8u;
            goto label_2ee5d8;
        }
    }
    ctx->pc = 0x2EE5C8u;
    // 0x2ee5c8: 0x7822c4d0  lq          $v0, -0x3B30($at)
    ctx->pc = 0x2ee5c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x2ee5cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE5CCu;
    {
        const bool branch_taken_0x2ee5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5CCu;
        // 0x2ee5d0: 0x7e220890  sq          $v0, 0x890($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5cc) {
            ctx->pc = 0x2EE618u;
            goto label_2ee618;
        }
    }
    ctx->pc = 0x2EE5D4u;
    // 0x2ee5d4: 0x0  nop
    ctx->pc = 0x2ee5d4u;
    // NOP
label_2ee5d8:
    // 0x2ee5d8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2ee5d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ee5dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EE5DCu;
    {
        const bool branch_taken_0x2ee5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5DCu;
        // 0x2ee5e0: 0x7e220890  sq          $v0, 0x890($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5dc) {
            ctx->pc = 0x2EE618u;
            goto label_2ee618;
        }
    }
    ctx->pc = 0x2EE5E4u;
    // 0x2ee5e4: 0x0  nop
    ctx->pc = 0x2ee5e4u;
    // NOP
label_2ee5e8:
    // 0x2ee5e8: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2ee5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2ee5ec: 0x7822c4b0  lq          $v0, -0x3B50($at)
    ctx->pc = 0x2ee5ecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x67C4B0u));
    // 0x2ee5f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE5F0u;
    {
        const bool branch_taken_0x2ee5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5F0u;
        // 0x2ee5f4: 0x7e220890  sq          $v0, 0x890($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5f0) {
            ctx->pc = 0x2EE618u;
            goto label_2ee618;
        }
    }
    ctx->pc = 0x2EE5F8u;
label_2ee5f8:
    // 0x2ee5f8: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2ee5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2ee5fc: 0x7822c4c0  lq          $v0, -0x3B40($at)
    ctx->pc = 0x2ee5fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x67C4C0u));
    // 0x2ee600: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE600u;
    {
        const bool branch_taken_0x2ee600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE600u;
        // 0x2ee604: 0x7e220890  sq          $v0, 0x890($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee600) {
            ctx->pc = 0x2EE618u;
            goto label_2ee618;
        }
    }
    ctx->pc = 0x2EE608u;
label_2ee608:
    // 0x2ee608: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2ee608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2ee60c: 0x7822c4d0  lq          $v0, -0x3B30($at)
    ctx->pc = 0x2ee60cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x67C4D0u));
    // 0x2ee610: 0x7e220890  sq          $v0, 0x890($s1)
    ctx->pc = 0x2ee610u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
    // 0x2ee614: 0x0  nop
    ctx->pc = 0x2ee614u;
    // NOP
label_2ee618:
    // 0x2ee618: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ee618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ee61c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2ee61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ee620: 0x2442c460  addiu       $v0, $v0, -0x3BA0
    ctx->pc = 0x2ee620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952032));
    // 0x2ee624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee628: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ee628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee62c: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EE62Cu;
    {
        const bool branch_taken_0x2ee62c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2EE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE62Cu;
        // 0x2ee630: 0xa6222b22  sh          $v0, 0x2B22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee62c) {
            ctx->pc = 0x2EE698u;
            goto label_2ee698;
        }
    }
    ctx->pc = 0x2EE634u;
    // 0x2ee634: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x2ee634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x2ee638: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2ee638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2ee63c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2EE63Cu;
    SET_GPR_U32(ctx, 31, 0x2EE644u);
    ctx->pc = 0x2EE640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE63Cu;
    // 0x2ee640: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2EE63Cu, 0x2EE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE644u;
label_2ee644:
    // 0x2ee644: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EE644u;
    {
        const bool branch_taken_0x2ee644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE644u;
        // 0x2ee648: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee644) {
            ctx->pc = 0x2EE690u;
            goto label_2ee690;
        }
    }
    ctx->pc = 0x2EE64Cu;
    // 0x2ee64c: 0x16030010  bne         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE64Cu;
    {
        const bool branch_taken_0x2ee64c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ee64c) {
            ctx->pc = 0x2EE690u;
            goto label_2ee690;
        }
    }
    ctx->pc = 0x2EE654u;
    // 0x2ee654: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2ee654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee658: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x2ee658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x2ee65c: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x2ee65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x2ee660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee664: 0x0  nop
    ctx->pc = 0x2ee664u;
    // NOP
    // 0x2ee668: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ee668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee66c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE66Cu;
    {
        const bool branch_taken_0x2ee66c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee66c) {
            ctx->pc = 0x2EE680u;
            goto label_2ee680;
        }
    }
    ctx->pc = 0x2EE674u;
    // 0x2ee674: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2ee674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ee678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE678u;
    {
        const bool branch_taken_0x2ee678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE678u;
        // 0x2ee67c: 0xa6222b22  sh          $v0, 0x2B22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee678) {
            ctx->pc = 0x2EE698u;
            goto label_2ee698;
        }
    }
    ctx->pc = 0x2EE680u;
label_2ee680:
    // 0x2ee680: 0x24020c00  addiu       $v0, $zero, 0xC00
    ctx->pc = 0x2ee680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x2ee684: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE684u;
    {
        const bool branch_taken_0x2ee684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE684u;
        // 0x2ee688: 0xa6222b22  sh          $v0, 0x2B22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee684) {
            ctx->pc = 0x2EE698u;
            goto label_2ee698;
        }
    }
    ctx->pc = 0x2EE68Cu;
    // 0x2ee68c: 0x0  nop
    ctx->pc = 0x2ee68cu;
    // NOP
label_2ee690:
    // 0x2ee690: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee690u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2ee694: 0xa6222b22  sh          $v0, 0x2B22($s1)
    ctx->pc = 0x2ee694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 2));
label_2ee698:
    // 0x2ee698: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ee698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ee69c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ee69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ee6a0: 0x26240880  addiu       $a0, $s1, 0x880
    ctx->pc = 0x2ee6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2176));
    // 0x2ee6a4: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x2ee6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2ee6a8: 0xc0414c0  jal         func_105300
    ctx->pc = 0x2EE6A8u;
    SET_GPR_U32(ctx, 31, 0x2EE6B0u);
    ctx->pc = 0x2EE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE6A8u;
    // 0x2ee6ac: 0x26260870  addiu       $a2, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x2EE6A8u, 0x2EE6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6B0u;
label_2ee6b0:
    // 0x2ee6b0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ee6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ee6b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ee6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ee6b8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2ee6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ee6bc: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x2ee6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
    // 0x2ee6c0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2ee6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ee6c4: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x2ee6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2ee6c8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ee6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee6cc: 0x3c02bf7a  lui         $v0, 0xBF7A
    ctx->pc = 0x2ee6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49018 << 16));
    // 0x2ee6d0: 0xc6210894  lwc1        $f1, 0x894($s1)
    ctx->pc = 0x2ee6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee6d4: 0x3442e147  ori         $v0, $v0, 0xE147
    ctx->pc = 0x2ee6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57671);
    // 0x2ee6d8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ee6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ee6dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ee6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ee6e0: 0x26240870  addiu       $a0, $s1, 0x870
    ctx->pc = 0x2ee6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x2ee6e4: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x2ee6e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ee6e8: 0xe6240884  swc1        $f4, 0x884($s1)
    ctx->pc = 0x2ee6e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2180), bits); }
    // 0x2ee6ec: 0xc6210874  lwc1        $f1, 0x874($s1)
    ctx->pc = 0x2ee6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee6f0: 0xc6200894  lwc1        $f0, 0x894($s1)
    ctx->pc = 0x2ee6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee6f4: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2ee6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2ee6f8: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2ee6f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2ee6fc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2ee6fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ee700: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ee700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ee704: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2ee704u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2ee708: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2ee708u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2ee70c: 0x0  nop
    ctx->pc = 0x2ee70cu;
    // NOP
    // 0x2ee710: 0x46010544  c1          0x10544
    ctx->pc = 0x2ee710u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[1]);
    // 0x2ee714: 0x0  nop
    ctx->pc = 0x2ee714u;
    // NOP
    // 0x2ee718: 0x0  nop
    ctx->pc = 0x2ee718u;
    // NOP
    // 0x2ee71c: 0x46000504  c1          0x504
    ctx->pc = 0x2ee71cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ee720: 0x0  nop
    ctx->pc = 0x2ee720u;
    // NOP
    // 0x2ee724: 0x0  nop
    ctx->pc = 0x2ee724u;
    // NOP
    // 0x2ee728: 0xc096908  jal         func_25A420
    ctx->pc = 0x2EE728u;
    SET_GPR_U32(ctx, 31, 0x2EE730u);
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2EE728u, 0x2EE730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE730u;
label_2ee730:
    // 0x2ee730: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2ee730u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2ee734: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ee734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ee738: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x2ee738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2ee73c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2EE73Cu;
    SET_GPR_U32(ctx, 31, 0x2EE744u);
    ctx->pc = 0x2EE740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE73Cu;
    // 0x2ee740: 0x26260870  addiu       $a2, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2EE73Cu, 0x2EE744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE744u;
label_2ee744:
    // 0x2ee744: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ee744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ee748: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2EE748u;
    SET_GPR_U32(ctx, 31, 0x2EE750u);
    ctx->pc = 0x2EE74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE748u;
    // 0x2ee74c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2EE748u, 0x2EE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE750u;
label_2ee750:
    // 0x2ee750: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x2ee750u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2ee754: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ee754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ee758: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ee758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee75c: 0x4614b303  div.s       $f12, $f22, $f20
    ctx->pc = 0x2ee75cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x2ee760: 0x0  nop
    ctx->pc = 0x2ee760u;
    // NOP
    // 0x2ee764: 0x0  nop
    ctx->pc = 0x2ee764u;
    // NOP
    // 0x2ee768: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2EE768u;
    SET_GPR_U32(ctx, 31, 0x2EE770u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2EE768u, 0x2EE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE770u;
label_2ee770:
    // 0x2ee770: 0x3c02bf7a  lui         $v0, 0xBF7A
    ctx->pc = 0x2ee770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49018 << 16));
    // 0x2ee774: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2ee774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2ee778: 0x3444e147  ori         $a0, $v0, 0xE147
    ctx->pc = 0x2ee778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57671);
    // 0x2ee77c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ee77cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee780: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ee780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ee784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ee784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee788: 0x0  nop
    ctx->pc = 0x2ee788u;
    // NOP
    // 0x2ee78c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2ee78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2ee790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ee790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ee794: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2ee794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ee798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee79c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2ee79cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee7a0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ee7a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee7a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE7A4u;
    {
        const bool branch_taken_0x2ee7a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7A4u;
        // 0x2ee7a8: 0x7e220090  sq          $v0, 0x90($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7a4) {
            ctx->pc = 0x2EE7BCu;
            goto label_2ee7bc;
        }
    }
    ctx->pc = 0x2EE7ACu;
    // 0x2ee7ac: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee7acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2ee7b0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2ee7b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ee7b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE7B4u;
    {
        const bool branch_taken_0x2ee7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7B4u;
        // 0x2ee7b8: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7b4) {
            ctx->pc = 0x2EE7D8u;
            goto label_2ee7d8;
        }
    }
    ctx->pc = 0x2EE7BCu;
label_2ee7bc:
    // 0x2ee7bc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2ee7bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ee7c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ee7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee7c4: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee7c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2ee7c8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2ee7c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ee7cc: 0x0  nop
    ctx->pc = 0x2ee7ccu;
    // NOP
    // 0x2ee7d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ee7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ee7d4: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x2ee7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2ee7d8:
    // 0x2ee7d8: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x2ee7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ee7dc: 0x86232b22  lh          $v1, 0x2B22($s1)
    ctx->pc = 0x2ee7dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11042)));
    // 0x2ee7e0: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2ee7e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2ee7e4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2ee7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ee7e8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2ee7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee7ec: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2EE7ECu;
    SET_GPR_U32(ctx, 31, 0x2EE7F4u);
    ctx->pc = 0x2EE7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7ECu;
    // 0x2ee7f0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2EE7ECu, 0x2EE7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7F4u;
label_2ee7f4:
    // 0x2ee7f4: 0x96270828  lhu         $a3, 0x828($s1)
    ctx->pc = 0x2ee7f4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2ee7f8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2ee7f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ee7fc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2ee7fcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2ee800: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee804: 0x2463c420  addiu       $v1, $v1, -0x3BE0
    ctx->pc = 0x2ee804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951968));
    // 0x2ee808: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ee808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee80c: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2ee80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ee810: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x2ee810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x2ee814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee818: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x2ee818u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ee81c: 0x0  nop
    ctx->pc = 0x2ee81cu;
    // NOP
    // 0x2ee820: 0x0  nop
    ctx->pc = 0x2ee820u;
    // NOP
    // 0x2ee824: 0x3812  mflo        $a3
    ctx->pc = 0x2ee824u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2ee828: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ee828u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee82c: 0x0  nop
    ctx->pc = 0x2ee82cu;
    // NOP
    // 0x2ee830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ee830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ee834: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2ee834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2ee838: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2ee838u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ee83c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee83cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee840: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee844: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ee844u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ee848: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x2ee848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ee84c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee850: 0x1603007f  bne         $s0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2EE850u;
    {
        const bool branch_taken_0x2ee850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE850u;
        // 0x2ee854: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee850) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE858u;
    // 0x2ee858: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x2ee858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x2ee85c: 0x2405010a  addiu       $a1, $zero, 0x10A
    ctx->pc = 0x2ee85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x2ee860: 0xc056e04  jal         func_15B810
    ctx->pc = 0x2EE860u;
    SET_GPR_U32(ctx, 31, 0x2EE868u);
    ctx->pc = 0x2EE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE860u;
    // 0x2ee864: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x2EE860u, 0x2EE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE868u;
label_2ee868:
    // 0x2ee868: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2EE868u;
    {
        const bool branch_taken_0x2ee868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee868) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE870u;
label_2ee870:
    // 0x2ee870: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ee870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ee874: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2EE874u;
    {
        const bool branch_taken_0x2ee874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE874u;
        // 0x2ee878: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee874) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE87Cu;
    // 0x2ee87c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2ee87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2ee880: 0x2484c430  addiu       $a0, $a0, -0x3BD0
    ctx->pc = 0x2ee880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951984));
    // 0x2ee884: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ee884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ee888: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2ee888u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee88c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee88cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee890: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee894: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2ee894u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ee898: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee89c: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ee89cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x2ee8a0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2EE8A0u;
    {
        const bool branch_taken_0x2ee8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8A0u;
        // 0x2ee8a4: 0xa2250821  sb          $a1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8a0) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE8A8u;
label_2ee8a8:
    // 0x2ee8a8: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x2ee8a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2ee8ac: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EE8ACu;
    {
        const bool branch_taken_0x2ee8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8ac) {
            ctx->pc = 0x2EE960u;
            goto label_2ee960;
        }
    }
    ctx->pc = 0x2EE8B4u;
    // 0x2ee8b4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2ee8b8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2ee8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2ee8bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ee8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8c0: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ee8c4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2ee8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2ee8c8: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2ee8cc: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2ee8d0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2ee8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2ee8d4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2ee8d8: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2ee8dc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2ee8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2ee8e0: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2ee8e4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2ee8e8: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2ee8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2ee8ec: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2ee8f0: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2ee8f4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ee8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ee8f8: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2ee8fc: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2ee8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2ee900: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2ee900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2ee904: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x2EE904u;
    SET_GPR_U32(ctx, 31, 0x2EE90Cu);
    ctx->pc = 0x2EE908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE904u;
    // 0x2ee908: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2EE904u, 0x2EE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE90Cu;
label_2ee90c:
    // 0x2ee90c: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x2ee90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee910: 0x3c03bf7a  lui         $v1, 0xBF7A
    ctx->pc = 0x2ee910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49018 << 16));
    // 0x2ee914: 0x3463e147  ori         $v1, $v1, 0xE147
    ctx->pc = 0x2ee914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57671);
    // 0x2ee918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ee918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee91c: 0x0  nop
    ctx->pc = 0x2ee91cu;
    // NOP
    // 0x2ee920: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ee920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ee924: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2ee924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2ee928: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x2ee928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2ee92c: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2ee92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee930: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ee930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee934: 0x0  nop
    ctx->pc = 0x2ee934u;
    // NOP
    // 0x2ee938: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ee938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ee93c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ee93cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ee940: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ee940u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ee944: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ee944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ee948: 0x0  nop
    ctx->pc = 0x2ee948u;
    // NOP
    // 0x2ee94c: 0xa62300c2  sh          $v1, 0xC2($s1)
    ctx->pc = 0x2ee94cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ee950: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x2ee950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2ee954: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ee954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ee958: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2EE958u;
    {
        const bool branch_taken_0x2ee958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE958u;
        // 0x2ee95c: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee958) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE960u;
label_2ee960:
    // 0x2ee960: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ee960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ee964: 0x2463c440  addiu       $v1, $v1, -0x3BC0
    ctx->pc = 0x2ee964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952000));
    // 0x2ee968: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2ee968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ee96c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x2ee96cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee970: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee974: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee974u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee978: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ee978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ee97c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ee97cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee984: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ee984u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ee988: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2ee988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee98c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ee98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ee990: 0x7a240890  lq          $a0, 0x890($s1)
    ctx->pc = 0x2ee990u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 2192)));
    // 0x2ee994: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x2ee994u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
    // 0x2ee998: 0x86242b22  lh          $a0, 0x2B22($s1)
    ctx->pc = 0x2ee998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11042)));
    // 0x2ee99c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE99Cu;
    {
        const bool branch_taken_0x2ee99c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE99Cu;
        // 0x2ee9a0: 0xa62400c2  sh          $a0, 0xC2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee99c) {
            ctx->pc = 0x2EE9B8u;
            goto label_2ee9b8;
        }
    }
    ctx->pc = 0x2EE9A4u;
    // 0x2ee9a4: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x2ee9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x2ee9a8: 0x2405010b  addiu       $a1, $zero, 0x10B
    ctx->pc = 0x2ee9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    // 0x2ee9ac: 0xc056e04  jal         func_15B810
    ctx->pc = 0x2EE9ACu;
    SET_GPR_U32(ctx, 31, 0x2EE9B4u);
    ctx->pc = 0x2EE9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9ACu;
    // 0x2ee9b0: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x2EE9ACu, 0x2EE9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9B4u;
label_2ee9b4:
    // 0x2ee9b4: 0x0  nop
    ctx->pc = 0x2ee9b4u;
    // NOP
label_2ee9b8:
    // 0x2ee9b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee9bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2EE9BCu;
    {
        const bool branch_taken_0x2ee9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9BCu;
        // 0x2ee9c0: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9bc) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE9C4u;
    // 0x2ee9c4: 0x0  nop
    ctx->pc = 0x2ee9c4u;
    // NOP
label_2ee9c8:
    // 0x2ee9c8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ee9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ee9cc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EE9CCu;
    {
        const bool branch_taken_0x2ee9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9CCu;
        // 0x2ee9d0: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9cc) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EE9D4u;
    // 0x2ee9d4: 0x2463c450  addiu       $v1, $v1, -0x3BB0
    ctx->pc = 0x2ee9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
    // 0x2ee9d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ee9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ee9dc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2ee9dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee9e0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE9E0u;
    {
        const bool branch_taken_0x2ee9e0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2ee9e0) {
            ctx->pc = 0x2EE9F0u;
            goto label_2ee9f0;
        }
    }
    ctx->pc = 0x2EE9E8u;
    // 0x2ee9e8: 0xa2232b20  sb          $v1, 0x2B20($s1)
    ctx->pc = 0x2ee9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11040), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee9ec: 0x0  nop
    ctx->pc = 0x2ee9ecu;
    // NOP
label_2ee9f0:
    // 0x2ee9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ee9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee9f4: 0x1604000c  bne         $s0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE9F4u;
    {
        const bool branch_taken_0x2ee9f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ee9f4) {
            ctx->pc = 0x2EEA28u;
            goto label_2eea28;
        }
    }
    ctx->pc = 0x2EE9FCu;
    // 0x2ee9fc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ee9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eea00: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2eea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2eea04: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2eea04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eea08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eea08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eea0c: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2eea0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2eea10: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2eea10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2eea14: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2eea14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eea18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2eea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eea1c: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2eea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2eea20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EEA20u;
    {
        const bool branch_taken_0x2eea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA20u;
        // 0x2eea24: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea20) {
            ctx->pc = 0x2EEA50u;
            goto label_2eea50;
        }
    }
    ctx->pc = 0x2EEA28u;
label_2eea28:
    // 0x2eea28: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2eea28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eea2c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2eea2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eea30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2eea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eea34: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2eea34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eea38: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eea38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eea3c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2eea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eea40: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2eea40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2eea44: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2eea44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x2eea48: 0xa2240780  sb          $a0, 0x780($s1)
    ctx->pc = 0x2eea48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x2eea4c: 0x0  nop
    ctx->pc = 0x2eea4cu;
    // NOP
label_2eea50:
    // 0x2eea50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eea54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2eea54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eea58: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2eea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2eea5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eea5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eea60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2eea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2eea64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2eea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2eea68: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA68u;
        // 0x2eea6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEA70u;
}
