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

// Function: sub_00321930
// Address: 0x321930 - 0x321bcc
void sub_00321930_0x321930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321930_0x321930");
#endif

    switch (ctx->pc) {
        case 0x321930u: goto label_321930;
        case 0x321934u: goto label_321934;
        case 0x321938u: goto label_321938;
        case 0x32193cu: goto label_32193c;
        case 0x321940u: goto label_321940;
        case 0x321944u: goto label_321944;
        case 0x321948u: goto label_321948;
        case 0x32194cu: goto label_32194c;
        case 0x321950u: goto label_321950;
        case 0x321954u: goto label_321954;
        case 0x321958u: goto label_321958;
        case 0x32195cu: goto label_32195c;
        case 0x321960u: goto label_321960;
        case 0x321964u: goto label_321964;
        case 0x321968u: goto label_321968;
        case 0x32196cu: goto label_32196c;
        case 0x321970u: goto label_321970;
        case 0x321974u: goto label_321974;
        case 0x321978u: goto label_321978;
        case 0x32197cu: goto label_32197c;
        case 0x321980u: goto label_321980;
        case 0x321984u: goto label_321984;
        case 0x321988u: goto label_321988;
        case 0x32198cu: goto label_32198c;
        case 0x321990u: goto label_321990;
        case 0x321994u: goto label_321994;
        case 0x321998u: goto label_321998;
        case 0x32199cu: goto label_32199c;
        case 0x3219a0u: goto label_3219a0;
        case 0x3219a4u: goto label_3219a4;
        case 0x3219a8u: goto label_3219a8;
        case 0x3219acu: goto label_3219ac;
        case 0x3219b0u: goto label_3219b0;
        case 0x3219b4u: goto label_3219b4;
        case 0x3219b8u: goto label_3219b8;
        case 0x3219bcu: goto label_3219bc;
        case 0x3219c0u: goto label_3219c0;
        case 0x3219c4u: goto label_3219c4;
        case 0x3219c8u: goto label_3219c8;
        case 0x3219ccu: goto label_3219cc;
        case 0x3219d0u: goto label_3219d0;
        case 0x3219d4u: goto label_3219d4;
        case 0x3219d8u: goto label_3219d8;
        case 0x3219dcu: goto label_3219dc;
        case 0x3219e0u: goto label_3219e0;
        case 0x3219e4u: goto label_3219e4;
        case 0x3219e8u: goto label_3219e8;
        case 0x3219ecu: goto label_3219ec;
        case 0x3219f0u: goto label_3219f0;
        case 0x3219f4u: goto label_3219f4;
        case 0x3219f8u: goto label_3219f8;
        case 0x3219fcu: goto label_3219fc;
        case 0x321a00u: goto label_321a00;
        case 0x321a04u: goto label_321a04;
        case 0x321a08u: goto label_321a08;
        case 0x321a0cu: goto label_321a0c;
        case 0x321a10u: goto label_321a10;
        case 0x321a14u: goto label_321a14;
        case 0x321a18u: goto label_321a18;
        case 0x321a1cu: goto label_321a1c;
        case 0x321a20u: goto label_321a20;
        case 0x321a24u: goto label_321a24;
        case 0x321a28u: goto label_321a28;
        case 0x321a2cu: goto label_321a2c;
        case 0x321a30u: goto label_321a30;
        case 0x321a34u: goto label_321a34;
        case 0x321a38u: goto label_321a38;
        case 0x321a3cu: goto label_321a3c;
        case 0x321a40u: goto label_321a40;
        case 0x321a44u: goto label_321a44;
        case 0x321a48u: goto label_321a48;
        case 0x321a4cu: goto label_321a4c;
        case 0x321a50u: goto label_321a50;
        case 0x321a54u: goto label_321a54;
        case 0x321a58u: goto label_321a58;
        case 0x321a5cu: goto label_321a5c;
        case 0x321a60u: goto label_321a60;
        case 0x321a64u: goto label_321a64;
        case 0x321a68u: goto label_321a68;
        case 0x321a6cu: goto label_321a6c;
        case 0x321a70u: goto label_321a70;
        case 0x321a74u: goto label_321a74;
        case 0x321a78u: goto label_321a78;
        case 0x321a7cu: goto label_321a7c;
        case 0x321a80u: goto label_321a80;
        case 0x321a84u: goto label_321a84;
        case 0x321a88u: goto label_321a88;
        case 0x321a8cu: goto label_321a8c;
        case 0x321a90u: goto label_321a90;
        case 0x321a94u: goto label_321a94;
        case 0x321a98u: goto label_321a98;
        case 0x321a9cu: goto label_321a9c;
        case 0x321aa0u: goto label_321aa0;
        case 0x321aa4u: goto label_321aa4;
        case 0x321aa8u: goto label_321aa8;
        case 0x321aacu: goto label_321aac;
        case 0x321ab0u: goto label_321ab0;
        case 0x321ab4u: goto label_321ab4;
        case 0x321ab8u: goto label_321ab8;
        case 0x321abcu: goto label_321abc;
        case 0x321ac0u: goto label_321ac0;
        case 0x321ac4u: goto label_321ac4;
        case 0x321ac8u: goto label_321ac8;
        case 0x321accu: goto label_321acc;
        case 0x321ad0u: goto label_321ad0;
        case 0x321ad4u: goto label_321ad4;
        case 0x321ad8u: goto label_321ad8;
        case 0x321adcu: goto label_321adc;
        case 0x321ae0u: goto label_321ae0;
        case 0x321ae4u: goto label_321ae4;
        case 0x321ae8u: goto label_321ae8;
        case 0x321aecu: goto label_321aec;
        case 0x321af0u: goto label_321af0;
        case 0x321af4u: goto label_321af4;
        case 0x321af8u: goto label_321af8;
        case 0x321afcu: goto label_321afc;
        case 0x321b00u: goto label_321b00;
        case 0x321b04u: goto label_321b04;
        case 0x321b08u: goto label_321b08;
        case 0x321b0cu: goto label_321b0c;
        case 0x321b10u: goto label_321b10;
        case 0x321b14u: goto label_321b14;
        case 0x321b18u: goto label_321b18;
        case 0x321b1cu: goto label_321b1c;
        case 0x321b20u: goto label_321b20;
        case 0x321b24u: goto label_321b24;
        case 0x321b28u: goto label_321b28;
        case 0x321b2cu: goto label_321b2c;
        case 0x321b30u: goto label_321b30;
        case 0x321b34u: goto label_321b34;
        case 0x321b38u: goto label_321b38;
        case 0x321b3cu: goto label_321b3c;
        case 0x321b40u: goto label_321b40;
        case 0x321b44u: goto label_321b44;
        case 0x321b48u: goto label_321b48;
        case 0x321b4cu: goto label_321b4c;
        case 0x321b50u: goto label_321b50;
        case 0x321b54u: goto label_321b54;
        case 0x321b58u: goto label_321b58;
        case 0x321b5cu: goto label_321b5c;
        case 0x321b60u: goto label_321b60;
        case 0x321b64u: goto label_321b64;
        case 0x321b68u: goto label_321b68;
        case 0x321b6cu: goto label_321b6c;
        case 0x321b70u: goto label_321b70;
        case 0x321b74u: goto label_321b74;
        case 0x321b78u: goto label_321b78;
        case 0x321b7cu: goto label_321b7c;
        case 0x321b80u: goto label_321b80;
        case 0x321b84u: goto label_321b84;
        case 0x321b88u: goto label_321b88;
        case 0x321b8cu: goto label_321b8c;
        case 0x321b90u: goto label_321b90;
        case 0x321b94u: goto label_321b94;
        case 0x321b98u: goto label_321b98;
        case 0x321b9cu: goto label_321b9c;
        case 0x321ba0u: goto label_321ba0;
        case 0x321ba4u: goto label_321ba4;
        case 0x321ba8u: goto label_321ba8;
        case 0x321bacu: goto label_321bac;
        case 0x321bb0u: goto label_321bb0;
        case 0x321bb4u: goto label_321bb4;
        case 0x321bb8u: goto label_321bb8;
        case 0x321bbcu: goto label_321bbc;
        case 0x321bc0u: goto label_321bc0;
        case 0x321bc4u: goto label_321bc4;
        case 0x321bc8u: goto label_321bc8;
        default: break;
    }

    ctx->pc = 0x321930u;

label_321930:
    // 0x321930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_321934:
    // 0x321934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_321938:
    // 0x321938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x321938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32193c:
    // 0x32193c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32193cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321940:
    // 0x321940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_321944:
    // 0x321944: 0xc0c84a4  jal         func_321290
label_321948:
    if (ctx->pc == 0x321948u) {
        ctx->pc = 0x321948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321944u;
        // 0x321948: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32194Cu;
        goto label_32194c;
    }
    ctx->pc = 0x321944u;
    SET_GPR_U32(ctx, 31, 0x32194Cu);
    ctx->pc = 0x321948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321944u;
    // 0x321948: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321290u, 0x321944u, 0x32194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32194Cu;
label_32194c:
    // 0x32194c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x32194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_321950:
    // 0x321950: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321954:
    // 0x321954: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x321954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_321958:
    // 0x321958: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
label_32195c:
    if (ctx->pc == 0x32195Cu) {
        ctx->pc = 0x321960u;
        goto label_321960;
    }
    ctx->pc = 0x321958u;
    {
        const bool branch_taken_0x321958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x321958) {
            ctx->pc = 0x321B28u;
            goto label_321b28;
        }
    }
    ctx->pc = 0x321960u;
label_321960:
    // 0x321960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x321960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_321964:
    // 0x321964: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_321968:
    if (ctx->pc == 0x321968u) {
        ctx->pc = 0x321968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321964u;
        // 0x321968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32196Cu;
        goto label_32196c;
    }
    ctx->pc = 0x321964u;
    {
        const bool branch_taken_0x321964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321964u;
        // 0x321968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321964) {
            ctx->pc = 0x321A38u;
            goto label_321a38;
        }
    }
    ctx->pc = 0x32196Cu;
label_32196c:
    // 0x32196c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_321970:
    if (ctx->pc == 0x321970u) {
        ctx->pc = 0x321974u;
        goto label_321974;
    }
    ctx->pc = 0x32196Cu;
    {
        const bool branch_taken_0x32196c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32196c) {
            ctx->pc = 0x3219E0u;
            goto label_3219e0;
        }
    }
    ctx->pc = 0x321974u;
label_321974:
    // 0x321974: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_321978:
    if (ctx->pc == 0x321978u) {
        ctx->pc = 0x32197Cu;
        goto label_32197c;
    }
    ctx->pc = 0x321974u;
    {
        const bool branch_taken_0x321974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321974) {
            ctx->pc = 0x321988u;
            goto label_321988;
        }
    }
    ctx->pc = 0x32197Cu;
label_32197c:
    // 0x32197c: 0x1000008c  b           . + 4 + (0x8C << 2)
label_321980:
    if (ctx->pc == 0x321980u) {
        ctx->pc = 0x321984u;
        goto label_321984;
    }
    ctx->pc = 0x32197Cu;
    {
        const bool branch_taken_0x32197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32197c) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x321984u;
label_321984:
    // 0x321984: 0x0  nop
    ctx->pc = 0x321984u;
    // NOP
label_321988:
    // 0x321988: 0xc0c85d4  jal         func_321750
label_32198c:
    if (ctx->pc == 0x32198Cu) {
        ctx->pc = 0x32198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321988u;
        // 0x32198c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321990u;
        goto label_321990;
    }
    ctx->pc = 0x321988u;
    SET_GPR_U32(ctx, 31, 0x321990u);
    ctx->pc = 0x32198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321988u;
    // 0x32198c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321750u, 0x321988u, 0x321990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321990u;
label_321990:
    // 0x321990: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321994:
    // 0x321994: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x321994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_321998:
    // 0x321998: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x321998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_32199c:
    // 0x32199c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3219a0:
    // 0x3219a0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3219a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_3219a4:
    // 0x3219a4: 0xac22cc34  sw          $v0, -0x33CC($at)
    ctx->pc = 0x3219a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
label_3219a8:
    // 0x3219a8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3219a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_3219ac:
    // 0x3219ac: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3219acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3219b0:
    // 0x3219b0: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3219b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_3219b4:
    // 0x3219b4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3219b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3219b8:
    // 0x3219b8: 0xc0d1668  jal         func_3459A0
label_3219bc:
    if (ctx->pc == 0x3219BCu) {
        ctx->pc = 0x3219BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219B8u;
        // 0x3219bc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3219C0u;
        goto label_3219c0;
    }
    ctx->pc = 0x3219B8u;
    SET_GPR_U32(ctx, 31, 0x3219C0u);
    ctx->pc = 0x3219BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3219B8u;
    // 0x3219bc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459A0u, 0x3219B8u, 0x3219C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3219C0u;
label_3219c0:
    // 0x3219c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3219c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3219c4:
    // 0x3219c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3219c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3219c8:
    // 0x3219c8: 0xc0d0590  jal         func_341640
label_3219cc:
    if (ctx->pc == 0x3219CCu) {
        ctx->pc = 0x3219CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219C8u;
        // 0x3219cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3219D0u;
        goto label_3219d0;
    }
    ctx->pc = 0x3219C8u;
    SET_GPR_U32(ctx, 31, 0x3219D0u);
    ctx->pc = 0x3219CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3219C8u;
    // 0x3219cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x3219C8u, 0x3219D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3219D0u;
label_3219d0:
    // 0x3219d0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x3219d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3219d4:
    // 0x3219d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3219d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3219d8:
    // 0x3219d8: 0x10000075  b           . + 4 + (0x75 << 2)
label_3219dc:
    if (ctx->pc == 0x3219DCu) {
        ctx->pc = 0x3219DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219D8u;
        // 0x3219dc: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3219E0u;
        goto label_3219e0;
    }
    ctx->pc = 0x3219D8u;
    {
        const bool branch_taken_0x3219d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3219DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219D8u;
        // 0x3219dc: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219d8) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x3219E0u;
label_3219e0:
    // 0x3219e0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3219e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_3219e4:
    // 0x3219e4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3219e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3219e8:
    // 0x3219e8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3219e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_3219ec:
    // 0x3219ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3219ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3219f0:
    // 0x3219f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3219f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3219f4:
    // 0x3219f4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3219f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3219f8:
    // 0x3219f8: 0x320f809  jalr        $t9
label_3219fc:
    if (ctx->pc == 0x3219FCu) {
        ctx->pc = 0x3219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219F8u;
        // 0x3219fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A00u;
        goto label_321a00;
    }
    ctx->pc = 0x3219F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321A00u);
        ctx->pc = 0x3219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219F8u;
        // 0x3219fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3219F8u, 0x321A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321A00u;
label_321a00:
    // 0x321a00: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_321a04:
    if (ctx->pc == 0x321A04u) {
        ctx->pc = 0x321A08u;
        goto label_321a08;
    }
    ctx->pc = 0x321A00u;
    {
        const bool branch_taken_0x321a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321a00) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x321A08u;
label_321a08:
    // 0x321a08: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x321a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_321a0c:
    // 0x321a0c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x321a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_321a10:
    // 0x321a10: 0x96250044  lhu         $a1, 0x44($s1)
    ctx->pc = 0x321a10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_321a14:
    // 0x321a14: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x321a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
label_321a18:
    // 0x321a18: 0x92260048  lbu         $a2, 0x48($s1)
    ctx->pc = 0x321a18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 72)));
label_321a1c:
    // 0x321a1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x321a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321a20:
    // 0x321a20: 0xc0c2b48  jal         func_30AD20
label_321a24:
    if (ctx->pc == 0x321A24u) {
        ctx->pc = 0x321A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A20u;
        // 0x321a24: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A28u;
        goto label_321a28;
    }
    ctx->pc = 0x321A20u;
    SET_GPR_U32(ctx, 31, 0x321A28u);
    ctx->pc = 0x321A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A20u;
    // 0x321a24: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AD20u, 0x321A20u, 0x321A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A28u;
label_321a28:
    // 0x321a28: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x321a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_321a2c:
    // 0x321a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_321a30:
    // 0x321a30: 0x1000005f  b           . + 4 + (0x5F << 2)
label_321a34:
    if (ctx->pc == 0x321A34u) {
        ctx->pc = 0x321A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A30u;
        // 0x321a34: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A38u;
        goto label_321a38;
    }
    ctx->pc = 0x321A30u;
    {
        const bool branch_taken_0x321a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A30u;
        // 0x321a34: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a30) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x321A38u;
label_321a38:
    // 0x321a38: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x321a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_321a3c:
    // 0x321a3c: 0xc0c2b78  jal         func_30ADE0
label_321a40:
    if (ctx->pc == 0x321A40u) {
        ctx->pc = 0x321A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A3Cu;
        // 0x321a40: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A44u;
        goto label_321a44;
    }
    ctx->pc = 0x321A3Cu;
    SET_GPR_U32(ctx, 31, 0x321A44u);
    ctx->pc = 0x321A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A3Cu;
    // 0x321a40: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ADE0u, 0x321A3Cu, 0x321A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A44u;
label_321a44:
    // 0x321a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x321a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321a48:
    // 0x321a48: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_321a4c:
    if (ctx->pc == 0x321A4Cu) {
        ctx->pc = 0x321A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A48u;
        // 0x321a4c: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A50u;
        goto label_321a50;
    }
    ctx->pc = 0x321A48u;
    {
        const bool branch_taken_0x321a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x321A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A48u;
        // 0x321a4c: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a48) {
            ctx->pc = 0x321A88u;
            goto label_321a88;
        }
    }
    ctx->pc = 0x321A50u;
label_321a50:
    // 0x321a50: 0xc0d0ac8  jal         func_342B20
label_321a54:
    if (ctx->pc == 0x321A54u) {
        ctx->pc = 0x321A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A50u;
        // 0x321a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A58u;
        goto label_321a58;
    }
    ctx->pc = 0x321A50u;
    SET_GPR_U32(ctx, 31, 0x321A58u);
    ctx->pc = 0x321A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A50u;
    // 0x321a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B20u, 0x321A50u, 0x321A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A58u;
label_321a58:
    // 0x321a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321a5c:
    // 0x321a5c: 0xc0c85f4  jal         func_3217D0
label_321a60:
    if (ctx->pc == 0x321A60u) {
        ctx->pc = 0x321A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A5Cu;
        // 0x321a60: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A64u;
        goto label_321a64;
    }
    ctx->pc = 0x321A5Cu;
    SET_GPR_U32(ctx, 31, 0x321A64u);
    ctx->pc = 0x321A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321A5Cu;
    // 0x321a60: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x321A5Cu, 0x321A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A64u;
label_321a64:
    // 0x321a64: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321a68:
    // 0x321a68: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x321a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_321a6c:
    // 0x321a6c: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x321a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_321a70:
    // 0x321a70: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x321a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_321a74:
    // 0x321a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321a78:
    // 0x321a78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x321a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_321a7c:
    // 0x321a7c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321a80:
    // 0x321a80: 0x1000004d  b           . + 4 + (0x4D << 2)
label_321a84:
    if (ctx->pc == 0x321A84u) {
        ctx->pc = 0x321A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A80u;
        // 0x321a84: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A88u;
        goto label_321a88;
    }
    ctx->pc = 0x321A80u;
    {
        const bool branch_taken_0x321a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A80u;
        // 0x321a84: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a80) {
            ctx->pc = 0x321BB8u;
            goto label_321bb8;
        }
    }
    ctx->pc = 0x321A88u;
label_321a88:
    // 0x321a88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x321a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_321a8c:
    // 0x321a8c: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
label_321a90:
    if (ctx->pc == 0x321A90u) {
        ctx->pc = 0x321A94u;
        goto label_321a94;
    }
    ctx->pc = 0x321A8Cu;
    {
        const bool branch_taken_0x321a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x321a8c) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x321A94u;
label_321a94:
    // 0x321a94: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x321a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_321a98:
    // 0x321a98: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x321a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_321a9c:
    // 0x321a9c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x321a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_321aa0:
    // 0x321aa0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x321aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_321aa4:
    // 0x321aa4: 0xc0d166c  jal         func_3459B0
label_321aa8:
    if (ctx->pc == 0x321AA8u) {
        ctx->pc = 0x321AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AA4u;
        // 0x321aa8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321AACu;
        goto label_321aac;
    }
    ctx->pc = 0x321AA4u;
    SET_GPR_U32(ctx, 31, 0x321AACu);
    ctx->pc = 0x321AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321AA4u;
    // 0x321aa8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459B0u, 0x321AA4u, 0x321AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321AACu;
label_321aac:
    // 0x321aac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x321aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_321ab0:
    // 0x321ab0: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x321ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_321ab4:
    // 0x321ab4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x321ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_321ab8:
    // 0x321ab8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x321ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_321abc:
    // 0x321abc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x321abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_321ac0:
    // 0x321ac0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x321ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_321ac4:
    // 0x321ac4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x321ac4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_321ac8:
    // 0x321ac8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x321ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_321acc:
    // 0x321acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x321accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321ad0:
    // 0x321ad0: 0x0  nop
    ctx->pc = 0x321ad0u;
    // NOP
label_321ad4:
    // 0x321ad4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x321ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_321ad8:
    // 0x321ad8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x321ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_321adc:
    // 0x321adc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_321ae0:
    if (ctx->pc == 0x321AE0u) {
        ctx->pc = 0x321AE4u;
        goto label_321ae4;
    }
    ctx->pc = 0x321ADCu;
    {
        const bool branch_taken_0x321adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x321adc) {
            ctx->pc = 0x321AF4u;
            goto label_321af4;
        }
    }
    ctx->pc = 0x321AE4u;
label_321ae4:
    // 0x321ae4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x321ae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_321ae8:
    // 0x321ae8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x321ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_321aec:
    // 0x321aec: 0x10000008  b           . + 4 + (0x8 << 2)
label_321af0:
    if (ctx->pc == 0x321AF0u) {
        ctx->pc = 0x321AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AECu;
        // 0x321af0: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321AF4u;
        goto label_321af4;
    }
    ctx->pc = 0x321AECu;
    {
        const bool branch_taken_0x321aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AECu;
        // 0x321af0: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321aec) {
            ctx->pc = 0x321B10u;
            goto label_321b10;
        }
    }
    ctx->pc = 0x321AF4u;
label_321af4:
    // 0x321af4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x321af4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_321af8:
    // 0x321af8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_321afc:
    // 0x321afc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x321afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_321b00:
    // 0x321b00: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x321b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_321b04:
    // 0x321b04: 0x0  nop
    ctx->pc = 0x321b04u;
    // NOP
label_321b08:
    // 0x321b08: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x321b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_321b0c:
    // 0x321b0c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x321b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_321b10:
    // 0x321b10: 0xc0d0ae8  jal         func_342BA0
label_321b14:
    if (ctx->pc == 0x321B14u) {
        ctx->pc = 0x321B18u;
        goto label_321b18;
    }
    ctx->pc = 0x321B10u;
    SET_GPR_U32(ctx, 31, 0x321B18u);
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x321B10u, 0x321B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B18u;
label_321b18:
    // 0x321b18: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x321b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_321b1c:
    // 0x321b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x321b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_321b20:
    // 0x321b20: 0x10000023  b           . + 4 + (0x23 << 2)
label_321b24:
    if (ctx->pc == 0x321B24u) {
        ctx->pc = 0x321B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B20u;
        // 0x321b24: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B28u;
        goto label_321b28;
    }
    ctx->pc = 0x321B20u;
    {
        const bool branch_taken_0x321b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B20u;
        // 0x321b24: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b20) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x321B28u;
label_321b28:
    // 0x321b28: 0xc0d0b00  jal         func_342C00
label_321b2c:
    if (ctx->pc == 0x321B2Cu) {
        ctx->pc = 0x321B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B28u;
        // 0x321b2c: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B30u;
        goto label_321b30;
    }
    ctx->pc = 0x321B28u;
    SET_GPR_U32(ctx, 31, 0x321B30u);
    ctx->pc = 0x321B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B28u;
    // 0x321b2c: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x321B28u, 0x321B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B30u;
label_321b30:
    // 0x321b30: 0xc0d0af4  jal         func_342BD0
label_321b34:
    if (ctx->pc == 0x321B34u) {
        ctx->pc = 0x321B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B30u;
        // 0x321b34: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B38u;
        goto label_321b38;
    }
    ctx->pc = 0x321B30u;
    SET_GPR_U32(ctx, 31, 0x321B38u);
    ctx->pc = 0x321B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B30u;
    // 0x321b34: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x321B30u, 0x321B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B38u;
label_321b38:
    // 0x321b38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_321b3c:
    if (ctx->pc == 0x321B3Cu) {
        ctx->pc = 0x321B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B38u;
        // 0x321b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B40u;
        goto label_321b40;
    }
    ctx->pc = 0x321B38u;
    {
        const bool branch_taken_0x321b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B38u;
        // 0x321b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b38) {
            ctx->pc = 0x321B58u;
            goto label_321b58;
        }
    }
    ctx->pc = 0x321B40u;
label_321b40:
    // 0x321b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321b44:
    // 0x321b44: 0xc0d0590  jal         func_341640
label_321b48:
    if (ctx->pc == 0x321B48u) {
        ctx->pc = 0x321B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B44u;
        // 0x321b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B4Cu;
        goto label_321b4c;
    }
    ctx->pc = 0x321B44u;
    SET_GPR_U32(ctx, 31, 0x321B4Cu);
    ctx->pc = 0x321B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B44u;
    // 0x321b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x321B44u, 0x321B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B4Cu;
label_321b4c:
    // 0x321b4c: 0xc0d0ae4  jal         func_342B90
label_321b50:
    if (ctx->pc == 0x321B50u) {
        ctx->pc = 0x321B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B4Cu;
        // 0x321b50: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B54u;
        goto label_321b54;
    }
    ctx->pc = 0x321B4Cu;
    SET_GPR_U32(ctx, 31, 0x321B54u);
    ctx->pc = 0x321B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B4Cu;
    // 0x321b50: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B90u, 0x321B4Cu, 0x321B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B54u;
label_321b54:
    // 0x321b54: 0x0  nop
    ctx->pc = 0x321b54u;
    // NOP
label_321b58:
    // 0x321b58: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x321b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_321b5c:
    // 0x321b5c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x321b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_321b60:
    // 0x321b60: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x321b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_321b64:
    // 0x321b64: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x321b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_321b68:
    // 0x321b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x321b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321b6c:
    // 0x321b6c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x321b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_321b70:
    // 0x321b70: 0x320f809  jalr        $t9
label_321b74:
    if (ctx->pc == 0x321B74u) {
        ctx->pc = 0x321B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B70u;
        // 0x321b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B78u;
        goto label_321b78;
    }
    ctx->pc = 0x321B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x321B78u);
        ctx->pc = 0x321B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B70u;
        // 0x321b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321B70u, 0x321B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321B78u;
label_321b78:
    // 0x321b78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_321b7c:
    if (ctx->pc == 0x321B7Cu) {
        ctx->pc = 0x321B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B78u;
        // 0x321b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B80u;
        goto label_321b80;
    }
    ctx->pc = 0x321B78u;
    {
        const bool branch_taken_0x321b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B78u;
        // 0x321b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b78) {
            ctx->pc = 0x321BB0u;
            goto label_321bb0;
        }
    }
    ctx->pc = 0x321B80u;
label_321b80:
    // 0x321b80: 0xc0c85f4  jal         func_3217D0
label_321b84:
    if (ctx->pc == 0x321B84u) {
        ctx->pc = 0x321B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B80u;
        // 0x321b84: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321B88u;
        goto label_321b88;
    }
    ctx->pc = 0x321B80u;
    SET_GPR_U32(ctx, 31, 0x321B88u);
    ctx->pc = 0x321B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321B80u;
    // 0x321b84: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3217D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3217D0u, 0x321B80u, 0x321B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321B88u;
label_321b88:
    // 0x321b88: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321b8c:
    // 0x321b8c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x321b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_321b90:
    // 0x321b90: 0x8c24cc34  lw          $a0, -0x33CC($at)
    ctx->pc = 0x321b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954036)));
label_321b94:
    // 0x321b94: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x321b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_321b98:
    // 0x321b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321b9c:
    // 0x321b9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x321b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_321ba0:
    // 0x321ba0: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x321ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
label_321ba4:
    // 0x321ba4: 0x10000004  b           . + 4 + (0x4 << 2)
label_321ba8:
    if (ctx->pc == 0x321BA8u) {
        ctx->pc = 0x321BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BA4u;
        // 0x321ba8: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321BACu;
        goto label_321bac;
    }
    ctx->pc = 0x321BA4u;
    {
        const bool branch_taken_0x321ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BA4u;
        // 0x321ba8: 0xac23cc34  sw          $v1, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ba4) {
            ctx->pc = 0x321BB8u;
            goto label_321bb8;
        }
    }
    ctx->pc = 0x321BACu;
label_321bac:
    // 0x321bac: 0x0  nop
    ctx->pc = 0x321bacu;
    // NOP
label_321bb0:
    // 0x321bb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321bb4:
    // 0x321bb4: 0x0  nop
    ctx->pc = 0x321bb4u;
    // NOP
label_321bb8:
    // 0x321bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x321bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_321bbc:
    // 0x321bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x321bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_321bc0:
    // 0x321bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_321bc4:
    // 0x321bc4: 0x3e00008  jr          $ra
label_321bc8:
    if (ctx->pc == 0x321BC8u) {
        ctx->pc = 0x321BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BC4u;
        // 0x321bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321BCCu;
        goto label_fallthrough_0x321bc4;
    }
    ctx->pc = 0x321BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BC4u;
        // 0x321bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x321bc4:
    ctx->pc = 0x321BCCu;
}
