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

// Function: sub_0038A950
// Address: 0x38a950 - 0x38ab70
void sub_0038A950_0x38a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A950_0x38a950");
#endif

    switch (ctx->pc) {
        case 0x38a950u: goto label_38a950;
        case 0x38a954u: goto label_38a954;
        case 0x38a958u: goto label_38a958;
        case 0x38a95cu: goto label_38a95c;
        case 0x38a960u: goto label_38a960;
        case 0x38a964u: goto label_38a964;
        case 0x38a968u: goto label_38a968;
        case 0x38a96cu: goto label_38a96c;
        case 0x38a970u: goto label_38a970;
        case 0x38a974u: goto label_38a974;
        case 0x38a978u: goto label_38a978;
        case 0x38a97cu: goto label_38a97c;
        case 0x38a980u: goto label_38a980;
        case 0x38a984u: goto label_38a984;
        case 0x38a988u: goto label_38a988;
        case 0x38a98cu: goto label_38a98c;
        case 0x38a990u: goto label_38a990;
        case 0x38a994u: goto label_38a994;
        case 0x38a998u: goto label_38a998;
        case 0x38a99cu: goto label_38a99c;
        case 0x38a9a0u: goto label_38a9a0;
        case 0x38a9a4u: goto label_38a9a4;
        case 0x38a9a8u: goto label_38a9a8;
        case 0x38a9acu: goto label_38a9ac;
        case 0x38a9b0u: goto label_38a9b0;
        case 0x38a9b4u: goto label_38a9b4;
        case 0x38a9b8u: goto label_38a9b8;
        case 0x38a9bcu: goto label_38a9bc;
        case 0x38a9c0u: goto label_38a9c0;
        case 0x38a9c4u: goto label_38a9c4;
        case 0x38a9c8u: goto label_38a9c8;
        case 0x38a9ccu: goto label_38a9cc;
        case 0x38a9d0u: goto label_38a9d0;
        case 0x38a9d4u: goto label_38a9d4;
        case 0x38a9d8u: goto label_38a9d8;
        case 0x38a9dcu: goto label_38a9dc;
        case 0x38a9e0u: goto label_38a9e0;
        case 0x38a9e4u: goto label_38a9e4;
        case 0x38a9e8u: goto label_38a9e8;
        case 0x38a9ecu: goto label_38a9ec;
        case 0x38a9f0u: goto label_38a9f0;
        case 0x38a9f4u: goto label_38a9f4;
        case 0x38a9f8u: goto label_38a9f8;
        case 0x38a9fcu: goto label_38a9fc;
        case 0x38aa00u: goto label_38aa00;
        case 0x38aa04u: goto label_38aa04;
        case 0x38aa08u: goto label_38aa08;
        case 0x38aa0cu: goto label_38aa0c;
        case 0x38aa10u: goto label_38aa10;
        case 0x38aa14u: goto label_38aa14;
        case 0x38aa18u: goto label_38aa18;
        case 0x38aa1cu: goto label_38aa1c;
        case 0x38aa20u: goto label_38aa20;
        case 0x38aa24u: goto label_38aa24;
        case 0x38aa28u: goto label_38aa28;
        case 0x38aa2cu: goto label_38aa2c;
        case 0x38aa30u: goto label_38aa30;
        case 0x38aa34u: goto label_38aa34;
        case 0x38aa38u: goto label_38aa38;
        case 0x38aa3cu: goto label_38aa3c;
        case 0x38aa40u: goto label_38aa40;
        case 0x38aa44u: goto label_38aa44;
        case 0x38aa48u: goto label_38aa48;
        case 0x38aa4cu: goto label_38aa4c;
        case 0x38aa50u: goto label_38aa50;
        case 0x38aa54u: goto label_38aa54;
        case 0x38aa58u: goto label_38aa58;
        case 0x38aa5cu: goto label_38aa5c;
        case 0x38aa60u: goto label_38aa60;
        case 0x38aa64u: goto label_38aa64;
        case 0x38aa68u: goto label_38aa68;
        case 0x38aa6cu: goto label_38aa6c;
        case 0x38aa70u: goto label_38aa70;
        case 0x38aa74u: goto label_38aa74;
        case 0x38aa78u: goto label_38aa78;
        case 0x38aa7cu: goto label_38aa7c;
        case 0x38aa80u: goto label_38aa80;
        case 0x38aa84u: goto label_38aa84;
        case 0x38aa88u: goto label_38aa88;
        case 0x38aa8cu: goto label_38aa8c;
        case 0x38aa90u: goto label_38aa90;
        case 0x38aa94u: goto label_38aa94;
        case 0x38aa98u: goto label_38aa98;
        case 0x38aa9cu: goto label_38aa9c;
        case 0x38aaa0u: goto label_38aaa0;
        case 0x38aaa4u: goto label_38aaa4;
        case 0x38aaa8u: goto label_38aaa8;
        case 0x38aaacu: goto label_38aaac;
        case 0x38aab0u: goto label_38aab0;
        case 0x38aab4u: goto label_38aab4;
        case 0x38aab8u: goto label_38aab8;
        case 0x38aabcu: goto label_38aabc;
        case 0x38aac0u: goto label_38aac0;
        case 0x38aac4u: goto label_38aac4;
        case 0x38aac8u: goto label_38aac8;
        case 0x38aaccu: goto label_38aacc;
        case 0x38aad0u: goto label_38aad0;
        case 0x38aad4u: goto label_38aad4;
        case 0x38aad8u: goto label_38aad8;
        case 0x38aadcu: goto label_38aadc;
        case 0x38aae0u: goto label_38aae0;
        case 0x38aae4u: goto label_38aae4;
        case 0x38aae8u: goto label_38aae8;
        case 0x38aaecu: goto label_38aaec;
        case 0x38aaf0u: goto label_38aaf0;
        case 0x38aaf4u: goto label_38aaf4;
        case 0x38aaf8u: goto label_38aaf8;
        case 0x38aafcu: goto label_38aafc;
        case 0x38ab00u: goto label_38ab00;
        case 0x38ab04u: goto label_38ab04;
        case 0x38ab08u: goto label_38ab08;
        case 0x38ab0cu: goto label_38ab0c;
        case 0x38ab10u: goto label_38ab10;
        case 0x38ab14u: goto label_38ab14;
        case 0x38ab18u: goto label_38ab18;
        case 0x38ab1cu: goto label_38ab1c;
        case 0x38ab20u: goto label_38ab20;
        case 0x38ab24u: goto label_38ab24;
        case 0x38ab28u: goto label_38ab28;
        case 0x38ab2cu: goto label_38ab2c;
        case 0x38ab30u: goto label_38ab30;
        case 0x38ab34u: goto label_38ab34;
        case 0x38ab38u: goto label_38ab38;
        case 0x38ab3cu: goto label_38ab3c;
        case 0x38ab40u: goto label_38ab40;
        case 0x38ab44u: goto label_38ab44;
        case 0x38ab48u: goto label_38ab48;
        case 0x38ab4cu: goto label_38ab4c;
        case 0x38ab50u: goto label_38ab50;
        case 0x38ab54u: goto label_38ab54;
        case 0x38ab58u: goto label_38ab58;
        case 0x38ab5cu: goto label_38ab5c;
        case 0x38ab60u: goto label_38ab60;
        case 0x38ab64u: goto label_38ab64;
        case 0x38ab68u: goto label_38ab68;
        case 0x38ab6cu: goto label_38ab6c;
        default: break;
    }

    ctx->pc = 0x38a950u;

label_38a950:
    // 0x38a950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38a954:
    // 0x38a954: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38a958:
    // 0x38a958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38a95c:
    // 0x38a95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38a960:
    // 0x38a960: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x38a960u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
label_38a964:
    // 0x38a964: 0x10a3007a  beq         $a1, $v1, . + 4 + (0x7A << 2)
label_38a968:
    if (ctx->pc == 0x38A968u) {
        ctx->pc = 0x38A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A964u;
        // 0x38a968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A96Cu;
        goto label_38a96c;
    }
    ctx->pc = 0x38A964u;
    {
        const bool branch_taken_0x38a964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A964u;
        // 0x38a968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a964) {
            ctx->pc = 0x38AB50u;
            goto label_38ab50;
        }
    }
    ctx->pc = 0x38A96Cu;
label_38a96c:
    // 0x38a96c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38a970:
    // 0x38a970: 0x10a30059  beq         $a1, $v1, . + 4 + (0x59 << 2)
label_38a974:
    if (ctx->pc == 0x38A974u) {
        ctx->pc = 0x38A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A970u;
        // 0x38a974: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A978u;
        goto label_38a978;
    }
    ctx->pc = 0x38A970u;
    {
        const bool branch_taken_0x38a970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A970u;
        // 0x38a974: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a970) {
            ctx->pc = 0x38AAD8u;
            goto label_38aad8;
        }
    }
    ctx->pc = 0x38A978u;
label_38a978:
    // 0x38a978: 0x10a30047  beq         $a1, $v1, . + 4 + (0x47 << 2)
label_38a97c:
    if (ctx->pc == 0x38A97Cu) {
        ctx->pc = 0x38A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A978u;
        // 0x38a97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A980u;
        goto label_38a980;
    }
    ctx->pc = 0x38A978u;
    {
        const bool branch_taken_0x38a978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A978u;
        // 0x38a97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a978) {
            ctx->pc = 0x38AA98u;
            goto label_38aa98;
        }
    }
    ctx->pc = 0x38A980u;
label_38a980:
    // 0x38a980: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
label_38a984:
    if (ctx->pc == 0x38A984u) {
        ctx->pc = 0x38A988u;
        goto label_38a988;
    }
    ctx->pc = 0x38A980u;
    {
        const bool branch_taken_0x38a980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x38a980) {
            ctx->pc = 0x38A9C0u;
            goto label_38a9c0;
        }
    }
    ctx->pc = 0x38A988u;
label_38a988:
    // 0x38a988: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_38a98c:
    if (ctx->pc == 0x38A98Cu) {
        ctx->pc = 0x38A990u;
        goto label_38a990;
    }
    ctx->pc = 0x38A988u;
    {
        const bool branch_taken_0x38a988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a988) {
            ctx->pc = 0x38A998u;
            goto label_38a998;
        }
    }
    ctx->pc = 0x38A990u;
label_38a990:
    // 0x38a990: 0x10000073  b           . + 4 + (0x73 << 2)
label_38a994:
    if (ctx->pc == 0x38A994u) {
        ctx->pc = 0x38A998u;
        goto label_38a998;
    }
    ctx->pc = 0x38A990u;
    {
        const bool branch_taken_0x38a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a990) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38A998u;
label_38a998:
    // 0x38a998: 0x92032ad0  lbu         $v1, 0x2AD0($s0)
    ctx->pc = 0x38a998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10960)));
label_38a99c:
    // 0x38a99c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38a9a0:
    // 0x38a9a0: 0xa2032ac0  sb          $v1, 0x2AC0($s0)
    ctx->pc = 0x38a9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10944), (uint8_t)GPR_U32(ctx, 3));
label_38a9a4:
    // 0x38a9a4: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x38a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_38a9a8:
    // 0x38a9a8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x38a9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_38a9ac:
    // 0x38a9ac: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_38a9b0:
    if (ctx->pc == 0x38A9B0u) {
        ctx->pc = 0x38A9B4u;
        goto label_38a9b4;
    }
    ctx->pc = 0x38A9ACu;
    {
        const bool branch_taken_0x38a9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a9ac) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38A9B4u;
label_38a9b4:
    // 0x38a9b4: 0x1000006a  b           . + 4 + (0x6A << 2)
label_38a9b8:
    if (ctx->pc == 0x38A9B8u) {
        ctx->pc = 0x38A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9B4u;
        // 0x38a9b8: 0xa2040118  sb          $a0, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A9BCu;
        goto label_38a9bc;
    }
    ctx->pc = 0x38A9B4u;
    {
        const bool branch_taken_0x38a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9B4u;
        // 0x38a9b8: 0xa2040118  sb          $a0, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9b4) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38A9BCu;
label_38a9bc:
    // 0x38a9bc: 0x0  nop
    ctx->pc = 0x38a9bcu;
    // NOP
label_38a9c0:
    // 0x38a9c0: 0xc0d16a0  jal         func_345A80
label_38a9c4:
    if (ctx->pc == 0x38A9C4u) {
        ctx->pc = 0x38A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9C0u;
        // 0x38a9c4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A9C8u;
        goto label_38a9c8;
    }
    ctx->pc = 0x38A9C0u;
    SET_GPR_U32(ctx, 31, 0x38A9C8u);
    ctx->pc = 0x38A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A9C0u;
    // 0x38a9c4: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A80u, 0x38A9C0u, 0x38A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A9C8u;
label_38a9c8:
    // 0x38a9c8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x38a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_38a9cc:
    // 0x38a9cc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x38a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_38a9d0:
    // 0x38a9d0: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x38a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_38a9d4:
    // 0x38a9d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x38a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_38a9d8:
    // 0x38a9d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x38a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_38a9dc:
    // 0x38a9dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x38a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_38a9e0:
    // 0x38a9e0: 0x96052ace  lhu         $a1, 0x2ACE($s0)
    ctx->pc = 0x38a9e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10958)));
label_38a9e4:
    // 0x38a9e4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38a9e8:
    // 0x38a9e8: 0xc0d165c  jal         func_345970
label_38a9ec:
    if (ctx->pc == 0x38A9ECu) {
        ctx->pc = 0x38A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9E8u;
        // 0x38a9ec: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A9F0u;
        goto label_38a9f0;
    }
    ctx->pc = 0x38A9E8u;
    SET_GPR_U32(ctx, 31, 0x38A9F0u);
    ctx->pc = 0x38A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A9E8u;
    // 0x38a9ec: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38A9E8u, 0x38A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A9F0u;
label_38a9f0:
    // 0x38a9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38a9f4:
    // 0x38a9f4: 0xc0d0548  jal         func_341520
label_38a9f8:
    if (ctx->pc == 0x38A9F8u) {
        ctx->pc = 0x38A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9F4u;
        // 0x38a9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38A9FCu;
        goto label_38a9fc;
    }
    ctx->pc = 0x38A9F4u;
    SET_GPR_U32(ctx, 31, 0x38A9FCu);
    ctx->pc = 0x38A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A9F4u;
    // 0x38a9f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x38A9F4u, 0x38A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A9FCu;
label_38a9fc:
    // 0x38a9fc: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x38a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
label_38aa00:
    // 0x38aa00: 0xc053b28  jal         func_14ECA0
label_38aa04:
    if (ctx->pc == 0x38AA04u) {
        ctx->pc = 0x38AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA00u;
        // 0x38aa04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AA08u;
        goto label_38aa08;
    }
    ctx->pc = 0x38AA00u;
    SET_GPR_U32(ctx, 31, 0x38AA08u);
    ctx->pc = 0x38AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA00u;
    // 0x38aa04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x38AA00u, 0x38AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA08u;
label_38aa08:
    // 0x38aa08: 0x96052acc  lhu         $a1, 0x2ACC($s0)
    ctx->pc = 0x38aa08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
label_38aa0c:
    // 0x38aa0c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x38aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
label_38aa10:
    // 0x38aa10: 0xc056e04  jal         func_15B810
label_38aa14:
    if (ctx->pc == 0x38AA14u) {
        ctx->pc = 0x38AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA10u;
        // 0x38aa14: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AA18u;
        goto label_38aa18;
    }
    ctx->pc = 0x38AA10u;
    SET_GPR_U32(ctx, 31, 0x38AA18u);
    ctx->pc = 0x38AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA10u;
    // 0x38aa14: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x38AA10u, 0x38AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA18u;
label_38aa18:
    // 0x38aa18: 0xc0d0538  jal         func_3414E0
label_38aa1c:
    if (ctx->pc == 0x38AA1Cu) {
        ctx->pc = 0x38AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA18u;
        // 0x38aa1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AA20u;
        goto label_38aa20;
    }
    ctx->pc = 0x38AA18u;
    SET_GPR_U32(ctx, 31, 0x38AA20u);
    ctx->pc = 0x38AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA18u;
    // 0x38aa1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3414E0u, 0x38AA18u, 0x38AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA20u;
label_38aa20:
    // 0x38aa20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38aa24:
    // 0x38aa24: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x38aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_38aa28:
    // 0x38aa28: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x38aa28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
label_38aa2c:
    // 0x38aa2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x38aa2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_38aa30:
    // 0x38aa30: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38aa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38aa34:
    // 0x38aa34: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_38aa38:
    // 0x38aa38: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x38aa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_38aa3c:
    // 0x38aa3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_38aa40:
    // 0x38aa40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38aa40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38aa44:
    // 0x38aa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38aa48:
    // 0x38aa48: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x38aa48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_38aa4c:
    // 0x38aa4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38aa4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_38aa50:
    // 0x38aa50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38aa50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38aa54:
    // 0x38aa54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_38aa58:
    if (ctx->pc == 0x38AA58u) {
        ctx->pc = 0x38AA5Cu;
        goto label_38aa5c;
    }
    ctx->pc = 0x38AA54u;
    {
        const bool branch_taken_0x38aa54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38aa54) {
            ctx->pc = 0x38AA6Cu;
            goto label_38aa6c;
        }
    }
    ctx->pc = 0x38AA5Cu;
label_38aa5c:
    // 0x38aa5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38aa5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38aa60:
    // 0x38aa60: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x38aa60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_38aa64:
    // 0x38aa64: 0x10000008  b           . + 4 + (0x8 << 2)
label_38aa68:
    if (ctx->pc == 0x38AA68u) {
        ctx->pc = 0x38AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA64u;
        // 0x38aa68: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AA6Cu;
        goto label_38aa6c;
    }
    ctx->pc = 0x38AA64u;
    {
        const bool branch_taken_0x38aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA64u;
        // 0x38aa68: 0x8e020144  lw          $v0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa64) {
            ctx->pc = 0x38AA88u;
            goto label_38aa88;
        }
    }
    ctx->pc = 0x38AA6Cu;
label_38aa6c:
    // 0x38aa6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38aa6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_38aa70:
    // 0x38aa70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38aa74:
    // 0x38aa74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38aa74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_38aa78:
    // 0x38aa78: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x38aa78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_38aa7c:
    // 0x38aa7c: 0x0  nop
    ctx->pc = 0x38aa7cu;
    // NOP
label_38aa80:
    // 0x38aa80: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x38aa80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_38aa84:
    // 0x38aa84: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38aa88:
    // 0x38aa88: 0xc0d0ae8  jal         func_342BA0
label_38aa8c:
    if (ctx->pc == 0x38AA8Cu) {
        ctx->pc = 0x38AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA88u;
        // 0x38aa8c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AA90u;
        goto label_38aa90;
    }
    ctx->pc = 0x38AA88u;
    SET_GPR_U32(ctx, 31, 0x38AA90u);
    ctx->pc = 0x38AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA88u;
    // 0x38aa8c: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38AA88u, 0x38AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA90u;
label_38aa90:
    // 0x38aa90: 0x10000033  b           . + 4 + (0x33 << 2)
label_38aa94:
    if (ctx->pc == 0x38AA94u) {
        ctx->pc = 0x38AA98u;
        goto label_38aa98;
    }
    ctx->pc = 0x38AA90u;
    {
        const bool branch_taken_0x38aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aa90) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38AA98u;
label_38aa98:
    // 0x38aa98: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38aa9c:
    // 0x38aa9c: 0xc0d0b00  jal         func_342C00
label_38aaa0:
    if (ctx->pc == 0x38AAA0u) {
        ctx->pc = 0x38AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA9Cu;
        // 0x38aaa0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AAA4u;
        goto label_38aaa4;
    }
    ctx->pc = 0x38AA9Cu;
    SET_GPR_U32(ctx, 31, 0x38AAA4u);
    ctx->pc = 0x38AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA9Cu;
    // 0x38aaa0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x38AA9Cu, 0x38AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAA4u;
label_38aaa4:
    // 0x38aaa4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38aaa8:
    // 0x38aaa8: 0xc0d0af4  jal         func_342BD0
label_38aaac:
    if (ctx->pc == 0x38AAACu) {
        ctx->pc = 0x38AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAA8u;
        // 0x38aaac: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AAB0u;
        goto label_38aab0;
    }
    ctx->pc = 0x38AAA8u;
    SET_GPR_U32(ctx, 31, 0x38AAB0u);
    ctx->pc = 0x38AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAA8u;
    // 0x38aaac: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x38AAA8u, 0x38AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAB0u;
label_38aab0:
    // 0x38aab0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_38aab4:
    if (ctx->pc == 0x38AAB4u) {
        ctx->pc = 0x38AAB8u;
        goto label_38aab8;
    }
    ctx->pc = 0x38AAB0u;
    {
        const bool branch_taken_0x38aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aab0) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38AAB8u;
label_38aab8:
    // 0x38aab8: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38aabc:
    // 0x38aabc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x38aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_38aac0:
    // 0x38aac0: 0xc0d0ae8  jal         func_342BA0
label_38aac4:
    if (ctx->pc == 0x38AAC4u) {
        ctx->pc = 0x38AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAC0u;
        // 0x38aac4: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AAC8u;
        goto label_38aac8;
    }
    ctx->pc = 0x38AAC0u;
    SET_GPR_U32(ctx, 31, 0x38AAC8u);
    ctx->pc = 0x38AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAC0u;
    // 0x38aac4: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x38AAC0u, 0x38AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAC8u;
label_38aac8:
    // 0x38aac8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38aacc:
    // 0x38aacc: 0x10000024  b           . + 4 + (0x24 << 2)
label_38aad0:
    if (ctx->pc == 0x38AAD0u) {
        ctx->pc = 0x38AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AACCu;
        // 0x38aad0: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AAD4u;
        goto label_38aad4;
    }
    ctx->pc = 0x38AACCu;
    {
        const bool branch_taken_0x38aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AACCu;
        // 0x38aad0: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aacc) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38AAD4u;
label_38aad4:
    // 0x38aad4: 0x0  nop
    ctx->pc = 0x38aad4u;
    // NOP
label_38aad8:
    // 0x38aad8: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38aadc:
    // 0x38aadc: 0xc0d0b00  jal         func_342C00
label_38aae0:
    if (ctx->pc == 0x38AAE0u) {
        ctx->pc = 0x38AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AADCu;
        // 0x38aae0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AAE4u;
        goto label_38aae4;
    }
    ctx->pc = 0x38AADCu;
    SET_GPR_U32(ctx, 31, 0x38AAE4u);
    ctx->pc = 0x38AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AADCu;
    // 0x38aae0: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x38AADCu, 0x38AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAE4u;
label_38aae4:
    // 0x38aae4: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38aae8:
    // 0x38aae8: 0xc0d0af4  jal         func_342BD0
label_38aaec:
    if (ctx->pc == 0x38AAECu) {
        ctx->pc = 0x38AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAE8u;
        // 0x38aaec: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AAF0u;
        goto label_38aaf0;
    }
    ctx->pc = 0x38AAE8u;
    SET_GPR_U32(ctx, 31, 0x38AAF0u);
    ctx->pc = 0x38AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAE8u;
    // 0x38aaec: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x38AAE8u, 0x38AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAF0u;
label_38aaf0:
    // 0x38aaf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38aaf4:
    if (ctx->pc == 0x38AAF4u) {
        ctx->pc = 0x38AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAF0u;
        // 0x38aaf4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AAF8u;
        goto label_38aaf8;
    }
    ctx->pc = 0x38AAF0u;
    {
        const bool branch_taken_0x38aaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAF0u;
        // 0x38aaf4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aaf0) {
            ctx->pc = 0x38AB00u;
            goto label_38ab00;
        }
    }
    ctx->pc = 0x38AAF8u;
label_38aaf8:
    // 0x38aaf8: 0x10000019  b           . + 4 + (0x19 << 2)
label_38aafc:
    if (ctx->pc == 0x38AAFCu) {
        ctx->pc = 0x38AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAF8u;
        // 0x38aafc: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AB00u;
        goto label_38ab00;
    }
    ctx->pc = 0x38AAF8u;
    {
        const bool branch_taken_0x38aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAF8u;
        // 0x38aafc: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aaf8) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38AB00u;
label_38ab00:
    // 0x38ab00: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x38ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_38ab04:
    // 0x38ab04: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x38ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_38ab08:
    // 0x38ab08: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x38ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_38ab0c:
    // 0x38ab0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38ab0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38ab10:
    // 0x38ab10: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x38ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_38ab14:
    // 0x38ab14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ab14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38ab18:
    // 0x38ab18: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x38ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38ab1c:
    // 0x38ab1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x38ab1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_38ab20:
    // 0x38ab20: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x38ab20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_38ab24:
    // 0x38ab24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38ab24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_38ab28:
    // 0x38ab28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38ab28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_38ab2c:
    // 0x38ab2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38ab2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_38ab30:
    // 0x38ab30: 0x0  nop
    ctx->pc = 0x38ab30u;
    // NOP
label_38ab34:
    // 0x38ab34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38ab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_38ab38:
    // 0x38ab38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38ab38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_38ab3c:
    // 0x38ab3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_38ab40:
    // 0x38ab40: 0xc0a85ec  jal         func_2A17B0
label_38ab44:
    if (ctx->pc == 0x38AB44u) {
        ctx->pc = 0x38AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB40u;
        // 0x38ab44: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AB48u;
        goto label_38ab48;
    }
    ctx->pc = 0x38AB40u;
    SET_GPR_U32(ctx, 31, 0x38AB48u);
    ctx->pc = 0x38AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AB40u;
    // 0x38ab44: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x38AB40u, 0x38AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AB48u;
label_38ab48:
    // 0x38ab48: 0x10000005  b           . + 4 + (0x5 << 2)
label_38ab4c:
    if (ctx->pc == 0x38AB4Cu) {
        ctx->pc = 0x38AB50u;
        goto label_38ab50;
    }
    ctx->pc = 0x38AB48u;
    {
        const bool branch_taken_0x38ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ab48) {
            ctx->pc = 0x38AB60u;
            goto label_38ab60;
        }
    }
    ctx->pc = 0x38AB50u;
label_38ab50:
    // 0x38ab50: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x38ab50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_38ab54:
    // 0x38ab54: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x38ab54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_38ab58:
    // 0x38ab58: 0x320f809  jalr        $t9
label_38ab5c:
    if (ctx->pc == 0x38AB5Cu) {
        ctx->pc = 0x38AB60u;
        goto label_38ab60;
    }
    ctx->pc = 0x38AB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38AB60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AB58u, 0x38AB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38AB60u;
label_38ab60:
    // 0x38ab60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38ab64:
    // 0x38ab64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38ab64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38ab68:
    // 0x38ab68: 0x3e00008  jr          $ra
label_38ab6c:
    if (ctx->pc == 0x38AB6Cu) {
        ctx->pc = 0x38AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB68u;
        // 0x38ab6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38AB70u;
        goto label_fallthrough_0x38ab68;
    }
    ctx->pc = 0x38AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB68u;
        // 0x38ab6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38ab68:
    ctx->pc = 0x38AB70u;
}
