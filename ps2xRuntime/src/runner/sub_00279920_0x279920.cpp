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

// Function: sub_00279920
// Address: 0x279920 - 0x279aa8
void sub_00279920_0x279920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279920_0x279920");
#endif

    switch (ctx->pc) {
        case 0x279920u: goto label_279920;
        case 0x279924u: goto label_279924;
        case 0x279928u: goto label_279928;
        case 0x27992cu: goto label_27992c;
        case 0x279930u: goto label_279930;
        case 0x279934u: goto label_279934;
        case 0x279938u: goto label_279938;
        case 0x27993cu: goto label_27993c;
        case 0x279940u: goto label_279940;
        case 0x279944u: goto label_279944;
        case 0x279948u: goto label_279948;
        case 0x27994cu: goto label_27994c;
        case 0x279950u: goto label_279950;
        case 0x279954u: goto label_279954;
        case 0x279958u: goto label_279958;
        case 0x27995cu: goto label_27995c;
        case 0x279960u: goto label_279960;
        case 0x279964u: goto label_279964;
        case 0x279968u: goto label_279968;
        case 0x27996cu: goto label_27996c;
        case 0x279970u: goto label_279970;
        case 0x279974u: goto label_279974;
        case 0x279978u: goto label_279978;
        case 0x27997cu: goto label_27997c;
        case 0x279980u: goto label_279980;
        case 0x279984u: goto label_279984;
        case 0x279988u: goto label_279988;
        case 0x27998cu: goto label_27998c;
        case 0x279990u: goto label_279990;
        case 0x279994u: goto label_279994;
        case 0x279998u: goto label_279998;
        case 0x27999cu: goto label_27999c;
        case 0x2799a0u: goto label_2799a0;
        case 0x2799a4u: goto label_2799a4;
        case 0x2799a8u: goto label_2799a8;
        case 0x2799acu: goto label_2799ac;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799b4u: goto label_2799b4;
        case 0x2799b8u: goto label_2799b8;
        case 0x2799bcu: goto label_2799bc;
        case 0x2799c0u: goto label_2799c0;
        case 0x2799c4u: goto label_2799c4;
        case 0x2799c8u: goto label_2799c8;
        case 0x2799ccu: goto label_2799cc;
        case 0x2799d0u: goto label_2799d0;
        case 0x2799d4u: goto label_2799d4;
        case 0x2799d8u: goto label_2799d8;
        case 0x2799dcu: goto label_2799dc;
        case 0x2799e0u: goto label_2799e0;
        case 0x2799e4u: goto label_2799e4;
        case 0x2799e8u: goto label_2799e8;
        case 0x2799ecu: goto label_2799ec;
        case 0x2799f0u: goto label_2799f0;
        case 0x2799f4u: goto label_2799f4;
        case 0x2799f8u: goto label_2799f8;
        case 0x2799fcu: goto label_2799fc;
        case 0x279a00u: goto label_279a00;
        case 0x279a04u: goto label_279a04;
        case 0x279a08u: goto label_279a08;
        case 0x279a0cu: goto label_279a0c;
        case 0x279a10u: goto label_279a10;
        case 0x279a14u: goto label_279a14;
        case 0x279a18u: goto label_279a18;
        case 0x279a1cu: goto label_279a1c;
        case 0x279a20u: goto label_279a20;
        case 0x279a24u: goto label_279a24;
        case 0x279a28u: goto label_279a28;
        case 0x279a2cu: goto label_279a2c;
        case 0x279a30u: goto label_279a30;
        case 0x279a34u: goto label_279a34;
        case 0x279a38u: goto label_279a38;
        case 0x279a3cu: goto label_279a3c;
        case 0x279a40u: goto label_279a40;
        case 0x279a44u: goto label_279a44;
        case 0x279a48u: goto label_279a48;
        case 0x279a4cu: goto label_279a4c;
        case 0x279a50u: goto label_279a50;
        case 0x279a54u: goto label_279a54;
        case 0x279a58u: goto label_279a58;
        case 0x279a5cu: goto label_279a5c;
        case 0x279a60u: goto label_279a60;
        case 0x279a64u: goto label_279a64;
        case 0x279a68u: goto label_279a68;
        case 0x279a6cu: goto label_279a6c;
        case 0x279a70u: goto label_279a70;
        case 0x279a74u: goto label_279a74;
        case 0x279a78u: goto label_279a78;
        case 0x279a7cu: goto label_279a7c;
        case 0x279a80u: goto label_279a80;
        case 0x279a84u: goto label_279a84;
        case 0x279a88u: goto label_279a88;
        case 0x279a8cu: goto label_279a8c;
        case 0x279a90u: goto label_279a90;
        case 0x279a94u: goto label_279a94;
        case 0x279a98u: goto label_279a98;
        case 0x279a9cu: goto label_279a9c;
        case 0x279aa0u: goto label_279aa0;
        case 0x279aa4u: goto label_279aa4;
        default: break;
    }

    ctx->pc = 0x279920u;

label_279920:
    // 0x279920: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x279920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_279924:
    // 0x279924: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x279924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_279928:
    // 0x279928: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x279928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27992c:
    // 0x27992c: 0x246341d0  addiu       $v1, $v1, 0x41D0
    ctx->pc = 0x27992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16848));
label_279930:
    // 0x279930: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x279930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_279934:
    // 0x279934: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x279934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_279938:
    // 0x279938: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x279938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27993c:
    // 0x27993c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_279940:
    // 0x279940: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x279940u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_279944:
    // 0x279944: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x279944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_279948:
    // 0x279948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x279948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27994c:
    // 0x27994c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_279950:
    // 0x279950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_279954:
    // 0x279954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_279958:
    // 0x279958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27995c:
    // 0x27995c: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x27995cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_279960:
    // 0x279960: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x279960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_279964:
    // 0x279964: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x279964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_279968:
    // 0x279968: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x279968u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_27996c:
    // 0x27996c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x27996cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_279970:
    // 0x279970: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x279970u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_279974:
    // 0x279974: 0x246341e0  addiu       $v1, $v1, 0x41E0
    ctx->pc = 0x279974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16864));
label_279978:
    // 0x279978: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x279978u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_27997c:
    // 0x27997c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x27997cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_279980:
    // 0x279980: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x279980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_279984:
    // 0x279984: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
label_279988:
    if (ctx->pc == 0x279988u) {
        ctx->pc = 0x27998Cu;
        goto label_27998c;
    }
    ctx->pc = 0x279984u;
    {
        const bool branch_taken_0x279984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x279984) {
            ctx->pc = 0x279A78u;
            goto label_279a78;
        }
    }
    ctx->pc = 0x27998Cu;
label_27998c:
    // 0x27998c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x27998cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_279990:
    // 0x279990: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x279990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_279994:
    // 0x279994: 0xc049fd2  jal         func_127F48
label_279998:
    if (ctx->pc == 0x279998u) {
        ctx->pc = 0x279998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279994u;
        // 0x279998: 0x24a56098  addiu       $a1, $a1, 0x6098 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27999Cu;
        goto label_27999c;
    }
    ctx->pc = 0x279994u;
    SET_GPR_U32(ctx, 31, 0x27999Cu);
    ctx->pc = 0x279998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279994u;
    // 0x279998: 0x24a56098  addiu       $a1, $a1, 0x6098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x279994u, 0x27999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27999Cu;
label_27999c:
    // 0x27999c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_2799a0:
    if (ctx->pc == 0x2799A0u) {
        ctx->pc = 0x2799A4u;
        goto label_2799a4;
    }
    ctx->pc = 0x27999Cu;
    {
        const bool branch_taken_0x27999c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27999c) {
            ctx->pc = 0x279A78u;
            goto label_279a78;
        }
    }
    ctx->pc = 0x2799A4u;
label_2799a4:
    // 0x2799a4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2799a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2799a8:
    // 0x2799a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2799a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2799ac:
    // 0x2799ac: 0x8fb200ac  lw          $s2, 0xAC($sp)
    ctx->pc = 0x2799acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2799b0:
    // 0x2799b0: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2799b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2799b4:
    // 0x2799b4: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x2799b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2799b8:
    // 0x2799b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2799b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2799bc:
    // 0x2799bc: 0x602027  not         $a0, $v1
    ctx->pc = 0x2799bcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_2799c0:
    // 0x2799c0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2799c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2799c4:
    // 0x2799c4: 0x2e4f024  and         $fp, $s7, $a0
    ctx->pc = 0x2799c4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
label_2799c8:
    // 0x2799c8: 0xac770008  sw          $s7, 0x8($v1)
    ctx->pc = 0x2799c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 23));
label_2799cc:
    // 0x2799cc: 0x0  nop
    ctx->pc = 0x2799ccu;
    // NOP
label_2799d0:
    // 0x2799d0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2799d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2799d4:
    // 0x2799d4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_2799d8:
    if (ctx->pc == 0x2799D8u) {
        ctx->pc = 0x2799D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799D4u;
        // 0x2799d8: 0x24750020  addiu       $s5, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2799DCu;
        goto label_2799dc;
    }
    ctx->pc = 0x2799D4u;
    {
        const bool branch_taken_0x2799d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2799D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799D4u;
        // 0x2799d8: 0x24750020  addiu       $s5, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799d4) {
            ctx->pc = 0x279A60u;
            goto label_279a60;
        }
    }
    ctx->pc = 0x2799DCu;
label_2799dc:
    // 0x2799dc: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
label_2799e0:
    if (ctx->pc == 0x2799E0u) {
        ctx->pc = 0x2799E4u;
        goto label_2799e4;
    }
    ctx->pc = 0x2799DCu;
    {
        const bool branch_taken_0x2799dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799dc) {
            ctx->pc = 0x279A60u;
            goto label_279a60;
        }
    }
    ctx->pc = 0x2799E4u;
label_2799e4:
    // 0x2799e4: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x2799e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2799e8:
    // 0x2799e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2799e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2799ec:
    // 0x2799ec: 0x283b021  addu        $s6, $s4, $v1
    ctx->pc = 0x2799ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2799f0:
    // 0x2799f0: 0x296082a  slt         $at, $s4, $s6
    ctx->pc = 0x2799f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2799f4:
    // 0x2799f4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_2799f8:
    if (ctx->pc == 0x2799F8u) {
        ctx->pc = 0x2799FCu;
        goto label_2799fc;
    }
    ctx->pc = 0x2799F4u;
    {
        const bool branch_taken_0x2799f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2799f4) {
            ctx->pc = 0x279A60u;
            goto label_279a60;
        }
    }
    ctx->pc = 0x2799FCu;
label_2799fc:
    // 0x2799fc: 0x0  nop
    ctx->pc = 0x2799fcu;
    // NOP
label_279a00:
    // 0x279a00: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x279a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_279a04:
    // 0x279a04: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x279a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_279a08:
    // 0x279a08: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x279a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_279a0c:
    // 0x279a0c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x279a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_279a10:
    // 0x279a10: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_279a14:
    if (ctx->pc == 0x279A14u) {
        ctx->pc = 0x279A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A10u;
        // 0x279a14: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A18u;
        goto label_279a18;
    }
    ctx->pc = 0x279A10u;
    {
        const bool branch_taken_0x279a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A10u;
        // 0x279a14: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a10) {
            ctx->pc = 0x279A50u;
            goto label_279a50;
        }
    }
    ctx->pc = 0x279A18u;
label_279a18:
    // 0x279a18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279a1c:
    // 0x279a1c: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x279a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_279a20:
    // 0x279a20: 0x2e41824  and         $v1, $s7, $a0
    ctx->pc = 0x279a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
label_279a24:
    // 0x279a24: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_279a28:
    if (ctx->pc == 0x279A28u) {
        ctx->pc = 0x279A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A24u;
        // 0x279a28: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A2Cu;
        goto label_279a2c;
    }
    ctx->pc = 0x279A24u;
    {
        const bool branch_taken_0x279a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A24u;
        // 0x279a28: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a24) {
            ctx->pc = 0x279A50u;
            goto label_279a50;
        }
    }
    ctx->pc = 0x279A2Cu;
label_279a2c:
    // 0x279a2c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x279a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_279a30:
    // 0x279a30: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x279a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_279a34:
    // 0x279a34: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_279a38:
    if (ctx->pc == 0x279A38u) {
        ctx->pc = 0x279A3Cu;
        goto label_279a3c;
    }
    ctx->pc = 0x279A34u;
    {
        const bool branch_taken_0x279a34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x279a34) {
            ctx->pc = 0x279A50u;
            goto label_279a50;
        }
    }
    ctx->pc = 0x279A3Cu;
label_279a3c:
    // 0x279a3c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x279a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_279a40:
    // 0x279a40: 0x3c41024  and         $v0, $fp, $a0
    ctx->pc = 0x279a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 4));
label_279a44:
    // 0x279a44: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x279a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_279a48:
    // 0x279a48: 0xe0f809  jalr        $a3
label_279a4c:
    if (ctx->pc == 0x279A4Cu) {
        ctx->pc = 0x279A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A48u;
        // 0x279a4c: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A50u;
        goto label_279a50;
    }
    ctx->pc = 0x279A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x279A50u);
        ctx->pc = 0x279A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A48u;
        // 0x279a4c: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A48u, 0x279A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279A50u;
label_279a50:
    // 0x279a50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x279a50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_279a54:
    // 0x279a54: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x279a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_279a58:
    // 0x279a58: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_279a5c:
    if (ctx->pc == 0x279A5Cu) {
        ctx->pc = 0x279A60u;
        goto label_279a60;
    }
    ctx->pc = 0x279A58u;
    {
        const bool branch_taken_0x279a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279a58) {
            ctx->pc = 0x279A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279a00;
        }
    }
    ctx->pc = 0x279A60u;
label_279a60:
    // 0x279a60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x279a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_279a64:
    // 0x279a64: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x279a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_279a68:
    // 0x279a68: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x279a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_279a6c:
    // 0x279a6c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x279a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_279a70:
    // 0x279a70: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_279a74:
    if (ctx->pc == 0x279A74u) {
        ctx->pc = 0x279A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A70u;
        // 0x279a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A78u;
        goto label_279a78;
    }
    ctx->pc = 0x279A70u;
    {
        const bool branch_taken_0x279a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A70u;
        // 0x279a74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279a70) {
            ctx->pc = 0x2799D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2799d0;
        }
    }
    ctx->pc = 0x279A78u;
label_279a78:
    // 0x279a78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x279a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_279a7c:
    // 0x279a7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x279a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_279a80:
    // 0x279a80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x279a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_279a84:
    // 0x279a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x279a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_279a88:
    // 0x279a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x279a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_279a8c:
    // 0x279a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x279a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_279a90:
    // 0x279a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x279a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279a94:
    // 0x279a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279a98:
    // 0x279a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279a9c:
    // 0x279a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_279aa0:
    // 0x279aa0: 0x3e00008  jr          $ra
label_279aa4:
    if (ctx->pc == 0x279AA4u) {
        ctx->pc = 0x279AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AA0u;
        // 0x279aa4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279AA8u;
        goto label_fallthrough_0x279aa0;
    }
    ctx->pc = 0x279AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AA0u;
        // 0x279aa4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x279aa0:
    ctx->pc = 0x279AA8u;
}
