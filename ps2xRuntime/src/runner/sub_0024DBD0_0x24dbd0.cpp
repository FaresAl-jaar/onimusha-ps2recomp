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

// Function: sub_0024DBD0
// Address: 0x24dbd0 - 0x24dec8
void sub_0024DBD0_0x24dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DBD0_0x24dbd0");
#endif

    switch (ctx->pc) {
        case 0x24dbd0u: goto label_24dbd0;
        case 0x24dbd4u: goto label_24dbd4;
        case 0x24dbd8u: goto label_24dbd8;
        case 0x24dbdcu: goto label_24dbdc;
        case 0x24dbe0u: goto label_24dbe0;
        case 0x24dbe4u: goto label_24dbe4;
        case 0x24dbe8u: goto label_24dbe8;
        case 0x24dbecu: goto label_24dbec;
        case 0x24dbf0u: goto label_24dbf0;
        case 0x24dbf4u: goto label_24dbf4;
        case 0x24dbf8u: goto label_24dbf8;
        case 0x24dbfcu: goto label_24dbfc;
        case 0x24dc00u: goto label_24dc00;
        case 0x24dc04u: goto label_24dc04;
        case 0x24dc08u: goto label_24dc08;
        case 0x24dc0cu: goto label_24dc0c;
        case 0x24dc10u: goto label_24dc10;
        case 0x24dc14u: goto label_24dc14;
        case 0x24dc18u: goto label_24dc18;
        case 0x24dc1cu: goto label_24dc1c;
        case 0x24dc20u: goto label_24dc20;
        case 0x24dc24u: goto label_24dc24;
        case 0x24dc28u: goto label_24dc28;
        case 0x24dc2cu: goto label_24dc2c;
        case 0x24dc30u: goto label_24dc30;
        case 0x24dc34u: goto label_24dc34;
        case 0x24dc38u: goto label_24dc38;
        case 0x24dc3cu: goto label_24dc3c;
        case 0x24dc40u: goto label_24dc40;
        case 0x24dc44u: goto label_24dc44;
        case 0x24dc48u: goto label_24dc48;
        case 0x24dc4cu: goto label_24dc4c;
        case 0x24dc50u: goto label_24dc50;
        case 0x24dc54u: goto label_24dc54;
        case 0x24dc58u: goto label_24dc58;
        case 0x24dc5cu: goto label_24dc5c;
        case 0x24dc60u: goto label_24dc60;
        case 0x24dc64u: goto label_24dc64;
        case 0x24dc68u: goto label_24dc68;
        case 0x24dc6cu: goto label_24dc6c;
        case 0x24dc70u: goto label_24dc70;
        case 0x24dc74u: goto label_24dc74;
        case 0x24dc78u: goto label_24dc78;
        case 0x24dc7cu: goto label_24dc7c;
        case 0x24dc80u: goto label_24dc80;
        case 0x24dc84u: goto label_24dc84;
        case 0x24dc88u: goto label_24dc88;
        case 0x24dc8cu: goto label_24dc8c;
        case 0x24dc90u: goto label_24dc90;
        case 0x24dc94u: goto label_24dc94;
        case 0x24dc98u: goto label_24dc98;
        case 0x24dc9cu: goto label_24dc9c;
        case 0x24dca0u: goto label_24dca0;
        case 0x24dca4u: goto label_24dca4;
        case 0x24dca8u: goto label_24dca8;
        case 0x24dcacu: goto label_24dcac;
        case 0x24dcb0u: goto label_24dcb0;
        case 0x24dcb4u: goto label_24dcb4;
        case 0x24dcb8u: goto label_24dcb8;
        case 0x24dcbcu: goto label_24dcbc;
        case 0x24dcc0u: goto label_24dcc0;
        case 0x24dcc4u: goto label_24dcc4;
        case 0x24dcc8u: goto label_24dcc8;
        case 0x24dcccu: goto label_24dccc;
        case 0x24dcd0u: goto label_24dcd0;
        case 0x24dcd4u: goto label_24dcd4;
        case 0x24dcd8u: goto label_24dcd8;
        case 0x24dcdcu: goto label_24dcdc;
        case 0x24dce0u: goto label_24dce0;
        case 0x24dce4u: goto label_24dce4;
        case 0x24dce8u: goto label_24dce8;
        case 0x24dcecu: goto label_24dcec;
        case 0x24dcf0u: goto label_24dcf0;
        case 0x24dcf4u: goto label_24dcf4;
        case 0x24dcf8u: goto label_24dcf8;
        case 0x24dcfcu: goto label_24dcfc;
        case 0x24dd00u: goto label_24dd00;
        case 0x24dd04u: goto label_24dd04;
        case 0x24dd08u: goto label_24dd08;
        case 0x24dd0cu: goto label_24dd0c;
        case 0x24dd10u: goto label_24dd10;
        case 0x24dd14u: goto label_24dd14;
        case 0x24dd18u: goto label_24dd18;
        case 0x24dd1cu: goto label_24dd1c;
        case 0x24dd20u: goto label_24dd20;
        case 0x24dd24u: goto label_24dd24;
        case 0x24dd28u: goto label_24dd28;
        case 0x24dd2cu: goto label_24dd2c;
        case 0x24dd30u: goto label_24dd30;
        case 0x24dd34u: goto label_24dd34;
        case 0x24dd38u: goto label_24dd38;
        case 0x24dd3cu: goto label_24dd3c;
        case 0x24dd40u: goto label_24dd40;
        case 0x24dd44u: goto label_24dd44;
        case 0x24dd48u: goto label_24dd48;
        case 0x24dd4cu: goto label_24dd4c;
        case 0x24dd50u: goto label_24dd50;
        case 0x24dd54u: goto label_24dd54;
        case 0x24dd58u: goto label_24dd58;
        case 0x24dd5cu: goto label_24dd5c;
        case 0x24dd60u: goto label_24dd60;
        case 0x24dd64u: goto label_24dd64;
        case 0x24dd68u: goto label_24dd68;
        case 0x24dd6cu: goto label_24dd6c;
        case 0x24dd70u: goto label_24dd70;
        case 0x24dd74u: goto label_24dd74;
        case 0x24dd78u: goto label_24dd78;
        case 0x24dd7cu: goto label_24dd7c;
        case 0x24dd80u: goto label_24dd80;
        case 0x24dd84u: goto label_24dd84;
        case 0x24dd88u: goto label_24dd88;
        case 0x24dd8cu: goto label_24dd8c;
        case 0x24dd90u: goto label_24dd90;
        case 0x24dd94u: goto label_24dd94;
        case 0x24dd98u: goto label_24dd98;
        case 0x24dd9cu: goto label_24dd9c;
        case 0x24dda0u: goto label_24dda0;
        case 0x24dda4u: goto label_24dda4;
        case 0x24dda8u: goto label_24dda8;
        case 0x24ddacu: goto label_24ddac;
        case 0x24ddb0u: goto label_24ddb0;
        case 0x24ddb4u: goto label_24ddb4;
        case 0x24ddb8u: goto label_24ddb8;
        case 0x24ddbcu: goto label_24ddbc;
        case 0x24ddc0u: goto label_24ddc0;
        case 0x24ddc4u: goto label_24ddc4;
        case 0x24ddc8u: goto label_24ddc8;
        case 0x24ddccu: goto label_24ddcc;
        case 0x24ddd0u: goto label_24ddd0;
        case 0x24ddd4u: goto label_24ddd4;
        case 0x24ddd8u: goto label_24ddd8;
        case 0x24dddcu: goto label_24dddc;
        case 0x24dde0u: goto label_24dde0;
        case 0x24dde4u: goto label_24dde4;
        case 0x24dde8u: goto label_24dde8;
        case 0x24ddecu: goto label_24ddec;
        case 0x24ddf0u: goto label_24ddf0;
        case 0x24ddf4u: goto label_24ddf4;
        case 0x24ddf8u: goto label_24ddf8;
        case 0x24ddfcu: goto label_24ddfc;
        case 0x24de00u: goto label_24de00;
        case 0x24de04u: goto label_24de04;
        case 0x24de08u: goto label_24de08;
        case 0x24de0cu: goto label_24de0c;
        case 0x24de10u: goto label_24de10;
        case 0x24de14u: goto label_24de14;
        case 0x24de18u: goto label_24de18;
        case 0x24de1cu: goto label_24de1c;
        case 0x24de20u: goto label_24de20;
        case 0x24de24u: goto label_24de24;
        case 0x24de28u: goto label_24de28;
        case 0x24de2cu: goto label_24de2c;
        case 0x24de30u: goto label_24de30;
        case 0x24de34u: goto label_24de34;
        case 0x24de38u: goto label_24de38;
        case 0x24de3cu: goto label_24de3c;
        case 0x24de40u: goto label_24de40;
        case 0x24de44u: goto label_24de44;
        case 0x24de48u: goto label_24de48;
        case 0x24de4cu: goto label_24de4c;
        case 0x24de50u: goto label_24de50;
        case 0x24de54u: goto label_24de54;
        case 0x24de58u: goto label_24de58;
        case 0x24de5cu: goto label_24de5c;
        case 0x24de60u: goto label_24de60;
        case 0x24de64u: goto label_24de64;
        case 0x24de68u: goto label_24de68;
        case 0x24de6cu: goto label_24de6c;
        case 0x24de70u: goto label_24de70;
        case 0x24de74u: goto label_24de74;
        case 0x24de78u: goto label_24de78;
        case 0x24de7cu: goto label_24de7c;
        case 0x24de80u: goto label_24de80;
        case 0x24de84u: goto label_24de84;
        case 0x24de88u: goto label_24de88;
        case 0x24de8cu: goto label_24de8c;
        case 0x24de90u: goto label_24de90;
        case 0x24de94u: goto label_24de94;
        case 0x24de98u: goto label_24de98;
        case 0x24de9cu: goto label_24de9c;
        case 0x24dea0u: goto label_24dea0;
        case 0x24dea4u: goto label_24dea4;
        case 0x24dea8u: goto label_24dea8;
        case 0x24deacu: goto label_24deac;
        case 0x24deb0u: goto label_24deb0;
        case 0x24deb4u: goto label_24deb4;
        case 0x24deb8u: goto label_24deb8;
        case 0x24debcu: goto label_24debc;
        case 0x24dec0u: goto label_24dec0;
        case 0x24dec4u: goto label_24dec4;
        default: break;
    }

    ctx->pc = 0x24dbd0u;

label_24dbd0:
    // 0x24dbd0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_24dbd4:
    // 0x24dbd4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24dbd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24dbd8:
    // 0x24dbd8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29912)));
label_24dbdc:
    // 0x24dbdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24dbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24dbe0:
    // 0x24dbe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24dbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_24dbe4:
    // 0x24dbe4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_24dbe8:
    // 0x24dbe8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24dbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_24dbec:
    // 0x24dbec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_24dbf0:
    // 0x24dbf0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_24dbf4:
    // 0x24dbf4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_24dbf8:
    // 0x24dbf8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x24dbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_24dbfc:
    // 0x24dbfc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x24dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_24dc00:
    // 0x24dc00: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_24dc04:
    if (ctx->pc == 0x24DC04u) {
        ctx->pc = 0x24DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC00u;
        // 0x24dc04: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC08u;
        goto label_24dc08;
    }
    ctx->pc = 0x24DC00u;
    {
        const bool branch_taken_0x24dc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC00u;
        // 0x24dc04: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc00) {
            ctx->pc = 0x24DC28u;
            goto label_24dc28;
        }
    }
    ctx->pc = 0x24DC08u;
label_24dc08:
    // 0x24dc08: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x24dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_24dc0c:
    // 0x24dc0c: 0x3c15004d  lui         $s5, 0x4D
    ctx->pc = 0x24dc0cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)77 << 16));
label_24dc10:
    // 0x24dc10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24dc14:
    // 0x24dc14: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
label_24dc18:
    // 0x24dc18: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x24dc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_24dc1c:
    // 0x24dc1c: 0xaea374d0  sw          $v1, 0x74D0($s5)
    ctx->pc = 0x24dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 29904), GPR_U32(ctx, 3));
label_24dc20:
    // 0x24dc20: 0x10000002  b           . + 4 + (0x2 << 2)
label_24dc24:
    if (ctx->pc == 0x24DC24u) {
        ctx->pc = 0x24DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC20u;
        // 0x24dc24: 0xac8274d4  sw          $v0, 0x74D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 29908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC28u;
        goto label_24dc28;
    }
    ctx->pc = 0x24DC20u;
    {
        const bool branch_taken_0x24dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC20u;
        // 0x24dc24: 0xac8274d4  sw          $v0, 0x74D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 29908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc20) {
            ctx->pc = 0x24DC2Cu;
            goto label_24dc2c;
        }
    }
    ctx->pc = 0x24DC28u;
label_24dc28:
    // 0x24dc28: 0x3c15004d  lui         $s5, 0x4D
    ctx->pc = 0x24dc28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)77 << 16));
label_24dc2c:
    // 0x24dc2c: 0x3c13004d  lui         $s3, 0x4D
    ctx->pc = 0x24dc2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)77 << 16));
label_24dc30:
    // 0x24dc30: 0x267074dc  addiu       $s0, $s3, 0x74DC
    ctx->pc = 0x24dc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29916));
label_24dc34:
    // 0x24dc34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24dc38:
    // 0x24dc38: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_24dc3c:
    if (ctx->pc == 0x24DC3Cu) {
        ctx->pc = 0x24DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC38u;
        // 0x24dc3c: 0x3c10004d  lui         $s0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC40u;
        goto label_24dc40;
    }
    ctx->pc = 0x24DC38u;
    {
        const bool branch_taken_0x24dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dc38) {
            ctx->pc = 0x24DC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DC38u;
            // 0x24dc3c: 0x3c10004d  lui         $s0, 0x4D (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DCD0u;
            goto label_24dcd0;
        }
    }
    ctx->pc = 0x24DC40u;
label_24dc40:
    // 0x24dc40: 0x3c12004d  lui         $s2, 0x4D
    ctx->pc = 0x24dc40u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)77 << 16));
label_24dc44:
    // 0x24dc44: 0x265174d4  addiu       $s1, $s2, 0x74D4
    ctx->pc = 0x24dc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 29908));
label_24dc48:
    // 0x24dc48: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24dc4c:
    // 0x24dc4c: 0xc0458c6  jal         func_116318
label_24dc50:
    if (ctx->pc == 0x24DC50u) {
        ctx->pc = 0x24DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC4Cu;
        // 0x24dc50: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC54u;
        goto label_24dc54;
    }
    ctx->pc = 0x24DC4Cu;
    SET_GPR_U32(ctx, 31, 0x24DC54u);
    ctx->pc = 0x24DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DC4Cu;
    // 0x24dc50: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116318u, 0x24DC4Cu, 0x24DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC54u;
label_24dc54:
    // 0x24dc54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_24dc58:
    if (ctx->pc == 0x24DC58u) {
        ctx->pc = 0x24DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC54u;
        // 0x24dc58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC5Cu;
        goto label_24dc5c;
    }
    ctx->pc = 0x24DC54u;
    {
        const bool branch_taken_0x24dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC54u;
        // 0x24dc58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc54) {
            ctx->pc = 0x24DC90u;
            goto label_24dc90;
        }
    }
    ctx->pc = 0x24DC5Cu;
label_24dc5c:
    // 0x24dc5c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x24dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24dc60:
    // 0x24dc60: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24dc64:
    // 0x24dc64: 0x2484e4e0  addiu       $a0, $a0, -0x1B20
    ctx->pc = 0x24dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960352));
label_24dc68:
    // 0x24dc68: 0xc08d47e  jal         func_2351F8
label_24dc6c:
    if (ctx->pc == 0x24DC6Cu) {
        ctx->pc = 0x24DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC68u;
        // 0x24dc6c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DC70u;
        goto label_24dc70;
    }
    ctx->pc = 0x24DC68u;
    SET_GPR_U32(ctx, 31, 0x24DC70u);
    ctx->pc = 0x24DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DC68u;
    // 0x24dc6c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24DC68u, 0x24DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC70u;
label_24dc70:
    // 0x24dc70: 0x0  nop
    ctx->pc = 0x24dc70u;
    // NOP
label_24dc74:
    // 0x24dc74: 0x0  nop
    ctx->pc = 0x24dc74u;
    // NOP
label_24dc78:
    // 0x24dc78: 0x0  nop
    ctx->pc = 0x24dc78u;
    // NOP
label_24dc7c:
    // 0x24dc7c: 0x0  nop
    ctx->pc = 0x24dc7cu;
    // NOP
label_24dc80:
    // 0x24dc80: 0x0  nop
    ctx->pc = 0x24dc80u;
    // NOP
label_24dc84:
    // 0x24dc84: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_24dc88:
    if (ctx->pc == 0x24DC88u) {
        ctx->pc = 0x24DC8Cu;
        goto label_24dc8c;
    }
    ctx->pc = 0x24DC84u;
    {
        const bool branch_taken_0x24dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dc84) {
            ctx->pc = 0x24DC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dc70;
        }
    }
    ctx->pc = 0x24DC8Cu;
label_24dc8c:
    // 0x24dc8c: 0x0  nop
    ctx->pc = 0x24dc8cu;
    // NOP
label_24dc90:
    // 0x24dc90: 0x267074dc  addiu       $s0, $s3, 0x74DC
    ctx->pc = 0x24dc90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 29916));
label_24dc94:
    // 0x24dc94: 0x8e4574d4  lw          $a1, 0x74D4($s2)
    ctx->pc = 0x24dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29908)));
label_24dc98:
    // 0x24dc98: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x24dc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24dc9c:
    // 0x24dc9c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24dca0:
    // 0x24dca0: 0x2484e528  addiu       $a0, $a0, -0x1AD8
    ctx->pc = 0x24dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960424));
label_24dca4:
    // 0x24dca4: 0xc08d47e  jal         func_2351F8
label_24dca8:
    if (ctx->pc == 0x24DCA8u) {
        ctx->pc = 0x24DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCA4u;
        // 0x24dca8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCACu;
        goto label_24dcac;
    }
    ctx->pc = 0x24DCA4u;
    SET_GPR_U32(ctx, 31, 0x24DCACu);
    ctx->pc = 0x24DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DCA4u;
    // 0x24dca8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24DCA4u, 0x24DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DCACu;
label_24dcac:
    // 0x24dcac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24dcb0:
    // 0x24dcb0: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x24dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_24dcb4:
    // 0x24dcb4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
label_24dcb8:
    // 0x24dcb8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x24dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_24dcbc:
    // 0x24dcbc: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24dcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
label_24dcc0:
    // 0x24dcc0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x24dcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_24dcc4:
    // 0x24dcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24dcc8:
    // 0x24dcc8: 0xa08274e4  sb          $v0, 0x74E4($a0)
    ctx->pc = 0x24dcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29924), (uint8_t)GPR_U32(ctx, 2));
label_24dccc:
    // 0x24dccc: 0xae0374e0  sw          $v1, 0x74E0($s0)
    ctx->pc = 0x24dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29920), GPR_U32(ctx, 3));
label_24dcd0:
    // 0x24dcd0: 0x3c14004d  lui         $s4, 0x4D
    ctx->pc = 0x24dcd0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)77 << 16));
label_24dcd4:
    // 0x24dcd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24dcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24dcd8:
    // 0x24dcd8: 0x26847530  addiu       $a0, $s4, 0x7530
    ctx->pc = 0x24dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 30000));
label_24dcdc:
    // 0x24dcdc: 0xc049590  jal         func_125640
label_24dce0:
    if (ctx->pc == 0x24DCE0u) {
        ctx->pc = 0x24DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCDCu;
        // 0x24dce0: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCE4u;
        goto label_24dce4;
    }
    ctx->pc = 0x24DCDCu;
    SET_GPR_U32(ctx, 31, 0x24DCE4u);
    ctx->pc = 0x24DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DCDCu;
    // 0x24dce0: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24DCDCu, 0x24DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DCE4u;
label_24dce4:
    // 0x24dce4: 0x8e1174e0  lw          $s1, 0x74E0($s0)
    ctx->pc = 0x24dce4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29920)));
label_24dce8:
    // 0x24dce8: 0x8ea274d0  lw          $v0, 0x74D0($s5)
    ctx->pc = 0x24dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29904)));
label_24dcec:
    // 0x24dcec: 0x1840006a  blez        $v0, . + 4 + (0x6A << 2)
label_24dcf0:
    if (ctx->pc == 0x24DCF0u) {
        ctx->pc = 0x24DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCECu;
        // 0x24dcf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DCF4u;
        goto label_24dcf4;
    }
    ctx->pc = 0x24DCECu;
    {
        const bool branch_taken_0x24dcec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCECu;
        // 0x24dcf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dcec) {
            ctx->pc = 0x24DE98u;
            goto label_24de98;
        }
    }
    ctx->pc = 0x24DCF4u;
label_24dcf4:
    // 0x24dcf4: 0x3c16004d  lui         $s6, 0x4D
    ctx->pc = 0x24dcf4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)77 << 16));
label_24dcf8:
    // 0x24dcf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24dcf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24dcfc:
    // 0x24dcfc: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x24dcfcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_24dd00:
    // 0x24dd00: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x24dd00u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_24dd04:
    // 0x24dd04: 0x26827530  addiu       $v0, $s4, 0x7530
    ctx->pc = 0x24dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 30000));
label_24dd08:
    // 0x24dd08: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x24dd08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_24dd0c:
    // 0x24dd0c: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x24dd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_24dd10:
    // 0x24dd10: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x24dd10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_24dd14:
    // 0x24dd14: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_24dd18:
    if (ctx->pc == 0x24DD18u) {
        ctx->pc = 0x24DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD14u;
        // 0x24dd18: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD1Cu;
        goto label_24dd1c;
    }
    ctx->pc = 0x24DD14u;
    {
        const bool branch_taken_0x24dd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD14u;
        // 0x24dd18: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd14) {
            ctx->pc = 0x24DD48u;
            goto label_24dd48;
        }
    }
    ctx->pc = 0x24DD1Cu;
label_24dd1c:
    // 0x24dd1c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x24dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_24dd20:
    // 0x24dd20: 0xc08d47e  jal         func_2351F8
label_24dd24:
    if (ctx->pc == 0x24DD24u) {
        ctx->pc = 0x24DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD20u;
        // 0x24dd24: 0x2444e558  addiu       $a0, $v0, -0x1AA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD28u;
        goto label_24dd28;
    }
    ctx->pc = 0x24DD20u;
    SET_GPR_U32(ctx, 31, 0x24DD28u);
    ctx->pc = 0x24DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD20u;
    // 0x24dd24: 0x2444e558  addiu       $a0, $v0, -0x1AA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24DD20u, 0x24DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD28u;
label_24dd28:
    // 0x24dd28: 0x0  nop
    ctx->pc = 0x24dd28u;
    // NOP
label_24dd2c:
    // 0x24dd2c: 0x0  nop
    ctx->pc = 0x24dd2cu;
    // NOP
label_24dd30:
    // 0x24dd30: 0x0  nop
    ctx->pc = 0x24dd30u;
    // NOP
label_24dd34:
    // 0x24dd34: 0x0  nop
    ctx->pc = 0x24dd34u;
    // NOP
label_24dd38:
    // 0x24dd38: 0x0  nop
    ctx->pc = 0x24dd38u;
    // NOP
label_24dd3c:
    // 0x24dd3c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_24dd40:
    if (ctx->pc == 0x24DD40u) {
        ctx->pc = 0x24DD44u;
        goto label_24dd44;
    }
    ctx->pc = 0x24DD3Cu;
    {
        const bool branch_taken_0x24dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dd3c) {
            ctx->pc = 0x24DD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dd28;
        }
    }
    ctx->pc = 0x24DD44u;
label_24dd44:
    // 0x24dd44: 0x0  nop
    ctx->pc = 0x24dd44u;
    // NOP
label_24dd48:
    // 0x24dd48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24dd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24dd4c:
    // 0x24dd4c: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x24dd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_24dd50:
    // 0x24dd50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24dd54:
    // 0x24dd54: 0xc094942  jal         func_252508
label_24dd58:
    if (ctx->pc == 0x24DD58u) {
        ctx->pc = 0x24DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD54u;
        // 0x24dd58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD5Cu;
        goto label_24dd5c;
    }
    ctx->pc = 0x24DD54u;
    SET_GPR_U32(ctx, 31, 0x24DD5Cu);
    ctx->pc = 0x24DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD54u;
    // 0x24dd58: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252508u, 0x24DD54u, 0x24DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD5Cu;
label_24dd5c:
    // 0x24dd5c: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x24dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_24dd60:
    // 0x24dd60: 0x26c57830  addiu       $a1, $s6, 0x7830
    ctx->pc = 0x24dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 30768));
label_24dd64:
    // 0x24dd64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24dd68:
    // 0x24dd68: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x24dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24dd6c:
    // 0x24dd6c: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x24dd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_24dd70:
    // 0x24dd70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24dd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24dd74:
    // 0x24dd74: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x24dd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_24dd78:
    // 0x24dd78: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_24dd7c:
    if (ctx->pc == 0x24DD7Cu) {
        ctx->pc = 0x24DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD78u;
        // 0x24dd7c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD80u;
        goto label_24dd80;
    }
    ctx->pc = 0x24DD78u;
    {
        const bool branch_taken_0x24dd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD78u;
        // 0x24dd7c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd78) {
            ctx->pc = 0x24DDB0u;
            goto label_24ddb0;
        }
    }
    ctx->pc = 0x24DD80u;
label_24dd80:
    // 0x24dd80: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x24dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_24dd84:
    // 0x24dd84: 0xc08d47e  jal         func_2351F8
label_24dd88:
    if (ctx->pc == 0x24DD88u) {
        ctx->pc = 0x24DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD84u;
        // 0x24dd88: 0x2444e588  addiu       $a0, $v0, -0x1A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DD8Cu;
        goto label_24dd8c;
    }
    ctx->pc = 0x24DD84u;
    SET_GPR_U32(ctx, 31, 0x24DD8Cu);
    ctx->pc = 0x24DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD84u;
    // 0x24dd88: 0x2444e588  addiu       $a0, $v0, -0x1A78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24DD84u, 0x24DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD8Cu;
label_24dd8c:
    // 0x24dd8c: 0x0  nop
    ctx->pc = 0x24dd8cu;
    // NOP
label_24dd90:
    // 0x24dd90: 0x0  nop
    ctx->pc = 0x24dd90u;
    // NOP
label_24dd94:
    // 0x24dd94: 0x0  nop
    ctx->pc = 0x24dd94u;
    // NOP
label_24dd98:
    // 0x24dd98: 0x0  nop
    ctx->pc = 0x24dd98u;
    // NOP
label_24dd9c:
    // 0x24dd9c: 0x0  nop
    ctx->pc = 0x24dd9cu;
    // NOP
label_24dda0:
    // 0x24dda0: 0x0  nop
    ctx->pc = 0x24dda0u;
    // NOP
label_24dda4:
    // 0x24dda4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_24dda8:
    if (ctx->pc == 0x24DDA8u) {
        ctx->pc = 0x24DDACu;
        goto label_24ddac;
    }
    ctx->pc = 0x24DDA4u;
    {
        const bool branch_taken_0x24dda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dda4) {
            ctx->pc = 0x24DD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dd90;
        }
    }
    ctx->pc = 0x24DDACu;
label_24ddac:
    // 0x24ddac: 0x0  nop
    ctx->pc = 0x24ddacu;
    // NOP
label_24ddb0:
    // 0x24ddb0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_24ddb4:
    if (ctx->pc == 0x24DDB4u) {
        ctx->pc = 0x24DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDB0u;
        // 0x24ddb4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDB8u;
        goto label_24ddb8;
    }
    ctx->pc = 0x24DDB0u;
    {
        const bool branch_taken_0x24ddb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDB0u;
        // 0x24ddb4: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddb0) {
            ctx->pc = 0x24DDE0u;
            goto label_24dde0;
        }
    }
    ctx->pc = 0x24DDB8u;
label_24ddb8:
    // 0x24ddb8: 0xc08d47e  jal         func_2351F8
label_24ddbc:
    if (ctx->pc == 0x24DDBCu) {
        ctx->pc = 0x24DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDB8u;
        // 0x24ddbc: 0x2444e5c0  addiu       $a0, $v0, -0x1A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDC0u;
        goto label_24ddc0;
    }
    ctx->pc = 0x24DDB8u;
    SET_GPR_U32(ctx, 31, 0x24DDC0u);
    ctx->pc = 0x24DDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDB8u;
    // 0x24ddbc: 0x2444e5c0  addiu       $a0, $v0, -0x1A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24DDB8u, 0x24DDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDC0u;
label_24ddc0:
    // 0x24ddc0: 0x0  nop
    ctx->pc = 0x24ddc0u;
    // NOP
label_24ddc4:
    // 0x24ddc4: 0x0  nop
    ctx->pc = 0x24ddc4u;
    // NOP
label_24ddc8:
    // 0x24ddc8: 0x0  nop
    ctx->pc = 0x24ddc8u;
    // NOP
label_24ddcc:
    // 0x24ddcc: 0x0  nop
    ctx->pc = 0x24ddccu;
    // NOP
label_24ddd0:
    // 0x24ddd0: 0x0  nop
    ctx->pc = 0x24ddd0u;
    // NOP
label_24ddd4:
    // 0x24ddd4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_24ddd8:
    if (ctx->pc == 0x24DDD8u) {
        ctx->pc = 0x24DDDCu;
        goto label_24dddc;
    }
    ctx->pc = 0x24DDD4u;
    {
        const bool branch_taken_0x24ddd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ddd4) {
            ctx->pc = 0x24DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ddc0;
        }
    }
    ctx->pc = 0x24DDDCu;
label_24dddc:
    // 0x24dddc: 0x0  nop
    ctx->pc = 0x24dddcu;
    // NOP
label_24dde0:
    // 0x24dde0: 0xc09452e  jal         func_2514B8
label_24dde4:
    if (ctx->pc == 0x24DDE4u) {
        ctx->pc = 0x24DDE8u;
        goto label_24dde8;
    }
    ctx->pc = 0x24DDE0u;
    SET_GPR_U32(ctx, 31, 0x24DDE8u);
    ctx->pc = 0x2514B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2514B8u, 0x24DDE0u, 0x24DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DDE8u;
label_24dde8:
    // 0x24dde8: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x24dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_24ddec:
    // 0x24ddec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_24ddf0:
    // 0x24ddf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ddf4:
    // 0x24ddf4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_24ddf8:
    if (ctx->pc == 0x24DDF8u) {
        ctx->pc = 0x24DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF4u;
        // 0x24ddf8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DDFCu;
        goto label_24ddfc;
    }
    ctx->pc = 0x24DDF4u;
    {
        const bool branch_taken_0x24ddf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF4u;
        // 0x24ddf8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddf4) {
            ctx->pc = 0x24DE28u;
            goto label_24de28;
        }
    }
    ctx->pc = 0x24DDFCu;
label_24ddfc:
    // 0x24ddfc: 0xc08d47e  jal         func_2351F8
label_24de00:
    if (ctx->pc == 0x24DE00u) {
        ctx->pc = 0x24DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDFCu;
        // 0x24de00: 0x27c4e5f0  addiu       $a0, $fp, -0x1A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE04u;
        goto label_24de04;
    }
    ctx->pc = 0x24DDFCu;
    SET_GPR_U32(ctx, 31, 0x24DE04u);
    ctx->pc = 0x24DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DDFCu;
    // 0x24de00: 0x27c4e5f0  addiu       $a0, $fp, -0x1A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24DDFCu, 0x24DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE04u;
label_24de04:
    // 0x24de04: 0x0  nop
    ctx->pc = 0x24de04u;
    // NOP
label_24de08:
    // 0x24de08: 0x0  nop
    ctx->pc = 0x24de08u;
    // NOP
label_24de0c:
    // 0x24de0c: 0x0  nop
    ctx->pc = 0x24de0cu;
    // NOP
label_24de10:
    // 0x24de10: 0x0  nop
    ctx->pc = 0x24de10u;
    // NOP
label_24de14:
    // 0x24de14: 0x0  nop
    ctx->pc = 0x24de14u;
    // NOP
label_24de18:
    // 0x24de18: 0x0  nop
    ctx->pc = 0x24de18u;
    // NOP
label_24de1c:
    // 0x24de1c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_24de20:
    if (ctx->pc == 0x24DE20u) {
        ctx->pc = 0x24DE24u;
        goto label_24de24;
    }
    ctx->pc = 0x24DE1Cu;
    {
        const bool branch_taken_0x24de1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24de1c) {
            ctx->pc = 0x24DE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24de08;
        }
    }
    ctx->pc = 0x24DE24u;
label_24de24:
    // 0x24de24: 0x0  nop
    ctx->pc = 0x24de24u;
    // NOP
label_24de28:
    // 0x24de28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x24de28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24de2c:
    // 0x24de2c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x24de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_24de30:
    // 0x24de30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24de34:
    // 0x24de34: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x24de34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_24de38:
    // 0x24de38: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x24de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_24de3c:
    // 0x24de3c: 0x40f809  jalr        $v0
label_24de40:
    if (ctx->pc == 0x24DE40u) {
        ctx->pc = 0x24DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE3Cu;
        // 0x24de40: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE44u;
        goto label_24de44;
    }
    ctx->pc = 0x24DE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DE44u);
        ctx->pc = 0x24DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE3Cu;
        // 0x24de40: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DE3Cu, 0x24DE44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DE44u;
label_24de44:
    // 0x24de44: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x24de44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24de48:
    // 0x24de48: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24de48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24de4c:
    // 0x24de4c: 0xc094b18  jal         func_252C60
label_24de50:
    if (ctx->pc == 0x24DE50u) {
        ctx->pc = 0x24DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE4Cu;
        // 0x24de50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE54u;
        goto label_24de54;
    }
    ctx->pc = 0x24DE4Cu;
    SET_GPR_U32(ctx, 31, 0x24DE54u);
    ctx->pc = 0x24DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE4Cu;
    // 0x24de50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C60u, 0x24DE4Cu, 0x24DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE54u;
label_24de54:
    // 0x24de54: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_24de58:
    if (ctx->pc == 0x24DE58u) {
        ctx->pc = 0x24DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE54u;
        // 0x24de58: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE5Cu;
        goto label_24de5c;
    }
    ctx->pc = 0x24DE54u;
    {
        const bool branch_taken_0x24de54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE54u;
        // 0x24de58: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de54) {
            ctx->pc = 0x24DE88u;
            goto label_24de88;
        }
    }
    ctx->pc = 0x24DE5Cu;
label_24de5c:
    // 0x24de5c: 0xc08d47e  jal         func_2351F8
label_24de60:
    if (ctx->pc == 0x24DE60u) {
        ctx->pc = 0x24DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE5Cu;
        // 0x24de60: 0x26e4e628  addiu       $a0, $s7, -0x19D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE64u;
        goto label_24de64;
    }
    ctx->pc = 0x24DE5Cu;
    SET_GPR_U32(ctx, 31, 0x24DE64u);
    ctx->pc = 0x24DE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE5Cu;
    // 0x24de60: 0x26e4e628  addiu       $a0, $s7, -0x19D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x24DE5Cu, 0x24DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE64u;
label_24de64:
    // 0x24de64: 0x0  nop
    ctx->pc = 0x24de64u;
    // NOP
label_24de68:
    // 0x24de68: 0x0  nop
    ctx->pc = 0x24de68u;
    // NOP
label_24de6c:
    // 0x24de6c: 0x0  nop
    ctx->pc = 0x24de6cu;
    // NOP
label_24de70:
    // 0x24de70: 0x0  nop
    ctx->pc = 0x24de70u;
    // NOP
label_24de74:
    // 0x24de74: 0x0  nop
    ctx->pc = 0x24de74u;
    // NOP
label_24de78:
    // 0x24de78: 0x0  nop
    ctx->pc = 0x24de78u;
    // NOP
label_24de7c:
    // 0x24de7c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_24de80:
    if (ctx->pc == 0x24DE80u) {
        ctx->pc = 0x24DE84u;
        goto label_24de84;
    }
    ctx->pc = 0x24DE7Cu;
    {
        const bool branch_taken_0x24de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24de7c) {
            ctx->pc = 0x24DE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24de68;
        }
    }
    ctx->pc = 0x24DE84u;
label_24de84:
    // 0x24de84: 0x0  nop
    ctx->pc = 0x24de84u;
    // NOP
label_24de88:
    // 0x24de88: 0x8ea274d0  lw          $v0, 0x74D0($s5)
    ctx->pc = 0x24de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29904)));
label_24de8c:
    // 0x24de8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x24de8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24de90:
    // 0x24de90: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_24de94:
    if (ctx->pc == 0x24DE94u) {
        ctx->pc = 0x24DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE90u;
        // 0x24de94: 0x26827530  addiu       $v0, $s4, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 30000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DE98u;
        goto label_24de98;
    }
    ctx->pc = 0x24DE90u;
    {
        const bool branch_taken_0x24de90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE90u;
        // 0x24de94: 0x26827530  addiu       $v0, $s4, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 30000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de90) {
            ctx->pc = 0x24DD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dd08;
        }
    }
    ctx->pc = 0x24DE98u;
label_24de98:
    // 0x24de98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24de98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24de9c:
    // 0x24de9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24de9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24dea0:
    // 0x24dea0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24dea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24dea4:
    // 0x24dea4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24dea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24dea8:
    // 0x24dea8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24dea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24deac:
    // 0x24deac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24deacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24deb0:
    // 0x24deb0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24deb0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24deb4:
    // 0x24deb4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24deb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_24deb8:
    // 0x24deb8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x24deb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24debc:
    // 0x24debc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x24debcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_24dec0:
    // 0x24dec0: 0x3e00008  jr          $ra
label_24dec4:
    if (ctx->pc == 0x24DEC4u) {
        ctx->pc = 0x24DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEC0u;
        // 0x24dec4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DEC8u;
        goto label_fallthrough_0x24dec0;
    }
    ctx->pc = 0x24DEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEC0u;
        // 0x24dec4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24dec0:
    ctx->pc = 0x24DEC8u;
}
