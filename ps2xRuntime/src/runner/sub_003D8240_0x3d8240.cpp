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

// Function: sub_003D8240
// Address: 0x3d8240 - 0x3d84a0
void sub_003D8240_0x3d8240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8240_0x3d8240");
#endif

    switch (ctx->pc) {
        case 0x3d8364u: goto label_3d8364;
        case 0x3d8378u: goto label_3d8378;
        case 0x3d8388u: goto label_3d8388;
        case 0x3d8398u: goto label_3d8398;
        case 0x3d83a8u: goto label_3d83a8;
        case 0x3d83b8u: goto label_3d83b8;
        case 0x3d83c8u: goto label_3d83c8;
        case 0x3d83d8u: goto label_3d83d8;
        case 0x3d83e8u: goto label_3d83e8;
        case 0x3d83f8u: goto label_3d83f8;
        case 0x3d8408u: goto label_3d8408;
        case 0x3d8418u: goto label_3d8418;
        case 0x3d8428u: goto label_3d8428;
        case 0x3d8430u: goto label_3d8430;
        case 0x3d8448u: goto label_3d8448;
        case 0x3d8450u: goto label_3d8450;
        case 0x3d8490u: goto label_3d8490;
        default: break;
    }

    ctx->pc = 0x3d8240u;

    // 0x3d8240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d8244: 0x240200fd  addiu       $v0, $zero, 0xFD
    ctx->pc = 0x3d8244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3d8248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d824c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d824cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d8250: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3d8250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3d8254: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x3D8254u;
    {
        const bool branch_taken_0x3d8254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8254u;
        // 0x3d8258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8254) {
            ctx->pc = 0x3D8420u;
            goto label_3d8420;
        }
    }
    ctx->pc = 0x3D825Cu;
    // 0x3d825c: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x3d825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3d8260: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3D8260u;
    {
        const bool branch_taken_0x3d8260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8260u;
        // 0x3d8264: 0x240200fb  addiu       $v0, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8260) {
            ctx->pc = 0x3D8420u;
            goto label_3d8420;
        }
    }
    ctx->pc = 0x3D8268u;
    // 0x3d8268: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x3D8268u;
    {
        const bool branch_taken_0x3d8268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8268) {
            ctx->pc = 0x3D8420u;
            goto label_3d8420;
        }
    }
    ctx->pc = 0x3D8270u;
    // 0x3d8270: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x3d8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x3d8274: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x3D8274u;
    {
        const bool branch_taken_0x3d8274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8274u;
        // 0x3d8278: 0x240200f9  addiu       $v0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8274) {
            ctx->pc = 0x3D8410u;
            goto label_3d8410;
        }
    }
    ctx->pc = 0x3D827Cu;
    // 0x3d827c: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3D827Cu;
    {
        const bool branch_taken_0x3d827c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d827c) {
            ctx->pc = 0x3D8400u;
            goto label_3d8400;
        }
    }
    ctx->pc = 0x3D8284u;
    // 0x3d8284: 0x240200f8  addiu       $v0, $zero, 0xF8
    ctx->pc = 0x3d8284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x3d8288: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3D8288u;
    {
        const bool branch_taken_0x3d8288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8288u;
        // 0x3d828c: 0x240200f7  addiu       $v0, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8288) {
            ctx->pc = 0x3D83F0u;
            goto label_3d83f0;
        }
    }
    ctx->pc = 0x3D8290u;
    // 0x3d8290: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x3D8290u;
    {
        const bool branch_taken_0x3d8290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8290) {
            ctx->pc = 0x3D83E0u;
            goto label_3d83e0;
        }
    }
    ctx->pc = 0x3D8298u;
    // 0x3d8298: 0x240200f6  addiu       $v0, $zero, 0xF6
    ctx->pc = 0x3d8298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x3d829c: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3D829Cu;
    {
        const bool branch_taken_0x3d829c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D829Cu;
        // 0x3d82a0: 0x240200f5  addiu       $v0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d829c) {
            ctx->pc = 0x3D83D0u;
            goto label_3d83d0;
        }
    }
    ctx->pc = 0x3D82A4u;
    // 0x3d82a4: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3D82A4u;
    {
        const bool branch_taken_0x3d82a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d82a4) {
            ctx->pc = 0x3D83C0u;
            goto label_3d83c0;
        }
    }
    ctx->pc = 0x3D82ACu;
    // 0x3d82ac: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x3d82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3d82b0: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3D82B0u;
    {
        const bool branch_taken_0x3d82b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82B0u;
        // 0x3d82b4: 0x240200f3  addiu       $v0, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82b0) {
            ctx->pc = 0x3D83B0u;
            goto label_3d83b0;
        }
    }
    ctx->pc = 0x3D82B8u;
    // 0x3d82b8: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3D82B8u;
    {
        const bool branch_taken_0x3d82b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d82b8) {
            ctx->pc = 0x3D83A0u;
            goto label_3d83a0;
        }
    }
    ctx->pc = 0x3D82C0u;
    // 0x3d82c0: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x3d82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x3d82c4: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3D82C4u;
    {
        const bool branch_taken_0x3d82c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D82C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82C4u;
        // 0x3d82c8: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82c4) {
            ctx->pc = 0x3D8390u;
            goto label_3d8390;
        }
    }
    ctx->pc = 0x3D82CCu;
    // 0x3d82cc: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3D82CCu;
    {
        const bool branch_taken_0x3d82cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d82cc) {
            ctx->pc = 0x3D8380u;
            goto label_3d8380;
        }
    }
    ctx->pc = 0x3D82D4u;
    // 0x3d82d4: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3d82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3d82d8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3D82D8u;
    {
        const bool branch_taken_0x3d82d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D82DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D82D8u;
        // 0x3d82dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d82d8) {
            ctx->pc = 0x3D8370u;
            goto label_3d8370;
        }
    }
    ctx->pc = 0x3D82E0u;
    // 0x3d82e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D82E0u;
    {
        const bool branch_taken_0x3d82e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d82e0) {
            ctx->pc = 0x3D82F0u;
            goto label_3d82f0;
        }
    }
    ctx->pc = 0x3D82E8u;
    // 0x3d82e8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3D82E8u;
    {
        const bool branch_taken_0x3d82e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d82e8) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D82F0u;
label_3d82f0:
    // 0x3d82f0: 0x92022be0  lbu         $v0, 0x2BE0($s0)
    ctx->pc = 0x3d82f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11232)));
    // 0x3d82f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D82F4u;
    {
        const bool branch_taken_0x3d82f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d82f4) {
            ctx->pc = 0x3D8340u;
            goto label_3d8340;
        }
    }
    ctx->pc = 0x3D82FCu;
    // 0x3d82fc: 0x92062be4  lbu         $a2, 0x2BE4($s0)
    ctx->pc = 0x3d82fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11236)));
    // 0x3d8300: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x3D8300u;
    {
        const bool branch_taken_0x3d8300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8300u;
        // 0x3d8304: 0x30c200ff  andi        $v0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8300) {
            ctx->pc = 0x3D8340u;
            goto label_3d8340;
        }
    }
    ctx->pc = 0x3D8308u;
    // 0x3d8308: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3D8308u;
    {
        const bool branch_taken_0x3d8308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8308) {
            ctx->pc = 0x3D8340u;
            goto label_3d8340;
        }
    }
    ctx->pc = 0x3D8310u;
    // 0x3d8310: 0x92052be5  lbu         $a1, 0x2BE5($s0)
    ctx->pc = 0x3d8310u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3d8314: 0x96042be8  lhu         $a0, 0x2BE8($s0)
    ctx->pc = 0x3d8314u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11240)));
    // 0x3d8318: 0x96032bea  lhu         $v1, 0x2BEA($s0)
    ctx->pc = 0x3d8318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11242)));
    // 0x3d831c: 0x96022be6  lhu         $v0, 0x2BE6($s0)
    ctx->pc = 0x3d831cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11238)));
    // 0x3d8320: 0xa2062be4  sb          $a2, 0x2BE4($s0)
    ctx->pc = 0x3d8320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11236), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d8324: 0xa2052be5  sb          $a1, 0x2BE5($s0)
    ctx->pc = 0x3d8324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11237), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d8328: 0xa2060780  sb          $a2, 0x780($s0)
    ctx->pc = 0x3d8328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d832c: 0xa2002be3  sb          $zero, 0x2BE3($s0)
    ctx->pc = 0x3d832cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8330: 0xa6022be6  sh          $v0, 0x2BE6($s0)
    ctx->pc = 0x3d8330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11238), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d8334: 0xa6032bea  sh          $v1, 0x2BEA($s0)
    ctx->pc = 0x3d8334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11242), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d8338: 0xa6042be8  sh          $a0, 0x2BE8($s0)
    ctx->pc = 0x3d8338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11240), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d833c: 0x0  nop
    ctx->pc = 0x3d833cu;
    // NOP
label_3d8340:
    // 0x3d8340: 0x92032be5  lbu         $v1, 0x2BE5($s0)
    ctx->pc = 0x3d8340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3d8344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d8344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8348: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8348u;
    {
        const bool branch_taken_0x3d8348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d8348) {
            ctx->pc = 0x3D8358u;
            goto label_3d8358;
        }
    }
    ctx->pc = 0x3D8350u;
    // 0x3d8350: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3D8350u;
    {
        const bool branch_taken_0x3d8350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8350) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D8358u;
label_3d8358:
    // 0x3d8358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d835c: 0xc0f6ef0  jal         func_3DBBC0
    ctx->pc = 0x3D835Cu;
    SET_GPR_U32(ctx, 31, 0x3D8364u);
    ctx->pc = 0x3D8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D835Cu;
    // 0x3d8360: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBBC0u, 0x3D835Cu, 0x3D8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8364u;
label_3d8364:
    // 0x3d8364: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3D8364u;
    {
        const bool branch_taken_0x3d8364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8364) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D836Cu;
    // 0x3d836c: 0x0  nop
    ctx->pc = 0x3d836cu;
    // NOP
label_3d8370:
    // 0x3d8370: 0xc0f6784  jal         func_3D9E10
    ctx->pc = 0x3D8370u;
    SET_GPR_U32(ctx, 31, 0x3D8378u);
    ctx->pc = 0x3D9E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9E10u, 0x3D8370u, 0x3D8378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8378u;
label_3d8378:
    // 0x3d8378: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3D8378u;
    {
        const bool branch_taken_0x3d8378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8378) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D8380u;
label_3d8380:
    // 0x3d8380: 0xc0f67c0  jal         func_3D9F00
    ctx->pc = 0x3D8380u;
    SET_GPR_U32(ctx, 31, 0x3D8388u);
    ctx->pc = 0x3D9F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9F00u, 0x3D8380u, 0x3D8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8388u;
label_3d8388:
    // 0x3d8388: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3D8388u;
    {
        const bool branch_taken_0x3d8388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8388) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D8390u;
label_3d8390:
    // 0x3d8390: 0xc0f67e4  jal         func_3D9F90
    ctx->pc = 0x3D8390u;
    SET_GPR_U32(ctx, 31, 0x3D8398u);
    ctx->pc = 0x3D9F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9F90u, 0x3D8390u, 0x3D8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8398u;
label_3d8398:
    // 0x3d8398: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3D8398u;
    {
        const bool branch_taken_0x3d8398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8398) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D83A0u;
label_3d83a0:
    // 0x3d83a0: 0xc0f6808  jal         func_3DA020
    ctx->pc = 0x3D83A0u;
    SET_GPR_U32(ctx, 31, 0x3D83A8u);
    ctx->pc = 0x3DA020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA020u, 0x3D83A0u, 0x3D83A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83A8u;
label_3d83a8:
    // 0x3d83a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3D83A8u;
    {
        const bool branch_taken_0x3d83a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d83a8) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D83B0u;
label_3d83b0:
    // 0x3d83b0: 0xc0f6838  jal         func_3DA0E0
    ctx->pc = 0x3D83B0u;
    SET_GPR_U32(ctx, 31, 0x3D83B8u);
    ctx->pc = 0x3DA0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA0E0u, 0x3D83B0u, 0x3D83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83B8u;
label_3d83b8:
    // 0x3d83b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3D83B8u;
    {
        const bool branch_taken_0x3d83b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d83b8) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D83C0u;
label_3d83c0:
    // 0x3d83c0: 0xc0f6868  jal         func_3DA1A0
    ctx->pc = 0x3D83C0u;
    SET_GPR_U32(ctx, 31, 0x3D83C8u);
    ctx->pc = 0x3DA1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA1A0u, 0x3D83C0u, 0x3D83C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83C8u;
label_3d83c8:
    // 0x3d83c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3D83C8u;
    {
        const bool branch_taken_0x3d83c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d83c8) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D83D0u;
label_3d83d0:
    // 0x3d83d0: 0xc0f6890  jal         func_3DA240
    ctx->pc = 0x3D83D0u;
    SET_GPR_U32(ctx, 31, 0x3D83D8u);
    ctx->pc = 0x3DA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA240u, 0x3D83D0u, 0x3D83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83D8u;
label_3d83d8:
    // 0x3d83d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D83D8u;
    {
        const bool branch_taken_0x3d83d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d83d8) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D83E0u;
label_3d83e0:
    // 0x3d83e0: 0xc0f6920  jal         func_3DA480
    ctx->pc = 0x3D83E0u;
    SET_GPR_U32(ctx, 31, 0x3D83E8u);
    ctx->pc = 0x3DA480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA480u, 0x3D83E0u, 0x3D83E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83E8u;
label_3d83e8:
    // 0x3d83e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D83E8u;
    {
        const bool branch_taken_0x3d83e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d83e8) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D83F0u;
label_3d83f0:
    // 0x3d83f0: 0xc0f69a4  jal         func_3DA690
    ctx->pc = 0x3D83F0u;
    SET_GPR_U32(ctx, 31, 0x3D83F8u);
    ctx->pc = 0x3DA690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA690u, 0x3D83F0u, 0x3D83F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83F8u;
label_3d83f8:
    // 0x3d83f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D83F8u;
    {
        const bool branch_taken_0x3d83f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d83f8) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D8400u;
label_3d8400:
    // 0x3d8400: 0xc0f6a98  jal         func_3DAA60
    ctx->pc = 0x3D8400u;
    SET_GPR_U32(ctx, 31, 0x3D8408u);
    ctx->pc = 0x3DAA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA60u, 0x3D8400u, 0x3D8408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8408u;
label_3d8408:
    // 0x3d8408: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8408u;
    {
        const bool branch_taken_0x3d8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8408) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D8410u;
label_3d8410:
    // 0x3d8410: 0xc0f6ac8  jal         func_3DAB20
    ctx->pc = 0x3D8410u;
    SET_GPR_U32(ctx, 31, 0x3D8418u);
    ctx->pc = 0x3DAB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAB20u, 0x3D8410u, 0x3D8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8418u;
label_3d8418:
    // 0x3d8418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8418u;
    {
        const bool branch_taken_0x3d8418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8418) {
            ctx->pc = 0x3D8428u;
            goto label_3d8428;
        }
    }
    ctx->pc = 0x3D8420u;
label_3d8420:
    // 0x3d8420: 0xc0f6af8  jal         func_3DABE0
    ctx->pc = 0x3D8420u;
    SET_GPR_U32(ctx, 31, 0x3D8428u);
    ctx->pc = 0x3D8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8420u;
    // 0x3d8424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DABE0u, 0x3D8420u, 0x3D8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8428u;
label_3d8428:
    // 0x3d8428: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3D8428u;
    SET_GPR_U32(ctx, 31, 0x3D8430u);
    ctx->pc = 0x3D842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8428u;
    // 0x3d842c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3D8428u, 0x3D8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8430u;
label_3d8430:
    // 0x3d8430: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3d8430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3d8434: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3d8434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d8438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8438u;
    {
        const bool branch_taken_0x3d8438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8438u;
        // 0x3d843c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8438) {
            ctx->pc = 0x3D8448u;
            goto label_3d8448;
        }
    }
    ctx->pc = 0x3D8440u;
    // 0x3d8440: 0xc0f6370  jal         func_3D8DC0
    ctx->pc = 0x3D8440u;
    SET_GPR_U32(ctx, 31, 0x3D8448u);
    ctx->pc = 0x3D8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8440u;
    // 0x3d8444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DC0u, 0x3D8440u, 0x3D8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8448u;
label_3d8448:
    // 0x3d8448: 0xc0f637c  jal         func_3D8DF0
    ctx->pc = 0x3D8448u;
    SET_GPR_U32(ctx, 31, 0x3D8450u);
    ctx->pc = 0x3D844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8448u;
    // 0x3d844c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DF0u, 0x3D8448u, 0x3D8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8450u;
label_3d8450:
    // 0x3d8450: 0x92022bdb  lbu         $v0, 0x2BDB($s0)
    ctx->pc = 0x3d8450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11227)));
    // 0x3d8454: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3d8454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3d8458: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8458u;
    {
        const bool branch_taken_0x3d8458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8458) {
            ctx->pc = 0x3D8470u;
            goto label_3d8470;
        }
    }
    ctx->pc = 0x3D8460u;
    // 0x3d8460: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d8460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d8464: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3d8464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3d8468: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D8468u;
    {
        const bool branch_taken_0x3d8468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8468u;
        // 0x3d846c: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8468) {
            ctx->pc = 0x3D8480u;
            goto label_3d8480;
        }
    }
    ctx->pc = 0x3D8470u;
label_3d8470:
    // 0x3d8470: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3d8470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3d8474: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3d8474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3d8478: 0xa602078c  sh          $v0, 0x78C($s0)
    ctx->pc = 0x3d8478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d847c: 0x0  nop
    ctx->pc = 0x3d847cu;
    // NOP
label_3d8480:
    // 0x3d8480: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3d8480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3d8484: 0xa2022b07  sb          $v0, 0x2B07($s0)
    ctx->pc = 0x3d8484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d8488: 0xc0f725c  jal         func_3DC970
    ctx->pc = 0x3D8488u;
    SET_GPR_U32(ctx, 31, 0x3D8490u);
    ctx->pc = 0x3D848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8488u;
    // 0x3d848c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC970u, 0x3D8488u, 0x3D8490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8490u;
label_3d8490:
    // 0x3d8490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8498: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8498u;
        // 0x3d849c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D84A0u;
}
