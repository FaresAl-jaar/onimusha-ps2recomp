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

// Function: sub_0032E550
// Address: 0x32e550 - 0x32e668
void sub_0032E550_0x32e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E550_0x32e550");
#endif

    switch (ctx->pc) {
        case 0x32e570u: goto label_32e570;
        default: break;
    }

    ctx->pc = 0x32e550u;

    // 0x32e550: 0x248a007a  addiu       $t2, $a0, 0x7A
    ctx->pc = 0x32e550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 122));
    // 0x32e554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32e554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32e558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e55c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32e55cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32e560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e564: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32e564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32e568: 0x278382e8  addiu       $v1, $gp, -0x7D18
    ctx->pc = 0x32e568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935272));
    // 0x32e56c: 0x0  nop
    ctx->pc = 0x32e56cu;
    // NOP
label_32e570:
    // 0x32e570: 0xa4e5007c  sh          $a1, 0x7C($a3)
    ctx->pc = 0x32e570u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 124), (uint16_t)GPR_U32(ctx, 5));
    // 0x32e574: 0xa4e5007a  sh          $a1, 0x7A($a3)
    ctx->pc = 0x32e574u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 122), (uint16_t)GPR_U32(ctx, 5));
    // 0x32e578: 0x808b000a  lb          $t3, 0xA($a0)
    ctx->pc = 0x32e578u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32e57c: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x32e57cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x32e580: 0x6b6021  addu        $t4, $v1, $t3
    ctx->pc = 0x32e580u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x32e584: 0x918b0001  lbu         $t3, 0x1($t4)
    ctx->pc = 0x32e584u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x32e588: 0x10b082a  slt         $at, $t0, $t3
    ctx->pc = 0x32e588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x32e58c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x32E58Cu;
    {
        const bool branch_taken_0x32e58c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e58c) {
            ctx->pc = 0x32E610u;
            goto label_32e610;
        }
    }
    ctx->pc = 0x32E594u;
    // 0x32e594: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x32e594u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x32e598: 0x908c0004  lbu         $t4, 0x4($a0)
    ctx->pc = 0x32e598u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32e59c: 0xc58c0  sll         $t3, $t4, 3
    ctx->pc = 0x32e59cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x32e5a0: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x32e5a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x32e5a4: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x32e5a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x32e5a8: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x32e5a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x32e5ac: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x32e5acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x32e5b0: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x32e5b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x32e5b4: 0x816b0021  lb          $t3, 0x21($t3)
    ctx->pc = 0x32e5b4u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 33)));
    // 0x32e5b8: 0x296bffff  slti        $t3, $t3, -0x1
    ctx->pc = 0x32e5b8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x32e5bc: 0x15600014  bnez        $t3, . + 4 + (0x14 << 2)
    ctx->pc = 0x32E5BCu;
    {
        const bool branch_taken_0x32e5bc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5BCu;
        // 0x32e5c0: 0x10d5821  addu        $t3, $t0, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e5bc) {
            ctx->pc = 0x32E610u;
            goto label_32e610;
        }
    }
    ctx->pc = 0x32E5C4u;
    // 0x32e5c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x32e5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x32e5c8: 0xa54b0000  sh          $t3, 0x0($t2)
    ctx->pc = 0x32e5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x32e5cc: 0x94e3c  dsll32      $t1, $t1, 24
    ctx->pc = 0x32e5ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 24));
    // 0x32e5d0: 0x808b000a  lb          $t3, 0xA($a0)
    ctx->pc = 0x32e5d0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32e5d4: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x32e5d4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x32e5d8: 0x908c0004  lbu         $t4, 0x4($a0)
    ctx->pc = 0x32e5d8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32e5dc: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x32e5dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x32e5e0: 0x6b6821  addu        $t5, $v1, $t3
    ctx->pc = 0x32e5e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x32e5e4: 0xc58c0  sll         $t3, $t4, 3
    ctx->pc = 0x32e5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x32e5e8: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x32e5e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x32e5ec: 0x91ac0000  lbu         $t4, 0x0($t5)
    ctx->pc = 0x32e5ecu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x32e5f0: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x32e5f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x32e5f4: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x32e5f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x32e5f8: 0x258c0028  addiu       $t4, $t4, 0x28
    ctx->pc = 0x32e5f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
    // 0x32e5fc: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x32e5fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x32e600: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x32e600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x32e604: 0xa54b0002  sh          $t3, 0x2($t2)
    ctx->pc = 0x32e604u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x32e608: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x32e608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x32e60c: 0x0  nop
    ctx->pc = 0x32e60cu;
    // NOP
label_32e610:
    // 0x32e610: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32e610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32e614: 0x290b000b  slti        $t3, $t0, 0xB
    ctx->pc = 0x32e614u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x32e618: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x32e618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x32e61c: 0x1560ffd4  bnez        $t3, . + 4 + (-0x2C << 2)
    ctx->pc = 0x32E61Cu;
    {
        const bool branch_taken_0x32e61c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E61Cu;
        // 0x32e620: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e61c) {
            ctx->pc = 0x32E570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e570;
        }
    }
    ctx->pc = 0x32E624u;
    // 0x32e624: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E624u;
    {
        const bool branch_taken_0x32e624 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E624u;
        // 0x32e628: 0xa080000c  sb          $zero, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e624) {
            ctx->pc = 0x32E640u;
            goto label_32e640;
        }
    }
    ctx->pc = 0x32E62Cu;
    // 0x32e62c: 0x91e3c  dsll32      $v1, $t1, 24
    ctx->pc = 0x32e62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 24));
    // 0x32e630: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32e630u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32e634: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32e638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E638u;
    {
        const bool branch_taken_0x32e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E638u;
        // 0x32e63c: 0xa083000d  sb          $v1, 0xD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e638) {
            ctx->pc = 0x32E648u;
            goto label_32e648;
        }
    }
    ctx->pc = 0x32E640u;
label_32e640:
    // 0x32e640: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x32e640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x32e644: 0x0  nop
    ctx->pc = 0x32e644u;
    // NOP
label_32e648:
    // 0x32e648: 0x8085000d  lb          $a1, 0xD($a0)
    ctx->pc = 0x32e648u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x32e64c: 0x8083000b  lb          $v1, 0xB($a0)
    ctx->pc = 0x32e64cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x32e650: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x32e650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32e654: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x32E654u;
    {
        const bool branch_taken_0x32e654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e654) {
            ctx->pc = 0x32E660u;
            goto label_32e660;
        }
    }
    ctx->pc = 0x32E65Cu;
    // 0x32e65c: 0xa085000b  sb          $a1, 0xB($a0)
    ctx->pc = 0x32e65cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
label_32e660:
    // 0x32e660: 0x3e00008  jr          $ra
    ctx->pc = 0x32E660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E668u;
}
