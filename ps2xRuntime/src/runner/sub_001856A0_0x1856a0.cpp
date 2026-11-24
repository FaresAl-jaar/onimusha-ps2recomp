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

// Function: sub_001856A0
// Address: 0x1856a0 - 0x1857f4
void sub_001856A0_0x1856a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001856A0_0x1856a0");
#endif

    switch (ctx->pc) {
        case 0x1856c8u: goto label_1856c8;
        case 0x185750u: goto label_185750;
        case 0x1857a4u: goto label_1857a4;
        default: break;
    }

    ctx->pc = 0x1856a0u;

    // 0x1856a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1856a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1856a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1856a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1856a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1856a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1856ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1856acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1856b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1856b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1856b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1856b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1856b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1856bc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1856BCu;
    {
        const bool branch_taken_0x1856bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856BCu;
        // 0x1856c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856bc) {
            ctx->pc = 0x1857C8u;
            goto label_1857c8;
        }
    }
    ctx->pc = 0x1856C4u;
    // 0x1856c4: 0x0  nop
    ctx->pc = 0x1856c4u;
    // NOP
label_1856c8:
    // 0x1856c8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1856c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1856cc: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1856ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1856d0: 0x8e6301e0  lw          $v1, 0x1E0($s3)
    ctx->pc = 0x1856d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 480)));
    // 0x1856d4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1856d8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1856d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1856dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1856dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1856e0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1856e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1856e4: 0x8e4511d4  lw          $a1, 0x11D4($s2)
    ctx->pc = 0x1856e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
    // 0x1856e8: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x1856e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x1856ec: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1856ECu;
    {
        const bool branch_taken_0x1856ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856ec) {
            ctx->pc = 0x1857C0u;
            goto label_1857c0;
        }
    }
    ctx->pc = 0x1856F4u;
    // 0x1856f4: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x1856f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1856f8: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1856f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1856fc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1856fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x185700: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x185700u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x185704: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x185704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x185708: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x185708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18570c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x18570cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185710: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x185710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x185714: 0x278380b0  addiu       $v1, $gp, -0x7F50
    ctx->pc = 0x185714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934704));
    // 0x185718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x185718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18571c: 0x926401fa  lbu         $a0, 0x1FA($s3)
    ctx->pc = 0x18571cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 506)));
    // 0x185720: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x185720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185724: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x185724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x185728: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x185728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18572c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x18572cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185730: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x185730u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x185734: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x185734u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x185738: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x185738u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x18573c: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x18573cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x185740: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x185740u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x185744: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x185744u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x185748: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x185748u;
    {
        const bool branch_taken_0x185748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185748u;
        // 0x18574c: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185748) {
            ctx->pc = 0x1857B0u;
            goto label_1857b0;
        }
    }
    ctx->pc = 0x185750u;
label_185750:
    // 0x185750: 0x8e4411c0  lw          $a0, 0x11C0($s2)
    ctx->pc = 0x185750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x185754: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x185754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x185758: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x185758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18575c: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x18575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x185760: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x185760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x185764: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x185764u;
    {
        const bool branch_taken_0x185764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185764) {
            ctx->pc = 0x1857A8u;
            goto label_1857a8;
        }
    }
    ctx->pc = 0x18576Cu;
    // 0x18576c: 0x8e4311d4  lw          $v1, 0x11D4($s2)
    ctx->pc = 0x18576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
    // 0x185770: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x185770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x185774: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x185774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x185778: 0x8e6501e4  lw          $a1, 0x1E4($s3)
    ctx->pc = 0x185778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 484)));
    // 0x18577c: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x18577cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x185780: 0x278280b0  addiu       $v0, $gp, -0x7F50
    ctx->pc = 0x185780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934704));
    // 0x185784: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x185784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x185788: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x185788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x18578c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x18578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x185790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x185790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x185794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x185794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185798: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18579c: 0xc0614c0  jal         func_185300
    ctx->pc = 0x18579Cu;
    SET_GPR_U32(ctx, 31, 0x1857A4u);
    ctx->pc = 0x1857A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18579Cu;
    // 0x1857a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185300u, 0x18579Cu, 0x1857A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857A4u;
label_1857a4:
    // 0x1857a4: 0x0  nop
    ctx->pc = 0x1857a4u;
    // NOP
label_1857a8:
    // 0x1857a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1857a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1857ac: 0x0  nop
    ctx->pc = 0x1857acu;
    // NOP
label_1857b0:
    // 0x1857b0: 0x926301f9  lbu         $v1, 0x1F9($s3)
    ctx->pc = 0x1857b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 505)));
    // 0x1857b4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1857b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1857b8: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1857B8u;
    {
        const bool branch_taken_0x1857b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1857b8) {
            ctx->pc = 0x185750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185750;
        }
    }
    ctx->pc = 0x1857C0u;
label_1857c0:
    // 0x1857c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1857c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1857c4: 0x0  nop
    ctx->pc = 0x1857c4u;
    // NOP
label_1857c8:
    // 0x1857c8: 0x926301f8  lbu         $v1, 0x1F8($s3)
    ctx->pc = 0x1857c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 504)));
    // 0x1857cc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1857ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1857d0: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1857D0u;
    {
        const bool branch_taken_0x1857d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1857d0) {
            ctx->pc = 0x1856C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1856c8;
        }
    }
    ctx->pc = 0x1857D8u;
    // 0x1857d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1857d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1857dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1857dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1857e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1857e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1857e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1857e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1857e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1857e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1857ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1857ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1857F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857ECu;
        // 0x1857f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1857ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1857F4u;
}
