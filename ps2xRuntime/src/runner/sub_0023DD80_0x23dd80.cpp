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

// Function: sub_0023DD80
// Address: 0x23dd80 - 0x23dfcc
void sub_0023DD80_0x23dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DD80_0x23dd80");
#endif

    switch (ctx->pc) {
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        case 0x23dda0u: goto label_23dda0;
        case 0x23dda4u: goto label_23dda4;
        case 0x23dda8u: goto label_23dda8;
        case 0x23ddacu: goto label_23ddac;
        case 0x23ddb0u: goto label_23ddb0;
        case 0x23ddb4u: goto label_23ddb4;
        case 0x23ddb8u: goto label_23ddb8;
        case 0x23ddbcu: goto label_23ddbc;
        case 0x23ddc0u: goto label_23ddc0;
        case 0x23ddc4u: goto label_23ddc4;
        case 0x23ddc8u: goto label_23ddc8;
        case 0x23ddccu: goto label_23ddcc;
        case 0x23ddd0u: goto label_23ddd0;
        case 0x23ddd4u: goto label_23ddd4;
        case 0x23ddd8u: goto label_23ddd8;
        case 0x23dddcu: goto label_23dddc;
        case 0x23dde0u: goto label_23dde0;
        case 0x23dde4u: goto label_23dde4;
        case 0x23dde8u: goto label_23dde8;
        case 0x23ddecu: goto label_23ddec;
        case 0x23ddf0u: goto label_23ddf0;
        case 0x23ddf4u: goto label_23ddf4;
        case 0x23ddf8u: goto label_23ddf8;
        case 0x23ddfcu: goto label_23ddfc;
        case 0x23de00u: goto label_23de00;
        case 0x23de04u: goto label_23de04;
        case 0x23de08u: goto label_23de08;
        case 0x23de0cu: goto label_23de0c;
        case 0x23de10u: goto label_23de10;
        case 0x23de14u: goto label_23de14;
        case 0x23de18u: goto label_23de18;
        case 0x23de1cu: goto label_23de1c;
        case 0x23de20u: goto label_23de20;
        case 0x23de24u: goto label_23de24;
        case 0x23de28u: goto label_23de28;
        case 0x23de2cu: goto label_23de2c;
        case 0x23de30u: goto label_23de30;
        case 0x23de34u: goto label_23de34;
        case 0x23de38u: goto label_23de38;
        case 0x23de3cu: goto label_23de3c;
        case 0x23de40u: goto label_23de40;
        case 0x23de44u: goto label_23de44;
        case 0x23de48u: goto label_23de48;
        case 0x23de4cu: goto label_23de4c;
        case 0x23de50u: goto label_23de50;
        case 0x23de54u: goto label_23de54;
        case 0x23de58u: goto label_23de58;
        case 0x23de5cu: goto label_23de5c;
        case 0x23de60u: goto label_23de60;
        case 0x23de64u: goto label_23de64;
        case 0x23de68u: goto label_23de68;
        case 0x23de6cu: goto label_23de6c;
        case 0x23de70u: goto label_23de70;
        case 0x23de74u: goto label_23de74;
        case 0x23de78u: goto label_23de78;
        case 0x23de7cu: goto label_23de7c;
        case 0x23de80u: goto label_23de80;
        case 0x23de84u: goto label_23de84;
        case 0x23de88u: goto label_23de88;
        case 0x23de8cu: goto label_23de8c;
        case 0x23de90u: goto label_23de90;
        case 0x23de94u: goto label_23de94;
        case 0x23de98u: goto label_23de98;
        case 0x23de9cu: goto label_23de9c;
        case 0x23dea0u: goto label_23dea0;
        case 0x23dea4u: goto label_23dea4;
        case 0x23dea8u: goto label_23dea8;
        case 0x23deacu: goto label_23deac;
        case 0x23deb0u: goto label_23deb0;
        case 0x23deb4u: goto label_23deb4;
        case 0x23deb8u: goto label_23deb8;
        case 0x23debcu: goto label_23debc;
        case 0x23dec0u: goto label_23dec0;
        case 0x23dec4u: goto label_23dec4;
        case 0x23dec8u: goto label_23dec8;
        case 0x23deccu: goto label_23decc;
        case 0x23ded0u: goto label_23ded0;
        case 0x23ded4u: goto label_23ded4;
        case 0x23ded8u: goto label_23ded8;
        case 0x23dedcu: goto label_23dedc;
        case 0x23dee0u: goto label_23dee0;
        case 0x23dee4u: goto label_23dee4;
        case 0x23dee8u: goto label_23dee8;
        case 0x23deecu: goto label_23deec;
        case 0x23def0u: goto label_23def0;
        case 0x23def4u: goto label_23def4;
        case 0x23def8u: goto label_23def8;
        case 0x23defcu: goto label_23defc;
        case 0x23df00u: goto label_23df00;
        case 0x23df04u: goto label_23df04;
        case 0x23df08u: goto label_23df08;
        case 0x23df0cu: goto label_23df0c;
        case 0x23df10u: goto label_23df10;
        case 0x23df14u: goto label_23df14;
        case 0x23df18u: goto label_23df18;
        case 0x23df1cu: goto label_23df1c;
        case 0x23df20u: goto label_23df20;
        case 0x23df24u: goto label_23df24;
        case 0x23df28u: goto label_23df28;
        case 0x23df2cu: goto label_23df2c;
        case 0x23df30u: goto label_23df30;
        case 0x23df34u: goto label_23df34;
        case 0x23df38u: goto label_23df38;
        case 0x23df3cu: goto label_23df3c;
        case 0x23df40u: goto label_23df40;
        case 0x23df44u: goto label_23df44;
        case 0x23df48u: goto label_23df48;
        case 0x23df4cu: goto label_23df4c;
        case 0x23df50u: goto label_23df50;
        case 0x23df54u: goto label_23df54;
        case 0x23df58u: goto label_23df58;
        case 0x23df5cu: goto label_23df5c;
        case 0x23df60u: goto label_23df60;
        case 0x23df64u: goto label_23df64;
        case 0x23df68u: goto label_23df68;
        case 0x23df6cu: goto label_23df6c;
        case 0x23df70u: goto label_23df70;
        case 0x23df74u: goto label_23df74;
        case 0x23df78u: goto label_23df78;
        case 0x23df7cu: goto label_23df7c;
        case 0x23df80u: goto label_23df80;
        case 0x23df84u: goto label_23df84;
        case 0x23df88u: goto label_23df88;
        case 0x23df8cu: goto label_23df8c;
        case 0x23df90u: goto label_23df90;
        case 0x23df94u: goto label_23df94;
        case 0x23df98u: goto label_23df98;
        case 0x23df9cu: goto label_23df9c;
        case 0x23dfa0u: goto label_23dfa0;
        case 0x23dfa4u: goto label_23dfa4;
        case 0x23dfa8u: goto label_23dfa8;
        case 0x23dfacu: goto label_23dfac;
        case 0x23dfb0u: goto label_23dfb0;
        case 0x23dfb4u: goto label_23dfb4;
        case 0x23dfb8u: goto label_23dfb8;
        case 0x23dfbcu: goto label_23dfbc;
        case 0x23dfc0u: goto label_23dfc0;
        case 0x23dfc4u: goto label_23dfc4;
        case 0x23dfc8u: goto label_23dfc8;
        default: break;
    }

    ctx->pc = 0x23dd80u;

label_23dd80:
    // 0x23dd80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23dd84:
    // 0x23dd84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23dd88:
    // 0x23dd88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23dd8c:
    // 0x23dd8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23dd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23dd90:
    // 0x23dd90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23dd94:
    // 0x23dd94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23dd98:
    // 0x23dd98: 0x82110001  lb          $s1, 0x1($s0)
    ctx->pc = 0x23dd98u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_23dd9c:
    // 0x23dd9c: 0x56220029  bnel        $s1, $v0, . + 4 + (0x29 << 2)
label_23dda0:
    if (ctx->pc == 0x23DDA0u) {
        ctx->pc = 0x23DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD9Cu;
        // 0x23dda0: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDA4u;
        goto label_23dda4;
    }
    ctx->pc = 0x23DD9Cu;
    {
        const bool branch_taken_0x23dd9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dd9c) {
            ctx->pc = 0x23DDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD9Cu;
            // 0x23dda0: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE44u;
            goto label_23de44;
        }
    }
    ctx->pc = 0x23DDA4u;
label_23dda4:
    // 0x23dda4: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x23dda4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_23dda8:
    // 0x23dda8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_23ddac:
    if (ctx->pc == 0x23DDACu) {
        ctx->pc = 0x23DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDA8u;
        // 0x23ddac: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDB0u;
        goto label_23ddb0;
    }
    ctx->pc = 0x23DDA8u;
    {
        const bool branch_taken_0x23dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dda8) {
            ctx->pc = 0x23DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DDA8u;
            // 0x23ddac: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE44u;
            goto label_23de44;
        }
    }
    ctx->pc = 0x23DDB0u;
label_23ddb0:
    // 0x23ddb0: 0xc08d6b2  jal         func_235AC8
label_23ddb4:
    if (ctx->pc == 0x23DDB4u) {
        ctx->pc = 0x23DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB0u;
        // 0x23ddb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDB8u;
        goto label_23ddb8;
    }
    ctx->pc = 0x23DDB0u;
    SET_GPR_U32(ctx, 31, 0x23DDB8u);
    ctx->pc = 0x23DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DDB0u;
    // 0x23ddb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AC8u, 0x23DDB0u, 0x23DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDB8u;
label_23ddb8:
    // 0x23ddb8: 0x50510022  beql        $v0, $s1, . + 4 + (0x22 << 2)
label_23ddbc:
    if (ctx->pc == 0x23DDBCu) {
        ctx->pc = 0x23DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB8u;
        // 0x23ddbc: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDC0u;
        goto label_23ddc0;
    }
    ctx->pc = 0x23DDB8u;
    {
        const bool branch_taken_0x23ddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x23ddb8) {
            ctx->pc = 0x23DDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DDB8u;
            // 0x23ddbc: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE44u;
            goto label_23de44;
        }
    }
    ctx->pc = 0x23DDC0u;
label_23ddc0:
    // 0x23ddc0: 0xc08da9c  jal         func_236A70
label_23ddc4:
    if (ctx->pc == 0x23DDC4u) {
        ctx->pc = 0x23DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC0u;
        // 0x23ddc4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDC8u;
        goto label_23ddc8;
    }
    ctx->pc = 0x23DDC0u;
    SET_GPR_U32(ctx, 31, 0x23DDC8u);
    ctx->pc = 0x23DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DDC0u;
    // 0x23ddc4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A70u, 0x23DDC0u, 0x23DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDC8u;
label_23ddc8:
    // 0x23ddc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23ddc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ddcc:
    // 0x23ddcc: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x23ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_23ddd0:
    // 0x23ddd0: 0x5446000d  bnel        $v0, $a2, . + 4 + (0xD << 2)
label_23ddd4:
    if (ctx->pc == 0x23DDD4u) {
        ctx->pc = 0x23DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDD0u;
        // 0x23ddd4: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDD8u;
        goto label_23ddd8;
    }
    ctx->pc = 0x23DDD0u;
    {
        const bool branch_taken_0x23ddd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x23ddd0) {
            ctx->pc = 0x23DDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DDD0u;
            // 0x23ddd4: 0xa6000068  sh          $zero, 0x68($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DE08u;
            goto label_23de08;
        }
    }
    ctx->pc = 0x23DDD8u;
label_23ddd8:
    // 0x23ddd8: 0x96040068  lhu         $a0, 0x68($s0)
    ctx->pc = 0x23ddd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
label_23dddc:
    // 0x23dddc: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x23dddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_23dde0:
    // 0x23dde0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23dde4:
    // 0x23dde4: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_23dde8:
    // 0x23dde8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23ddec:
    // 0x23ddec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23ddf0:
    // 0x23ddf0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23ddf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_23ddf4:
    // 0x23ddf4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23ddf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23ddf8:
    // 0x23ddf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23ddfc:
    if (ctx->pc == 0x23DDFCu) {
        ctx->pc = 0x23DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDF8u;
        // 0x23ddfc: 0xa6040068  sh          $a0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE00u;
        goto label_23de00;
    }
    ctx->pc = 0x23DDF8u;
    {
        const bool branch_taken_0x23ddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDF8u;
        // 0x23ddfc: 0xa6040068  sh          $a0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddf8) {
            ctx->pc = 0x23DE08u;
            goto label_23de08;
        }
    }
    ctx->pc = 0x23DE00u;
label_23de00:
    // 0x23de00: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x23de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_23de04:
    // 0x23de04: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x23de04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_23de08:
    // 0x23de08: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x23de08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_23de0c:
    // 0x23de0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_23de10:
    if (ctx->pc == 0x23DE10u) {
        ctx->pc = 0x23DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE0Cu;
        // 0x23de10: 0xae060064  sw          $a2, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE14u;
        goto label_23de14;
    }
    ctx->pc = 0x23DE0Cu;
    {
        const bool branch_taken_0x23de0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE0Cu;
        // 0x23de10: 0xae060064  sw          $a2, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de0c) {
            ctx->pc = 0x23DE44u;
            goto label_23de44;
        }
    }
    ctx->pc = 0x23DE14u;
label_23de14:
    // 0x23de14: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x23de14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_23de18:
    // 0x23de18: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23de1c:
    // 0x23de1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23de1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23de20:
    // 0x23de20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23de24:
    if (ctx->pc == 0x23DE24u) {
        ctx->pc = 0x23DE28u;
        goto label_23de28;
    }
    ctx->pc = 0x23DE20u;
    {
        const bool branch_taken_0x23de20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de20) {
            ctx->pc = 0x23DE34u;
            goto label_23de34;
        }
    }
    ctx->pc = 0x23DE28u;
label_23de28:
    // 0x23de28: 0xc08e6f4  jal         func_239BD0
label_23de2c:
    if (ctx->pc == 0x23DE2Cu) {
        ctx->pc = 0x23DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE28u;
        // 0x23de2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE30u;
        goto label_23de30;
    }
    ctx->pc = 0x23DE28u;
    SET_GPR_U32(ctx, 31, 0x23DE30u);
    ctx->pc = 0x23DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE28u;
    // 0x23de2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23DE28u, 0x23DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE30u;
label_23de30:
    // 0x23de30: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x23de30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_23de34:
    // 0x23de34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23de38:
    if (ctx->pc == 0x23DE38u) {
        ctx->pc = 0x23DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE34u;
        // 0x23de38: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE3Cu;
        goto label_23de3c;
    }
    ctx->pc = 0x23DE34u;
    {
        const bool branch_taken_0x23de34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE34u;
        // 0x23de38: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de34) {
            ctx->pc = 0x23DE48u;
            goto label_23de48;
        }
    }
    ctx->pc = 0x23DE3Cu;
label_23de3c:
    // 0x23de3c: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x23de3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_23de40:
    // 0x23de40: 0xa6000068  sh          $zero, 0x68($s0)
    ctx->pc = 0x23de40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
label_23de44:
    // 0x23de44: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x23de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_23de48:
    // 0x23de48: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x23de48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_23de4c:
    // 0x23de4c: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_23de50:
    if (ctx->pc == 0x23DE50u) {
        ctx->pc = 0x23DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE4Cu;
        // 0x23de50: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE54u;
        goto label_23de54;
    }
    ctx->pc = 0x23DE4Cu;
    {
        const bool branch_taken_0x23de4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de4c) {
            ctx->pc = 0x23DE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE4Cu;
            // 0x23de50: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DE54u;
label_23de54:
    // 0x23de54: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_23de58:
    // 0x23de58: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_23de5c:
    if (ctx->pc == 0x23DE5Cu) {
        ctx->pc = 0x23DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE58u;
        // 0x23de5c: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE60u;
        goto label_23de60;
    }
    ctx->pc = 0x23DE58u;
    {
        const bool branch_taken_0x23de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23de58) {
            ctx->pc = 0x23DE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE58u;
            // 0x23de5c: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DE60u;
label_23de60:
    // 0x23de60: 0xc08d6b2  jal         func_235AC8
label_23de64:
    if (ctx->pc == 0x23DE64u) {
        ctx->pc = 0x23DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE60u;
        // 0x23de64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE68u;
        goto label_23de68;
    }
    ctx->pc = 0x23DE60u;
    SET_GPR_U32(ctx, 31, 0x23DE68u);
    ctx->pc = 0x23DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE60u;
    // 0x23de64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AC8u, 0x23DE60u, 0x23DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE68u;
label_23de68:
    // 0x23de68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23de68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23de6c:
    // 0x23de6c: 0x50430038  beql        $v0, $v1, . + 4 + (0x38 << 2)
label_23de70:
    if (ctx->pc == 0x23DE70u) {
        ctx->pc = 0x23DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE6Cu;
        // 0x23de70: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE74u;
        goto label_23de74;
    }
    ctx->pc = 0x23DE6Cu;
    {
        const bool branch_taken_0x23de6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23de6c) {
            ctx->pc = 0x23DE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE6Cu;
            // 0x23de70: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DE74u;
label_23de74:
    // 0x23de74: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x23de74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_23de78:
    // 0x23de78: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_23de7c:
    if (ctx->pc == 0x23DE7Cu) {
        ctx->pc = 0x23DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE78u;
        // 0x23de7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE80u;
        goto label_23de80;
    }
    ctx->pc = 0x23DE78u;
    {
        const bool branch_taken_0x23de78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE78u;
        // 0x23de7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de78) {
            ctx->pc = 0x23DE98u;
            goto label_23de98;
        }
    }
    ctx->pc = 0x23DE80u;
label_23de80:
    // 0x23de80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23de84:
    // 0x23de84: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23de88:
    // 0x23de88: 0x40f809  jalr        $v0
label_23de8c:
    if (ctx->pc == 0x23DE8Cu) {
        ctx->pc = 0x23DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE88u;
        // 0x23de8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE90u;
        goto label_23de90;
    }
    ctx->pc = 0x23DE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DE90u);
        ctx->pc = 0x23DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE88u;
        // 0x23de8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DE88u, 0x23DE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DE90u;
label_23de90:
    // 0x23de90: 0x10000002  b           . + 4 + (0x2 << 2)
label_23de94:
    if (ctx->pc == 0x23DE94u) {
        ctx->pc = 0x23DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE90u;
        // 0x23de94: 0x28420040  slti        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE98u;
        goto label_23de98;
    }
    ctx->pc = 0x23DE90u;
    {
        const bool branch_taken_0x23de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE90u;
        // 0x23de94: 0x28420040  slti        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de90) {
            ctx->pc = 0x23DE9Cu;
            goto label_23de9c;
        }
    }
    ctx->pc = 0x23DE98u;
label_23de98:
    // 0x23de98: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x23de98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_23de9c:
    // 0x23de9c: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_23dea0:
    if (ctx->pc == 0x23DEA0u) {
        ctx->pc = 0x23DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE9Cu;
        // 0x23dea0: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEA4u;
        goto label_23dea4;
    }
    ctx->pc = 0x23DE9Cu;
    {
        const bool branch_taken_0x23de9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de9c) {
            ctx->pc = 0x23DEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE9Cu;
            // 0x23dea0: 0xa600006a  sh          $zero, 0x6A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DEA4u;
label_23dea4:
    // 0x23dea4: 0x9602006a  lhu         $v0, 0x6A($s0)
    ctx->pc = 0x23dea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
label_23dea8:
    // 0x23dea8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23deac:
    // 0x23deac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23deacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23deb0:
    // 0x23deb0: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
label_23deb4:
    if (ctx->pc == 0x23DEB4u) {
        ctx->pc = 0x23DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB0u;
        // 0x23deb4: 0xa602006a  sh          $v0, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEB8u;
        goto label_23deb8;
    }
    ctx->pc = 0x23DEB0u;
    {
        const bool branch_taken_0x23deb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x23DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEB0u;
        // 0x23deb4: 0xa602006a  sh          $v0, 0x6A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deb0) {
            ctx->pc = 0x23DED0u;
            goto label_23ded0;
        }
    }
    ctx->pc = 0x23DEB8u;
label_23deb8:
    // 0x23deb8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x23deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_23debc:
    // 0x23debc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x23debcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_23dec0:
    // 0x23dec0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23dec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_23dec4:
    // 0x23dec4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23dec8:
    // 0x23dec8: 0x10000007  b           . + 4 + (0x7 << 2)
label_23decc:
    if (ctx->pc == 0x23DECCu) {
        ctx->pc = 0x23DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC8u;
        // 0x23decc: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DED0u;
        goto label_23ded0;
    }
    ctx->pc = 0x23DEC8u;
    {
        const bool branch_taken_0x23dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC8u;
        // 0x23decc: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dec8) {
            ctx->pc = 0x23DEE8u;
            goto label_23dee8;
        }
    }
    ctx->pc = 0x23DED0u;
label_23ded0:
    // 0x23ded0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x23ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_23ded4:
    // 0x23ded4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_23ded8:
    // 0x23ded8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23ded8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_23dedc:
    // 0x23dedc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23dee0:
    // 0x23dee0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23dee4:
    // 0x23dee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23dee8:
    // 0x23dee8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23dee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23deec:
    // 0x23deec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_23def0:
    if (ctx->pc == 0x23DEF0u) {
        ctx->pc = 0x23DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEECu;
        // 0x23def0: 0x86020060  lh          $v0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEF4u;
        goto label_23def4;
    }
    ctx->pc = 0x23DEECu;
    {
        const bool branch_taken_0x23deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23deec) {
            ctx->pc = 0x23DEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DEECu;
            // 0x23def0: 0x86020060  lh          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF00u;
            goto label_23df00;
        }
    }
    ctx->pc = 0x23DEF4u;
label_23def4:
    // 0x23def4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23def4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23def8:
    // 0x23def8: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x23def8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_23defc:
    // 0x23defc: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x23defcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_23df00:
    // 0x23df00: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_23df04:
    if (ctx->pc == 0x23DF04u) {
        ctx->pc = 0x23DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF00u;
        // 0x23df04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF08u;
        goto label_23df08;
    }
    ctx->pc = 0x23DF00u;
    {
        const bool branch_taken_0x23df00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF00u;
        // 0x23df04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df00) {
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DF08u;
label_23df08:
    // 0x23df08: 0x8204006d  lb          $a0, 0x6D($s0)
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_23df0c:
    // 0x23df0c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_23df10:
    if (ctx->pc == 0x23DF10u) {
        ctx->pc = 0x23DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF0Cu;
        // 0x23df10: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF14u;
        goto label_23df14;
    }
    ctx->pc = 0x23DF0Cu;
    {
        const bool branch_taken_0x23df0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF0Cu;
        // 0x23df10: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df0c) {
            ctx->pc = 0x23DF28u;
            goto label_23df28;
        }
    }
    ctx->pc = 0x23DF14u;
label_23df14:
    // 0x23df14: 0xc08e6f4  jal         func_239BD0
label_23df18:
    if (ctx->pc == 0x23DF18u) {
        ctx->pc = 0x23DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF14u;
        // 0x23df18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF1Cu;
        goto label_23df1c;
    }
    ctx->pc = 0x23DF14u;
    SET_GPR_U32(ctx, 31, 0x23DF1Cu);
    ctx->pc = 0x23DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF14u;
    // 0x23df18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23DF14u, 0x23DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF1Cu;
label_23df1c:
    // 0x23df1c: 0x10000008  b           . + 4 + (0x8 << 2)
label_23df20:
    if (ctx->pc == 0x23DF20u) {
        ctx->pc = 0x23DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF1Cu;
        // 0x23df20: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF24u;
        goto label_23df24;
    }
    ctx->pc = 0x23DF1Cu;
    {
        const bool branch_taken_0x23df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF1Cu;
        // 0x23df20: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df1c) {
            ctx->pc = 0x23DF40u;
            goto label_23df40;
        }
    }
    ctx->pc = 0x23DF24u;
label_23df24:
    // 0x23df24: 0x0  nop
    ctx->pc = 0x23df24u;
    // NOP
label_23df28:
    // 0x23df28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23df2c:
    // 0x23df2c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_23df30:
    if (ctx->pc == 0x23DF30u) {
        ctx->pc = 0x23DF34u;
        goto label_23df34;
    }
    ctx->pc = 0x23DF2Cu;
    {
        const bool branch_taken_0x23df2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23df2c) {
            ctx->pc = 0x23DF40u;
            goto label_23df40;
        }
    }
    ctx->pc = 0x23DF34u;
label_23df34:
    // 0x23df34: 0xc08f724  jal         func_23DC90
label_23df38:
    if (ctx->pc == 0x23DF38u) {
        ctx->pc = 0x23DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF34u;
        // 0x23df38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF3Cu;
        goto label_23df3c;
    }
    ctx->pc = 0x23DF34u;
    SET_GPR_U32(ctx, 31, 0x23DF3Cu);
    ctx->pc = 0x23DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF34u;
    // 0x23df38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC90u, 0x23DF34u, 0x23DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF3Cu;
label_23df3c:
    // 0x23df3c: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x23df3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_23df40:
    // 0x23df40: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_23df44:
    if (ctx->pc == 0x23DF44u) {
        ctx->pc = 0x23DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF40u;
        // 0x23df44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF48u;
        goto label_23df48;
    }
    ctx->pc = 0x23DF40u;
    {
        const bool branch_taken_0x23df40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df40) {
            ctx->pc = 0x23DF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF40u;
            // 0x23df44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DF54u;
            goto label_23df54;
        }
    }
    ctx->pc = 0x23DF48u;
label_23df48:
    // 0x23df48: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x23df48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_23df4c:
    // 0x23df4c: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x23df4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_23df50:
    // 0x23df50: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23df50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23df54:
    // 0x23df54: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
label_23df58:
    if (ctx->pc == 0x23DF58u) {
        ctx->pc = 0x23DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF54u;
        // 0x23df58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF5Cu;
        goto label_23df5c;
    }
    ctx->pc = 0x23DF54u;
    {
        const bool branch_taken_0x23df54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df54) {
            ctx->pc = 0x23DF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF54u;
            // 0x23df58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23DF5Cu;
label_23df5c:
    // 0x23df5c: 0xc08dd84  jal         func_237610
label_23df60:
    if (ctx->pc == 0x23DF60u) {
        ctx->pc = 0x23DF64u;
        goto label_23df64;
    }
    ctx->pc = 0x23DF5Cu;
    SET_GPR_U32(ctx, 31, 0x23DF64u);
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x23DF5Cu, 0x23DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF64u;
label_23df64:
    // 0x23df64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23df68:
    // 0x23df68: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_23df6c:
    if (ctx->pc == 0x23DF6Cu) {
        ctx->pc = 0x23DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF68u;
        // 0x23df6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF70u;
        goto label_23df70;
    }
    ctx->pc = 0x23DF68u;
    {
        const bool branch_taken_0x23df68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23df68) {
            ctx->pc = 0x23DF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DF68u;
            // 0x23df6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23DF70u;
label_23df70:
    // 0x23df70: 0x8204006d  lb          $a0, 0x6D($s0)
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_23df74:
    // 0x23df74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23df74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23df78:
    // 0x23df78: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_23df7c:
    if (ctx->pc == 0x23DF7Cu) {
        ctx->pc = 0x23DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF78u;
        // 0x23df7c: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF80u;
        goto label_23df80;
    }
    ctx->pc = 0x23DF78u;
    {
        const bool branch_taken_0x23df78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF78u;
        // 0x23df7c: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df78) {
            ctx->pc = 0x23DF90u;
            goto label_23df90;
        }
    }
    ctx->pc = 0x23DF80u;
label_23df80:
    // 0x23df80: 0xc08e6f4  jal         func_239BD0
label_23df84:
    if (ctx->pc == 0x23DF84u) {
        ctx->pc = 0x23DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF80u;
        // 0x23df84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF88u;
        goto label_23df88;
    }
    ctx->pc = 0x23DF80u;
    SET_GPR_U32(ctx, 31, 0x23DF88u);
    ctx->pc = 0x23DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF80u;
    // 0x23df84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23DF80u, 0x23DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF88u;
label_23df88:
    // 0x23df88: 0x10000007  b           . + 4 + (0x7 << 2)
label_23df8c:
    if (ctx->pc == 0x23DF8Cu) {
        ctx->pc = 0x23DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF88u;
        // 0x23df8c: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF90u;
        goto label_23df90;
    }
    ctx->pc = 0x23DF88u;
    {
        const bool branch_taken_0x23df88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF88u;
        // 0x23df8c: 0x9203006d  lbu         $v1, 0x6D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df88) {
            ctx->pc = 0x23DFA8u;
            goto label_23dfa8;
        }
    }
    ctx->pc = 0x23DF90u;
label_23df90:
    // 0x23df90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23df94:
    // 0x23df94: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_23df98:
    if (ctx->pc == 0x23DF98u) {
        ctx->pc = 0x23DF9Cu;
        goto label_23df9c;
    }
    ctx->pc = 0x23DF94u;
    {
        const bool branch_taken_0x23df94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23df94) {
            ctx->pc = 0x23DFA8u;
            goto label_23dfa8;
        }
    }
    ctx->pc = 0x23DF9Cu;
label_23df9c:
    // 0x23df9c: 0xc08f724  jal         func_23DC90
label_23dfa0:
    if (ctx->pc == 0x23DFA0u) {
        ctx->pc = 0x23DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF9Cu;
        // 0x23dfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFA4u;
        goto label_23dfa4;
    }
    ctx->pc = 0x23DF9Cu;
    SET_GPR_U32(ctx, 31, 0x23DFA4u);
    ctx->pc = 0x23DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF9Cu;
    // 0x23dfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC90u, 0x23DF9Cu, 0x23DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFA4u;
label_23dfa4:
    // 0x23dfa4: 0x9203006d  lbu         $v1, 0x6D($s0)
    ctx->pc = 0x23dfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_23dfa8:
    // 0x23dfa8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_23dfac:
    if (ctx->pc == 0x23DFACu) {
        ctx->pc = 0x23DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA8u;
        // 0x23dfac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFB0u;
        goto label_23dfb0;
    }
    ctx->pc = 0x23DFA8u;
    {
        const bool branch_taken_0x23dfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfa8) {
            ctx->pc = 0x23DFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DFA8u;
            // 0x23dfac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23DFB0u;
label_23dfb0:
    // 0x23dfb0: 0xa600006a  sh          $zero, 0x6A($s0)
    ctx->pc = 0x23dfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_23dfb4:
    // 0x23dfb4: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x23dfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_23dfb8:
    // 0x23dfb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23dfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23dfbc:
    // 0x23dfbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23dfbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23dfc0:
    // 0x23dfc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23dfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23dfc4:
    // 0x23dfc4: 0x3e00008  jr          $ra
label_23dfc8:
    if (ctx->pc == 0x23DFC8u) {
        ctx->pc = 0x23DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFC4u;
        // 0x23dfc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFCCu;
        goto label_fallthrough_0x23dfc4;
    }
    ctx->pc = 0x23DFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFC4u;
        // 0x23dfc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23dfc4:
    ctx->pc = 0x23DFCCu;
}
