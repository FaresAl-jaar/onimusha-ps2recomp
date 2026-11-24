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

// Function: sub_0038B930
// Address: 0x38b930 - 0x38bac4
void sub_0038B930_0x38b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038B930_0x38b930");
#endif

    switch (ctx->pc) {
        case 0x38b930u: goto label_38b930;
        case 0x38b934u: goto label_38b934;
        case 0x38b938u: goto label_38b938;
        case 0x38b93cu: goto label_38b93c;
        case 0x38b940u: goto label_38b940;
        case 0x38b944u: goto label_38b944;
        case 0x38b948u: goto label_38b948;
        case 0x38b94cu: goto label_38b94c;
        case 0x38b950u: goto label_38b950;
        case 0x38b954u: goto label_38b954;
        case 0x38b958u: goto label_38b958;
        case 0x38b95cu: goto label_38b95c;
        case 0x38b960u: goto label_38b960;
        case 0x38b964u: goto label_38b964;
        case 0x38b968u: goto label_38b968;
        case 0x38b96cu: goto label_38b96c;
        case 0x38b970u: goto label_38b970;
        case 0x38b974u: goto label_38b974;
        case 0x38b978u: goto label_38b978;
        case 0x38b97cu: goto label_38b97c;
        case 0x38b980u: goto label_38b980;
        case 0x38b984u: goto label_38b984;
        case 0x38b988u: goto label_38b988;
        case 0x38b98cu: goto label_38b98c;
        case 0x38b990u: goto label_38b990;
        case 0x38b994u: goto label_38b994;
        case 0x38b998u: goto label_38b998;
        case 0x38b99cu: goto label_38b99c;
        case 0x38b9a0u: goto label_38b9a0;
        case 0x38b9a4u: goto label_38b9a4;
        case 0x38b9a8u: goto label_38b9a8;
        case 0x38b9acu: goto label_38b9ac;
        case 0x38b9b0u: goto label_38b9b0;
        case 0x38b9b4u: goto label_38b9b4;
        case 0x38b9b8u: goto label_38b9b8;
        case 0x38b9bcu: goto label_38b9bc;
        case 0x38b9c0u: goto label_38b9c0;
        case 0x38b9c4u: goto label_38b9c4;
        case 0x38b9c8u: goto label_38b9c8;
        case 0x38b9ccu: goto label_38b9cc;
        case 0x38b9d0u: goto label_38b9d0;
        case 0x38b9d4u: goto label_38b9d4;
        case 0x38b9d8u: goto label_38b9d8;
        case 0x38b9dcu: goto label_38b9dc;
        case 0x38b9e0u: goto label_38b9e0;
        case 0x38b9e4u: goto label_38b9e4;
        case 0x38b9e8u: goto label_38b9e8;
        case 0x38b9ecu: goto label_38b9ec;
        case 0x38b9f0u: goto label_38b9f0;
        case 0x38b9f4u: goto label_38b9f4;
        case 0x38b9f8u: goto label_38b9f8;
        case 0x38b9fcu: goto label_38b9fc;
        case 0x38ba00u: goto label_38ba00;
        case 0x38ba04u: goto label_38ba04;
        case 0x38ba08u: goto label_38ba08;
        case 0x38ba0cu: goto label_38ba0c;
        case 0x38ba10u: goto label_38ba10;
        case 0x38ba14u: goto label_38ba14;
        case 0x38ba18u: goto label_38ba18;
        case 0x38ba1cu: goto label_38ba1c;
        case 0x38ba20u: goto label_38ba20;
        case 0x38ba24u: goto label_38ba24;
        case 0x38ba28u: goto label_38ba28;
        case 0x38ba2cu: goto label_38ba2c;
        case 0x38ba30u: goto label_38ba30;
        case 0x38ba34u: goto label_38ba34;
        case 0x38ba38u: goto label_38ba38;
        case 0x38ba3cu: goto label_38ba3c;
        case 0x38ba40u: goto label_38ba40;
        case 0x38ba44u: goto label_38ba44;
        case 0x38ba48u: goto label_38ba48;
        case 0x38ba4cu: goto label_38ba4c;
        case 0x38ba50u: goto label_38ba50;
        case 0x38ba54u: goto label_38ba54;
        case 0x38ba58u: goto label_38ba58;
        case 0x38ba5cu: goto label_38ba5c;
        case 0x38ba60u: goto label_38ba60;
        case 0x38ba64u: goto label_38ba64;
        case 0x38ba68u: goto label_38ba68;
        case 0x38ba6cu: goto label_38ba6c;
        case 0x38ba70u: goto label_38ba70;
        case 0x38ba74u: goto label_38ba74;
        case 0x38ba78u: goto label_38ba78;
        case 0x38ba7cu: goto label_38ba7c;
        case 0x38ba80u: goto label_38ba80;
        case 0x38ba84u: goto label_38ba84;
        case 0x38ba88u: goto label_38ba88;
        case 0x38ba8cu: goto label_38ba8c;
        case 0x38ba90u: goto label_38ba90;
        case 0x38ba94u: goto label_38ba94;
        case 0x38ba98u: goto label_38ba98;
        case 0x38ba9cu: goto label_38ba9c;
        case 0x38baa0u: goto label_38baa0;
        case 0x38baa4u: goto label_38baa4;
        case 0x38baa8u: goto label_38baa8;
        case 0x38baacu: goto label_38baac;
        case 0x38bab0u: goto label_38bab0;
        case 0x38bab4u: goto label_38bab4;
        case 0x38bab8u: goto label_38bab8;
        case 0x38babcu: goto label_38babc;
        case 0x38bac0u: goto label_38bac0;
        default: break;
    }

    ctx->pc = 0x38b930u;

label_38b930:
    // 0x38b930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38b934:
    // 0x38b934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38b938:
    // 0x38b938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38b93c:
    // 0x38b93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38b93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38b940:
    // 0x38b940: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38b940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38b944:
    // 0x38b944: 0x92030119  lbu         $v1, 0x119($s0)
    ctx->pc = 0x38b944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38b948:
    // 0x38b948: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
label_38b94c:
    if (ctx->pc == 0x38B94Cu) {
        ctx->pc = 0x38B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B948u;
        // 0x38b94c: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B950u;
        goto label_38b950;
    }
    ctx->pc = 0x38B948u;
    {
        const bool branch_taken_0x38b948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B948u;
        // 0x38b94c: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b948) {
            ctx->pc = 0x38BA70u;
            goto label_38ba70;
        }
    }
    ctx->pc = 0x38B950u;
label_38b950:
    // 0x38b950: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_38b954:
    if (ctx->pc == 0x38B954u) {
        ctx->pc = 0x38B958u;
        goto label_38b958;
    }
    ctx->pc = 0x38B950u;
    {
        const bool branch_taken_0x38b950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b950) {
            ctx->pc = 0x38B960u;
            goto label_38b960;
        }
    }
    ctx->pc = 0x38B958u;
label_38b958:
    // 0x38b958: 0x10000055  b           . + 4 + (0x55 << 2)
label_38b95c:
    if (ctx->pc == 0x38B95Cu) {
        ctx->pc = 0x38B960u;
        goto label_38b960;
    }
    ctx->pc = 0x38B958u;
    {
        const bool branch_taken_0x38b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b958) {
            ctx->pc = 0x38BAB0u;
            goto label_38bab0;
        }
    }
    ctx->pc = 0x38B960u;
label_38b960:
    // 0x38b960: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38b964:
    // 0x38b964: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_38b968:
    if (ctx->pc == 0x38B968u) {
        ctx->pc = 0x38B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B964u;
        // 0x38b968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B96Cu;
        goto label_38b96c;
    }
    ctx->pc = 0x38B964u;
    {
        const bool branch_taken_0x38b964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B964u;
        // 0x38b968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b964) {
            ctx->pc = 0x38B990u;
            goto label_38b990;
        }
    }
    ctx->pc = 0x38B96Cu;
label_38b96c:
    // 0x38b96c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38b96cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38b970:
    // 0x38b970: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x38b970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_38b974:
    // 0x38b974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38b978:
    // 0x38b978: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x38b978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_38b97c:
    // 0x38b97c: 0x0  nop
    ctx->pc = 0x38b97cu;
    // NOP
label_38b980:
    // 0x38b980: 0x0  nop
    ctx->pc = 0x38b980u;
    // NOP
label_38b984:
    // 0x38b984: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_38b988:
    if (ctx->pc == 0x38B988u) {
        ctx->pc = 0x38B98Cu;
        goto label_38b98c;
    }
    ctx->pc = 0x38B984u;
    {
        const bool branch_taken_0x38b984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38b984) {
            ctx->pc = 0x38B970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b970;
        }
    }
    ctx->pc = 0x38B98Cu;
label_38b98c:
    // 0x38b98c: 0x0  nop
    ctx->pc = 0x38b98cu;
    // NOP
label_38b990:
    // 0x38b990: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38b990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_38b994:
    // 0x38b994: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x38b994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
label_38b998:
    // 0x38b998: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x38b998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
label_38b99c:
    // 0x38b99c: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x38b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
label_38b9a0:
    // 0x38b9a0: 0x24020213  addiu       $v0, $zero, 0x213
    ctx->pc = 0x38b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
label_38b9a4:
    // 0x38b9a4: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x38b9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_38b9a8:
    // 0x38b9a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38b9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_38b9ac:
    // 0x38b9ac: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x38b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_38b9b0:
    // 0x38b9b0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x38b9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_38b9b4:
    // 0x38b9b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x38b9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_38b9b8:
    // 0x38b9b8: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x38b9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_38b9bc:
    // 0x38b9bc: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x38b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
label_38b9c0:
    // 0x38b9c0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x38b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_38b9c4:
    // 0x38b9c4: 0x68001b  divu        $zero, $v1, $t0
    ctx->pc = 0x38b9c4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_38b9c8:
    // 0x38b9c8: 0x0  nop
    ctx->pc = 0x38b9c8u;
    // NOP
label_38b9cc:
    // 0x38b9cc: 0x0  nop
    ctx->pc = 0x38b9ccu;
    // NOP
label_38b9d0:
    // 0x38b9d0: 0x3010  mfhi        $a2
    ctx->pc = 0x38b9d0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_38b9d4:
    // 0x38b9d4: 0x96032ac4  lhu         $v1, 0x2AC4($s0)
    ctx->pc = 0x38b9d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10948)));
label_38b9d8:
    // 0x38b9d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x38b9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_38b9dc:
    // 0x38b9dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x38b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_38b9e0:
    // 0x38b9e0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_38b9e4:
    if (ctx->pc == 0x38B9E4u) {
        ctx->pc = 0x38B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9E0u;
        // 0x38b9e4: 0x8ca60000  lw          $a2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B9E8u;
        goto label_38b9e8;
    }
    ctx->pc = 0x38B9E0u;
    {
        const bool branch_taken_0x38b9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9E0u;
        // 0x38b9e4: 0x8ca60000  lw          $a2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b9e0) {
            ctx->pc = 0x38BA08u;
            goto label_38ba08;
        }
    }
    ctx->pc = 0x38B9E8u;
label_38b9e8:
    // 0x38b9e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38b9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38b9ec:
    // 0x38b9ec: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x38b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38b9f0:
    // 0x38b9f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38b9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38b9f4:
    // 0x38b9f4: 0x320f809  jalr        $t9
label_38b9f8:
    if (ctx->pc == 0x38B9F8u) {
        ctx->pc = 0x38B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9F4u;
        // 0x38b9f8: 0x24072050  addiu       $a3, $zero, 0x2050 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38B9FCu;
        goto label_38b9fc;
    }
    ctx->pc = 0x38B9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38B9FCu);
        ctx->pc = 0x38B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B9F4u;
        // 0x38b9f8: 0x24072050  addiu       $a3, $zero, 0x2050 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B9F4u, 0x38B9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38B9FCu;
label_38b9fc:
    // 0x38b9fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_38ba00:
    if (ctx->pc == 0x38BA00u) {
        ctx->pc = 0x38BA04u;
        goto label_38ba04;
    }
    ctx->pc = 0x38B9FCu;
    {
        const bool branch_taken_0x38b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b9fc) {
            ctx->pc = 0x38BA20u;
            goto label_38ba20;
        }
    }
    ctx->pc = 0x38BA04u;
label_38ba04:
    // 0x38ba04: 0x0  nop
    ctx->pc = 0x38ba04u;
    // NOP
label_38ba08:
    // 0x38ba08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38ba08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38ba0c:
    // 0x38ba0c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x38ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38ba10:
    // 0x38ba10: 0x34c60a00  ori         $a2, $a2, 0xA00
    ctx->pc = 0x38ba10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2560);
label_38ba14:
    // 0x38ba14: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x38ba14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_38ba18:
    // 0x38ba18: 0x320f809  jalr        $t9
label_38ba1c:
    if (ctx->pc == 0x38BA1Cu) {
        ctx->pc = 0x38BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA18u;
        // 0x38ba1c: 0x24070a50  addiu       $a3, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA20u;
        goto label_38ba20;
    }
    ctx->pc = 0x38BA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38BA20u);
        ctx->pc = 0x38BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA18u;
        // 0x38ba1c: 0x24070a50  addiu       $a3, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BA18u, 0x38BA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BA20u;
label_38ba20:
    // 0x38ba20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38ba20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_38ba24:
    // 0x38ba24: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x38ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
label_38ba28:
    // 0x38ba28: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x38ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
label_38ba2c:
    // 0x38ba2c: 0x8e050144  lw          $a1, 0x144($s0)
    ctx->pc = 0x38ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38ba30:
    // 0x38ba30: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x38ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
label_38ba34:
    // 0x38ba34: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x38ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_38ba38:
    // 0x38ba38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_38ba3c:
    // 0x38ba3c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x38ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_38ba40:
    // 0x38ba40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x38ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_38ba44:
    // 0x38ba44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38ba48:
    // 0x38ba48: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x38ba48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_38ba4c:
    // 0x38ba4c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x38ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
label_38ba50:
    // 0x38ba50: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x38ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_38ba54:
    // 0x38ba54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38ba54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_38ba58:
    // 0x38ba58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38ba5c:
    // 0x38ba5c: 0xaca2012c  sw          $v0, 0x12C($a1)
    ctx->pc = 0x38ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 2));
label_38ba60:
    // 0x38ba60: 0x92020119  lbu         $v0, 0x119($s0)
    ctx->pc = 0x38ba60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 281)));
label_38ba64:
    // 0x38ba64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38ba68:
    // 0x38ba68: 0x10000011  b           . + 4 + (0x11 << 2)
label_38ba6c:
    if (ctx->pc == 0x38BA6Cu) {
        ctx->pc = 0x38BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA68u;
        // 0x38ba6c: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA70u;
        goto label_38ba70;
    }
    ctx->pc = 0x38BA68u;
    {
        const bool branch_taken_0x38ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA68u;
        // 0x38ba6c: 0xa2020119  sb          $v0, 0x119($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ba68) {
            ctx->pc = 0x38BAB0u;
            goto label_38bab0;
        }
    }
    ctx->pc = 0x38BA70u;
label_38ba70:
    // 0x38ba70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38ba70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38ba74:
    // 0x38ba74: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x38ba74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_38ba78:
    // 0x38ba78: 0x320f809  jalr        $t9
label_38ba7c:
    if (ctx->pc == 0x38BA7Cu) {
        ctx->pc = 0x38BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA78u;
        // 0x38ba7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BA80u;
        goto label_38ba80;
    }
    ctx->pc = 0x38BA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38BA80u);
        ctx->pc = 0x38BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA78u;
        // 0x38ba7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BA78u, 0x38BA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38BA80u;
label_38ba80:
    // 0x38ba80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_38ba84:
    if (ctx->pc == 0x38BA84u) {
        ctx->pc = 0x38BA88u;
        goto label_38ba88;
    }
    ctx->pc = 0x38BA80u;
    {
        const bool branch_taken_0x38ba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ba80) {
            ctx->pc = 0x38BAB0u;
            goto label_38bab0;
        }
    }
    ctx->pc = 0x38BA88u;
label_38ba88:
    // 0x38ba88: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x38ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38ba8c:
    // 0x38ba8c: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x38ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_38ba90:
    // 0x38ba90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38ba94:
    // 0x38ba94: 0xac62012c  sw          $v0, 0x12C($v1)
    ctx->pc = 0x38ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 2));
label_38ba98:
    // 0x38ba98: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38ba9c:
    // 0x38ba9c: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x38ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_38baa0:
    // 0x38baa0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_38baa4:
    if (ctx->pc == 0x38BAA4u) {
        ctx->pc = 0x38BAA8u;
        goto label_38baa8;
    }
    ctx->pc = 0x38BAA0u;
    {
        const bool branch_taken_0x38baa0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x38baa0) {
            ctx->pc = 0x38BAB0u;
            goto label_38bab0;
        }
    }
    ctx->pc = 0x38BAA8u;
label_38baa8:
    // 0x38baa8: 0xa2000119  sb          $zero, 0x119($s0)
    ctx->pc = 0x38baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 281), (uint8_t)GPR_U32(ctx, 0));
label_38baac:
    // 0x38baac: 0x0  nop
    ctx->pc = 0x38baacu;
    // NOP
label_38bab0:
    // 0x38bab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38bab4:
    // 0x38bab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38bab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38bab8:
    // 0x38bab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38bab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38babc:
    // 0x38babc: 0x3e00008  jr          $ra
label_38bac0:
    if (ctx->pc == 0x38BAC0u) {
        ctx->pc = 0x38BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BABCu;
        // 0x38bac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38BAC4u;
        goto label_fallthrough_0x38babc;
    }
    ctx->pc = 0x38BABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BABCu;
        // 0x38bac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38babc:
    ctx->pc = 0x38BAC4u;
}
