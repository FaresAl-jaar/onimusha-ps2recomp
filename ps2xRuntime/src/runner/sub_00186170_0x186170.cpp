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

// Function: sub_00186170
// Address: 0x186170 - 0x186308
void sub_00186170_0x186170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186170_0x186170");
#endif

    switch (ctx->pc) {
        case 0x1861a0u: goto label_1861a0;
        case 0x186228u: goto label_186228;
        case 0x186280u: goto label_186280;
        default: break;
    }

    ctx->pc = 0x186170u;

    // 0x186170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x186170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x186174: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x186174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x186178: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x186178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18617c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x186180: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x186180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x186188: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x186188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18618c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186194: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x186194u;
    {
        const bool branch_taken_0x186194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186194u;
        // 0x186198: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186194) {
            ctx->pc = 0x1862A0u;
            goto label_1862a0;
        }
    }
    ctx->pc = 0x18619Cu;
    // 0x18619c: 0x0  nop
    ctx->pc = 0x18619cu;
    // NOP
label_1861a0:
    // 0x1861a0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1861a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1861a4: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1861a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1861a8: 0x8e8301e0  lw          $v1, 0x1E0($s4)
    ctx->pc = 0x1861a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
    // 0x1861ac: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1861acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1861b0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1861b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1861b4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1861b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1861b8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1861b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1861bc: 0x8e4511d4  lw          $a1, 0x11D4($s2)
    ctx->pc = 0x1861bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
    // 0x1861c0: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x1861c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x1861c4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1861C4u;
    {
        const bool branch_taken_0x1861c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861c4) {
            ctx->pc = 0x186298u;
            goto label_186298;
        }
    }
    ctx->pc = 0x1861CCu;
    // 0x1861cc: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x1861ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1861d0: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x1861d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1861d4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1861d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1861d8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1861d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1861dc: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x1861dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1861e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1861e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1861e4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1861e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1861e8: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x1861e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1861ec: 0x278380b0  addiu       $v1, $gp, -0x7F50
    ctx->pc = 0x1861ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934704));
    // 0x1861f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1861f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1861f4: 0x928401fa  lbu         $a0, 0x1FA($s4)
    ctx->pc = 0x1861f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 506)));
    // 0x1861f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1861f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1861fc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1861fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x186200: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x186200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186204: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x186204u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186208: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x186208u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x18620c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x18620cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x186210: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x186210u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x186214: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x186214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x186218: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x186218u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x18621c: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x18621cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x186220: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x186220u;
    {
        const bool branch_taken_0x186220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186220u;
        // 0x186224: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186220) {
            ctx->pc = 0x186288u;
            goto label_186288;
        }
    }
    ctx->pc = 0x186228u;
label_186228:
    // 0x186228: 0x8e4411c0  lw          $a0, 0x11C0($s2)
    ctx->pc = 0x186228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
    // 0x18622c: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x18622cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x186230: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x186230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186234: 0x8cc300e0  lw          $v1, 0xE0($a2)
    ctx->pc = 0x186234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x186238: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x186238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18623c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18623Cu;
    {
        const bool branch_taken_0x18623c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18623c) {
            ctx->pc = 0x186280u;
            goto label_186280;
        }
    }
    ctx->pc = 0x186244u;
    // 0x186244: 0x8e4311d4  lw          $v1, 0x11D4($s2)
    ctx->pc = 0x186244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4564)));
    // 0x186248: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x186248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18624c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x186250: 0x8e8501e4  lw          $a1, 0x1E4($s4)
    ctx->pc = 0x186250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
    // 0x186254: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x186254u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x186258: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x186258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18625c: 0x278280b0  addiu       $v0, $gp, -0x7F50
    ctx->pc = 0x18625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934704));
    // 0x186260: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x186260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x186264: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x186264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x186268: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x186268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18626c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18626cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x186270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186274: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x186274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186278: 0xc061704  jal         func_185C10
    ctx->pc = 0x186278u;
    SET_GPR_U32(ctx, 31, 0x186280u);
    ctx->pc = 0x18627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186278u;
    // 0x18627c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185C10u, 0x186278u, 0x186280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186280u;
label_186280:
    // 0x186280: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186284: 0x0  nop
    ctx->pc = 0x186284u;
    // NOP
label_186288:
    // 0x186288: 0x928301f9  lbu         $v1, 0x1F9($s4)
    ctx->pc = 0x186288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 505)));
    // 0x18628c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x18628cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x186290: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x186290u;
    {
        const bool branch_taken_0x186290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186290) {
            ctx->pc = 0x186228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186228;
        }
    }
    ctx->pc = 0x186298u;
label_186298:
    // 0x186298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18629c: 0x0  nop
    ctx->pc = 0x18629cu;
    // NOP
label_1862a0:
    // 0x1862a0: 0x928301f8  lbu         $v1, 0x1F8($s4)
    ctx->pc = 0x1862a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 504)));
    // 0x1862a4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1862a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1862a8: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1862A8u;
    {
        const bool branch_taken_0x1862a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1862a8) {
            ctx->pc = 0x1861A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1861a0;
        }
    }
    ctx->pc = 0x1862B0u;
    // 0x1862b0: 0x928401fa  lbu         $a0, 0x1FA($s4)
    ctx->pc = 0x1862b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 506)));
    // 0x1862b4: 0x268500d0  addiu       $a1, $s4, 0xD0
    ctx->pc = 0x1862b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x1862b8: 0x8f8380b0  lw          $v1, -0x7F50($gp)
    ctx->pc = 0x1862b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x1862bc: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1862bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1862c0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1862c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1862c4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1862c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1862c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1862c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1862cc: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1862ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1862d0: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x1862d0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1862d4: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x1862d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x1862d8: 0x78a60020  lq          $a2, 0x20($a1)
    ctx->pc = 0x1862d8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1862dc: 0x7c660020  sq          $a2, 0x20($v1)
    ctx->pc = 0x1862dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    // 0x1862e0: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x1862e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1862e4: 0x7c660030  sq          $a2, 0x30($v1)
    ctx->pc = 0x1862e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 6));
    // 0x1862e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1862e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1862ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1862ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1862f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1862f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1862f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1862f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1862f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1862f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1862fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1862fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186300: 0x3e00008  jr          $ra
    ctx->pc = 0x186300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186300u;
        // 0x186304: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186308u;
}
