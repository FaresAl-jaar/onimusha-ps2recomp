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

// Function: sub_0022B9F8
// Address: 0x22b9f8 - 0x22bb6c
void sub_0022B9F8_0x22b9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B9F8_0x22b9f8");
#endif

    switch (ctx->pc) {
        case 0x22ba1cu: goto label_22ba1c;
        case 0x22ba68u: goto label_22ba68;
        case 0x22ba98u: goto label_22ba98;
        case 0x22bac8u: goto label_22bac8;
        case 0x22baf8u: goto label_22baf8;
        case 0x22bb28u: goto label_22bb28;
        default: break;
    }

    ctx->pc = 0x22b9f8u;

    // 0x22b9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ba00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22ba00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22ba08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ba08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22ba10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22ba14: 0xc08ad30  jal         func_22B4C0
    ctx->pc = 0x22BA14u;
    SET_GPR_U32(ctx, 31, 0x22BA1Cu);
    ctx->pc = 0x22BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA14u;
    // 0x22ba18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B4C0u, 0x22BA14u, 0x22BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA1Cu;
label_22ba1c:
    // 0x22ba1c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x22ba1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ba20: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x22ba20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22ba24: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x22ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22ba28: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x22ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x22ba2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ba30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22ba34: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22BA34u;
    {
        const bool branch_taken_0x22ba34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA34u;
        // 0x22ba38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba34) {
            ctx->pc = 0x22BA60u;
            goto label_22ba60;
        }
    }
    ctx->pc = 0x22BA3Cu;
    // 0x22ba3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ba40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ba44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ba44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ba48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ba4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ba50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22ba54: 0x808ad98  j           func_22B660
    ctx->pc = 0x22BA54u;
    ctx->pc = 0x22BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA54u;
    // 0x22ba58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B660u;
    sub_0022B660_0x22b660(rdram, ctx, runtime); return;
    ctx->pc = 0x22BA5Cu;
    // 0x22ba5c: 0x0  nop
    ctx->pc = 0x22ba5cu;
    // NOP
label_22ba60:
    // 0x22ba60: 0xc08b2de  jal         func_22CB78
    ctx->pc = 0x22BA60u;
    SET_GPR_U32(ctx, 31, 0x22BA68u);
    ctx->pc = 0x22BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA60u;
    // 0x22ba64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB78u, 0x22BA60u, 0x22BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA68u;
label_22ba68:
    // 0x22ba68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BA68u;
    {
        const bool branch_taken_0x22ba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA68u;
        // 0x22ba6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba68) {
            ctx->pc = 0x22BA90u;
            goto label_22ba90;
        }
    }
    ctx->pc = 0x22BA70u;
    // 0x22ba70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22ba74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ba78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ba78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ba7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ba7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22ba80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ba84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22ba84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22ba88: 0x808b242  j           func_22C908
    ctx->pc = 0x22BA88u;
    ctx->pc = 0x22BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA88u;
    // 0x22ba8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C908u;
    sub_0022C908_0x22c908(rdram, ctx, runtime); return;
    ctx->pc = 0x22BA90u;
label_22ba90:
    // 0x22ba90: 0xc08b4e0  jal         func_22D380
    ctx->pc = 0x22BA90u;
    SET_GPR_U32(ctx, 31, 0x22BA98u);
    ctx->pc = 0x22BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA90u;
    // 0x22ba94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D380u, 0x22BA90u, 0x22BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA98u;
label_22ba98:
    // 0x22ba98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BA98u;
    {
        const bool branch_taken_0x22ba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA98u;
        // 0x22ba9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba98) {
            ctx->pc = 0x22BAC0u;
            goto label_22bac0;
        }
    }
    ctx->pc = 0x22BAA0u;
    // 0x22baa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22baa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22baa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22baa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22baa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22baac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bab0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22bab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bab4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22bab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bab8: 0x808b374  j           func_22CDD0
    ctx->pc = 0x22BAB8u;
    ctx->pc = 0x22BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAB8u;
    // 0x22babc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CDD0u;
    sub_0022CDD0_0x22cdd0(rdram, ctx, runtime); return;
    ctx->pc = 0x22BAC0u;
label_22bac0:
    // 0x22bac0: 0xc08a822  jal         func_22A088
    ctx->pc = 0x22BAC0u;
    SET_GPR_U32(ctx, 31, 0x22BAC8u);
    ctx->pc = 0x22BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAC0u;
    // 0x22bac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A088u, 0x22BAC0u, 0x22BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAC8u;
label_22bac8:
    // 0x22bac8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BAC8u;
    {
        const bool branch_taken_0x22bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAC8u;
        // 0x22bacc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bac8) {
            ctx->pc = 0x22BAF0u;
            goto label_22baf0;
        }
    }
    ctx->pc = 0x22BAD0u;
    // 0x22bad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22bad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22badc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22badcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bae0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22bae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bae4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22bae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bae8: 0x808a880  j           func_22A200
    ctx->pc = 0x22BAE8u;
    ctx->pc = 0x22BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAE8u;
    // 0x22baec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A200u;
    sub_0022A200_0x22a200(rdram, ctx, runtime); return;
    ctx->pc = 0x22BAF0u;
label_22baf0:
    // 0x22baf0: 0xc08aa64  jal         func_22A990
    ctx->pc = 0x22BAF0u;
    SET_GPR_U32(ctx, 31, 0x22BAF8u);
    ctx->pc = 0x22BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAF0u;
    // 0x22baf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A990u, 0x22BAF0u, 0x22BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAF8u;
label_22baf8:
    // 0x22baf8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BAF8u;
    {
        const bool branch_taken_0x22baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAF8u;
        // 0x22bafc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22baf8) {
            ctx->pc = 0x22BB20u;
            goto label_22bb20;
        }
    }
    ctx->pc = 0x22BB00u;
    // 0x22bb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22bb04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bb0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22bb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22bb10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bb14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bb18: 0x808aabe  j           func_22AAF8
    ctx->pc = 0x22BB18u;
    ctx->pc = 0x22BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB18u;
    // 0x22bb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AAF8u;
    sub_0022AAF8_0x22aaf8(rdram, ctx, runtime); return;
    ctx->pc = 0x22BB20u;
label_22bb20:
    // 0x22bb20: 0xc08a6e0  jal         func_229B80
    ctx->pc = 0x22BB20u;
    SET_GPR_U32(ctx, 31, 0x22BB28u);
    ctx->pc = 0x22BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB20u;
    // 0x22bb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229B80u, 0x22BB20u, 0x22BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB28u;
label_22bb28:
    // 0x22bb28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BB28u;
    {
        const bool branch_taken_0x22bb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB28u;
        // 0x22bb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb28) {
            ctx->pc = 0x22BB50u;
            goto label_22bb50;
        }
    }
    ctx->pc = 0x22BB30u;
    // 0x22bb30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22bb30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bb34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bb3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22bb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22bb40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bb44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bb48: 0x808a6b4  j           func_229AD0
    ctx->pc = 0x22BB48u;
    ctx->pc = 0x22BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB48u;
    // 0x22bb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229AD0u;
    sub_00229AD0_0x229ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x22BB50u;
label_22bb50:
    // 0x22bb50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bb54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22bb58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22bb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bb5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22bb5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bb60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22bb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x22BB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB64u;
        // 0x22bb68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BB6Cu;
}
