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

// Function: sub_0014A8F0
// Address: 0x14a8f0 - 0x14aa8c
void sub_0014A8F0_0x14a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A8F0_0x14a8f0");
#endif

    switch (ctx->pc) {
        case 0x14a964u: goto label_14a964;
        case 0x14a9a4u: goto label_14a9a4;
        case 0x14a9b4u: goto label_14a9b4;
        case 0x14a9d0u: goto label_14a9d0;
        case 0x14a9f8u: goto label_14a9f8;
        default: break;
    }

    ctx->pc = 0x14a8f0u;

    // 0x14a8f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x14a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x14a8f4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14a8f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14a8fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a900: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a904: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a908: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14a908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a90c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14a90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a914: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x14a914u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14a918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a91c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a920: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a924: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a928: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a92c: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14a92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14a930: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14a934: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14A934u;
    {
        const bool branch_taken_0x14a934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A934u;
        // 0x14a938: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a934) {
            ctx->pc = 0x14A9E8u;
            goto label_14a9e8;
        }
    }
    ctx->pc = 0x14A93Cu;
    // 0x14a93c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a940: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A940u;
    {
        const bool branch_taken_0x14a940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14a940) {
            ctx->pc = 0x14A998u;
            goto label_14a998;
        }
    }
    ctx->pc = 0x14A948u;
    // 0x14a948: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A948u;
    {
        const bool branch_taken_0x14a948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a948) {
            ctx->pc = 0x14A958u;
            goto label_14a958;
        }
    }
    ctx->pc = 0x14A950u;
    // 0x14a950: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14A950u;
    {
        const bool branch_taken_0x14a950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a950) {
            ctx->pc = 0x14AA68u;
            goto label_14aa68;
        }
    }
    ctx->pc = 0x14A958u;
label_14a958:
    // 0x14a958: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a95c: 0xc048566  jal         func_121598
    ctx->pc = 0x14A95Cu;
    SET_GPR_U32(ctx, 31, 0x14A964u);
    ctx->pc = 0x14A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A95Cu;
    // 0x14a960: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A95Cu, 0x14A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A964u;
label_14a964:
    // 0x14a964: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A964u;
    {
        const bool branch_taken_0x14a964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a964) {
            ctx->pc = 0x14A978u;
            goto label_14a978;
        }
    }
    ctx->pc = 0x14A96Cu;
    // 0x14a96c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x14A96Cu;
    {
        const bool branch_taken_0x14a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A96Cu;
        // 0x14a970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a96c) {
            ctx->pc = 0x14AA70u;
            goto label_14aa70;
        }
    }
    ctx->pc = 0x14A974u;
    // 0x14a974: 0x0  nop
    ctx->pc = 0x14a974u;
    // NOP
label_14a978:
    // 0x14a978: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a97c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a980: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a988: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14a988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14a98c: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x14a98cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a990: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x14a990u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a994: 0x0  nop
    ctx->pc = 0x14a994u;
    // NOP
label_14a998:
    // 0x14a998: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14a99c: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x14A99Cu;
    SET_GPR_U32(ctx, 31, 0x14A9A4u);
    ctx->pc = 0x14A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A99Cu;
    // 0x14a9a0: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x14A99Cu, 0x14A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9A4u;
label_14a9a4:
    // 0x14a9a4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x14a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x14a9a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14a9ac: 0xc049dd0  jal         func_127740
    ctx->pc = 0x14A9ACu;
    SET_GPR_U32(ctx, 31, 0x14A9B4u);
    ctx->pc = 0x14A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9ACu;
    // 0x14a9b0: 0x24a549e8  addiu       $a1, $a1, 0x49E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x14A9ACu, 0x14A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9B4u;
label_14a9b4:
    // 0x14a9b4: 0x8e090058  lw          $t1, 0x58($s0)
    ctx->pc = 0x14a9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14a9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9c0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14a9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14a9c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14a9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9c8: 0xc04862a  jal         func_1218A8
    ctx->pc = 0x14A9C8u;
    SET_GPR_U32(ctx, 31, 0x14A9D0u);
    ctx->pc = 0x14A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9C8u;
    // 0x14a9cc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1218A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1218A8u, 0x14A9C8u, 0x14A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9D0u;
label_14a9d0:
    // 0x14a9d0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14A9D0u;
    {
        const bool branch_taken_0x14a9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a9d0) {
            ctx->pc = 0x14AA68u;
            goto label_14aa68;
        }
    }
    ctx->pc = 0x14A9D8u;
    // 0x14a9d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a9dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a9e0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14A9E0u;
    {
        const bool branch_taken_0x14a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9E0u;
        // 0x14a9e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9e0) {
            ctx->pc = 0x14AA68u;
            goto label_14aa68;
        }
    }
    ctx->pc = 0x14A9E8u;
label_14a9e8:
    // 0x14a9e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a9ec: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a9f0: 0xc048566  jal         func_121598
    ctx->pc = 0x14A9F0u;
    SET_GPR_U32(ctx, 31, 0x14A9F8u);
    ctx->pc = 0x14A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9F0u;
    // 0x14a9f4: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A9F0u, 0x14A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9F8u;
label_14a9f8:
    // 0x14a9f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a9fc: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A9FCu;
    {
        const bool branch_taken_0x14a9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a9fc) {
            ctx->pc = 0x14AA68u;
            goto label_14aa68;
        }
    }
    ctx->pc = 0x14AA04u;
    // 0x14aa04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x14aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14aa08: 0x2842fffa  slti        $v0, $v0, -0x6
    ctx->pc = 0x14aa08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967290) ? 1 : 0);
    // 0x14aa0c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14AA0Cu;
    {
        const bool branch_taken_0x14aa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aa0c) {
            ctx->pc = 0x14AA30u;
            goto label_14aa30;
        }
    }
    ctx->pc = 0x14AA14u;
    // 0x14aa14: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14aa18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14aa18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14aa20: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x14aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x14aa24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14AA24u;
    {
        const bool branch_taken_0x14aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA24u;
        // 0x14aa28: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa24) {
            ctx->pc = 0x14AA70u;
            goto label_14aa70;
        }
    }
    ctx->pc = 0x14AA2Cu;
    // 0x14aa2c: 0x0  nop
    ctx->pc = 0x14aa2cu;
    // NOP
label_14aa30:
    // 0x14aa30: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14aa30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14aa34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14AA34u;
    {
        const bool branch_taken_0x14aa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa34) {
            ctx->pc = 0x14AA50u;
            goto label_14aa50;
        }
    }
    ctx->pc = 0x14AA3Cu;
    // 0x14aa3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x14aa40: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14aa40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14aa44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14aa48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14AA48u;
    {
        const bool branch_taken_0x14aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa48) {
            ctx->pc = 0x14AA60u;
            goto label_14aa60;
        }
    }
    ctx->pc = 0x14AA50u;
label_14aa50:
    // 0x14aa50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14aa54: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x14aa54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14aa58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14AA58u;
    {
        const bool branch_taken_0x14aa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA58u;
        // 0x14aa5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa58) {
            ctx->pc = 0x14AA70u;
            goto label_14aa70;
        }
    }
    ctx->pc = 0x14AA60u;
label_14aa60:
    // 0x14aa60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14aa64: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x14aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_14aa68:
    // 0x14aa68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aa6c: 0x0  nop
    ctx->pc = 0x14aa6cu;
    // NOP
label_14aa70:
    // 0x14aa70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14aa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14aa74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14aa74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14aa78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14aa78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14aa7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14aa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aa80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14aa80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aa84: 0x3e00008  jr          $ra
    ctx->pc = 0x14AA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA84u;
        // 0x14aa88: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AA8Cu;
}
