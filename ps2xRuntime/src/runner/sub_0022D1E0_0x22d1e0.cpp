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

// Function: sub_0022D1E0
// Address: 0x22d1e0 - 0x22d37c
void sub_0022D1E0_0x22d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D1E0_0x22d1e0");
#endif

    switch (ctx->pc) {
        case 0x22d1e0u: goto label_22d1e0;
        case 0x22d1e4u: goto label_22d1e4;
        case 0x22d1e8u: goto label_22d1e8;
        case 0x22d1ecu: goto label_22d1ec;
        case 0x22d1f0u: goto label_22d1f0;
        case 0x22d1f4u: goto label_22d1f4;
        case 0x22d1f8u: goto label_22d1f8;
        case 0x22d1fcu: goto label_22d1fc;
        case 0x22d200u: goto label_22d200;
        case 0x22d204u: goto label_22d204;
        case 0x22d208u: goto label_22d208;
        case 0x22d20cu: goto label_22d20c;
        case 0x22d210u: goto label_22d210;
        case 0x22d214u: goto label_22d214;
        case 0x22d218u: goto label_22d218;
        case 0x22d21cu: goto label_22d21c;
        case 0x22d220u: goto label_22d220;
        case 0x22d224u: goto label_22d224;
        case 0x22d228u: goto label_22d228;
        case 0x22d22cu: goto label_22d22c;
        case 0x22d230u: goto label_22d230;
        case 0x22d234u: goto label_22d234;
        case 0x22d238u: goto label_22d238;
        case 0x22d23cu: goto label_22d23c;
        case 0x22d240u: goto label_22d240;
        case 0x22d244u: goto label_22d244;
        case 0x22d248u: goto label_22d248;
        case 0x22d24cu: goto label_22d24c;
        case 0x22d250u: goto label_22d250;
        case 0x22d254u: goto label_22d254;
        case 0x22d258u: goto label_22d258;
        case 0x22d25cu: goto label_22d25c;
        case 0x22d260u: goto label_22d260;
        case 0x22d264u: goto label_22d264;
        case 0x22d268u: goto label_22d268;
        case 0x22d26cu: goto label_22d26c;
        case 0x22d270u: goto label_22d270;
        case 0x22d274u: goto label_22d274;
        case 0x22d278u: goto label_22d278;
        case 0x22d27cu: goto label_22d27c;
        case 0x22d280u: goto label_22d280;
        case 0x22d284u: goto label_22d284;
        case 0x22d288u: goto label_22d288;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d290u: goto label_22d290;
        case 0x22d294u: goto label_22d294;
        case 0x22d298u: goto label_22d298;
        case 0x22d29cu: goto label_22d29c;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2a4u: goto label_22d2a4;
        case 0x22d2a8u: goto label_22d2a8;
        case 0x22d2acu: goto label_22d2ac;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2b4u: goto label_22d2b4;
        case 0x22d2b8u: goto label_22d2b8;
        case 0x22d2bcu: goto label_22d2bc;
        case 0x22d2c0u: goto label_22d2c0;
        case 0x22d2c4u: goto label_22d2c4;
        case 0x22d2c8u: goto label_22d2c8;
        case 0x22d2ccu: goto label_22d2cc;
        case 0x22d2d0u: goto label_22d2d0;
        case 0x22d2d4u: goto label_22d2d4;
        case 0x22d2d8u: goto label_22d2d8;
        case 0x22d2dcu: goto label_22d2dc;
        case 0x22d2e0u: goto label_22d2e0;
        case 0x22d2e4u: goto label_22d2e4;
        case 0x22d2e8u: goto label_22d2e8;
        case 0x22d2ecu: goto label_22d2ec;
        case 0x22d2f0u: goto label_22d2f0;
        case 0x22d2f4u: goto label_22d2f4;
        case 0x22d2f8u: goto label_22d2f8;
        case 0x22d2fcu: goto label_22d2fc;
        case 0x22d300u: goto label_22d300;
        case 0x22d304u: goto label_22d304;
        case 0x22d308u: goto label_22d308;
        case 0x22d30cu: goto label_22d30c;
        case 0x22d310u: goto label_22d310;
        case 0x22d314u: goto label_22d314;
        case 0x22d318u: goto label_22d318;
        case 0x22d31cu: goto label_22d31c;
        case 0x22d320u: goto label_22d320;
        case 0x22d324u: goto label_22d324;
        case 0x22d328u: goto label_22d328;
        case 0x22d32cu: goto label_22d32c;
        case 0x22d330u: goto label_22d330;
        case 0x22d334u: goto label_22d334;
        case 0x22d338u: goto label_22d338;
        case 0x22d33cu: goto label_22d33c;
        case 0x22d340u: goto label_22d340;
        case 0x22d344u: goto label_22d344;
        case 0x22d348u: goto label_22d348;
        case 0x22d34cu: goto label_22d34c;
        case 0x22d350u: goto label_22d350;
        case 0x22d354u: goto label_22d354;
        case 0x22d358u: goto label_22d358;
        case 0x22d35cu: goto label_22d35c;
        case 0x22d360u: goto label_22d360;
        case 0x22d364u: goto label_22d364;
        case 0x22d368u: goto label_22d368;
        case 0x22d36cu: goto label_22d36c;
        case 0x22d370u: goto label_22d370;
        case 0x22d374u: goto label_22d374;
        case 0x22d378u: goto label_22d378;
        default: break;
    }

    ctx->pc = 0x22d1e0u;

label_22d1e0:
    // 0x22d1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d1e4:
    // 0x22d1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d1e8:
    // 0x22d1e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22d1ec:
    // 0x22d1ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d1f0:
    // 0x22d1f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22d1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22d1f4:
    // 0x22d1f4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22d1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22d1f8:
    // 0x22d1f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22d1fc:
    // 0x22d1fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22d200:
    // 0x22d200: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22d204:
    // 0x22d204: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_22d208:
    if (ctx->pc == 0x22D208u) {
        ctx->pc = 0x22D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D204u;
        // 0x22d208: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D20Cu;
        goto label_22d20c;
    }
    ctx->pc = 0x22D204u;
    {
        const bool branch_taken_0x22d204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D204u;
        // 0x22d208: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d204) {
            ctx->pc = 0x22D33Cu;
            goto label_22d33c;
        }
    }
    ctx->pc = 0x22D20Cu;
label_22d20c:
    // 0x22d20c: 0xc08f924  jal         func_23E490
label_22d210:
    if (ctx->pc == 0x22D210u) {
        ctx->pc = 0x22D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D20Cu;
        // 0x22d210: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D214u;
        goto label_22d214;
    }
    ctx->pc = 0x22D20Cu;
    SET_GPR_U32(ctx, 31, 0x22D214u);
    ctx->pc = 0x22D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D20Cu;
    // 0x22d210: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22D20Cu, 0x22D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D214u;
label_22d214:
    // 0x22d214: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_22d218:
    if (ctx->pc == 0x22D218u) {
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D214u;
        // 0x22d218: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D21Cu;
        goto label_22d21c;
    }
    ctx->pc = 0x22D214u;
    {
        const bool branch_taken_0x22d214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d214) {
            ctx->pc = 0x22D218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D214u;
            // 0x22d218: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D33Cu;
            goto label_22d33c;
        }
    }
    ctx->pc = 0x22D21Cu;
label_22d21c:
    // 0x22d21c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22d21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22d220:
    // 0x22d220: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22d220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22d224:
    // 0x22d224: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22d228:
    // 0x22d228: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22d228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22d22c:
    // 0x22d22c: 0x40f809  jalr        $v0
label_22d230:
    if (ctx->pc == 0x22D230u) {
        ctx->pc = 0x22D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D22Cu;
        // 0x22d230: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D234u;
        goto label_22d234;
    }
    ctx->pc = 0x22D22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D234u);
        ctx->pc = 0x22D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D22Cu;
        // 0x22d230: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D22Cu, 0x22D234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D234u;
label_22d234:
    // 0x22d234: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22d234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22d238:
    // 0x22d238: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x22d238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22d23c:
    // 0x22d23c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d240:
    // 0x22d240: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22d244:
    // 0x22d244: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x22d244u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_22d248:
    // 0x22d248: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22d248u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22d24c:
    // 0x22d24c: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x22d24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d250:
    // 0x22d250: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22d250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22d254:
    // 0x22d254: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x22d254u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_22d258:
    // 0x22d258: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22d258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22d25c:
    // 0x22d25c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x22d25cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22d260:
    // 0x22d260: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x22d260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d264:
    // 0x22d264: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x22d264u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_22d268:
    // 0x22d268: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x22d268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_22d26c:
    // 0x22d26c: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_22d270:
    if (ctx->pc == 0x22D270u) {
        ctx->pc = 0x22D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D26Cu;
        // 0x22d270: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D274u;
        goto label_22d274;
    }
    ctx->pc = 0x22D26Cu;
    {
        const bool branch_taken_0x22d26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D26Cu;
        // 0x22d270: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d26c) {
            ctx->pc = 0x22D2E0u;
            goto label_22d2e0;
        }
    }
    ctx->pc = 0x22D274u;
label_22d274:
    // 0x22d274: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22d278:
    // 0x22d278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d27c:
    // 0x22d27c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22d280:
    // 0x22d280: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22d284:
    // 0x22d284: 0x19200025  blez        $t1, . + 4 + (0x25 << 2)
label_22d288:
    if (ctx->pc == 0x22D288u) {
        ctx->pc = 0x22D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D284u;
        // 0x22d288: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D28Cu;
        goto label_22d28c;
    }
    ctx->pc = 0x22D284u;
    {
        const bool branch_taken_0x22d284 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D284u;
        // 0x22d288: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d284) {
            ctx->pc = 0x22D31Cu;
            goto label_22d31c;
        }
    }
    ctx->pc = 0x22D28Cu;
label_22d28c:
    // 0x22d28c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22d28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d290:
    // 0x22d290: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x22d290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_22d294:
    // 0x22d294: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x22d294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22d298:
    // 0x22d298: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x22d298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_22d29c:
    // 0x22d29c: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x22d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_22d2a0:
    // 0x22d2a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22d2a4:
    // 0x22d2a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22d2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22d2a8:
    // 0x22d2a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22d2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22d2ac:
    // 0x22d2ac: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x22d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_22d2b0:
    // 0x22d2b0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22d2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_22d2b4:
    // 0x22d2b4: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x22d2b4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d2b8:
    // 0x22d2b8: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x22d2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_22d2bc:
    // 0x22d2bc: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x22d2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_22d2c0:
    // 0x22d2c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x22d2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_22d2c4:
    // 0x22d2c4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22d2c8:
    // 0x22d2c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22d2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22d2cc:
    // 0x22d2cc: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_22d2d0:
    if (ctx->pc == 0x22D2D0u) {
        ctx->pc = 0x22D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2CCu;
        // 0x22d2d0: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2D4u;
        goto label_22d2d4;
    }
    ctx->pc = 0x22D2CCu;
    {
        const bool branch_taken_0x22d2cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2CCu;
        // 0x22d2d0: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2cc) {
            ctx->pc = 0x22D290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d290;
        }
    }
    ctx->pc = 0x22D2D4u;
label_22d2d4:
    // 0x22d2d4: 0x10000011  b           . + 4 + (0x11 << 2)
label_22d2d8:
    if (ctx->pc == 0x22D2D8u) {
        ctx->pc = 0x22D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D4u;
        // 0x22d2d8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2DCu;
        goto label_22d2dc;
    }
    ctx->pc = 0x22D2D4u;
    {
        const bool branch_taken_0x22d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2D4u;
        // 0x22d2d8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2d4) {
            ctx->pc = 0x22D31Cu;
            goto label_22d31c;
        }
    }
    ctx->pc = 0x22D2DCu;
label_22d2dc:
    // 0x22d2dc: 0x0  nop
    ctx->pc = 0x22d2dcu;
    // NOP
label_22d2e0:
    // 0x22d2e0: 0x1920000e  blez        $t1, . + 4 + (0xE << 2)
label_22d2e4:
    if (ctx->pc == 0x22D2E4u) {
        ctx->pc = 0x22D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2E0u;
        // 0x22d2e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D2E8u;
        goto label_22d2e8;
    }
    ctx->pc = 0x22D2E0u;
    {
        const bool branch_taken_0x22d2e0 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D2E0u;
        // 0x22d2e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2e0) {
            ctx->pc = 0x22D31Cu;
            goto label_22d31c;
        }
    }
    ctx->pc = 0x22D2E8u;
label_22d2e8:
    // 0x22d2e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22d2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d2ec:
    // 0x22d2ec: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x22d2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22d2f0:
    // 0x22d2f0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x22d2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_22d2f4:
    // 0x22d2f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22d2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22d2f8:
    // 0x22d2f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x22d2f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_22d2fc:
    // 0x22d2fc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x22d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_22d300:
    // 0x22d300: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22d300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22d304:
    // 0x22d304: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x22d304u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d308:
    // 0x22d308: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22d308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22d30c:
    // 0x22d30c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x22d30cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_22d310:
    // 0x22d310: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_22d314:
    if (ctx->pc == 0x22D314u) {
        ctx->pc = 0x22D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D310u;
        // 0x22d314: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D318u;
        goto label_22d318;
    }
    ctx->pc = 0x22D310u;
    {
        const bool branch_taken_0x22d310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D310u;
        // 0x22d314: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d310) {
            ctx->pc = 0x22D2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d2f0;
        }
    }
    ctx->pc = 0x22D318u;
label_22d318:
    // 0x22d318: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22d318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22d31c:
    // 0x22d31c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22d320:
    // 0x22d320: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d324:
    // 0x22d324: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22d324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22d328:
    // 0x22d328: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22d328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22d32c:
    // 0x22d32c: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x22d32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22d330:
    // 0x22d330: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x22d330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_22d334:
    // 0x22d334: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22d334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22d338:
    // 0x22d338: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22d338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22d33c:
    // 0x22d33c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d340:
    // 0x22d340: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22d344:
    if (ctx->pc == 0x22D344u) {
        ctx->pc = 0x22D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D340u;
        // 0x22d344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D348u;
        goto label_22d348;
    }
    ctx->pc = 0x22D340u;
    {
        const bool branch_taken_0x22d340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d340) {
            ctx->pc = 0x22D344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D340u;
            // 0x22d344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D368u;
            goto label_22d368;
        }
    }
    ctx->pc = 0x22D348u;
label_22d348:
    // 0x22d348: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22d34c:
    // 0x22d34c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22d350:
    // 0x22d350: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22d350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22d354:
    // 0x22d354: 0x60f809  jalr        $v1
label_22d358:
    if (ctx->pc == 0x22D358u) {
        ctx->pc = 0x22D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D354u;
        // 0x22d358: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D35Cu;
        goto label_22d35c;
    }
    ctx->pc = 0x22D354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22D35Cu);
        ctx->pc = 0x22D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D354u;
        // 0x22d358: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D354u, 0x22D35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D35Cu;
label_22d35c:
    // 0x22d35c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d360:
    // 0x22d360: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22d360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22d364:
    // 0x22d364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d368:
    // 0x22d368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22d368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22d36c:
    // 0x22d36c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22d36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d370:
    // 0x22d370: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22d370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22d374:
    // 0x22d374: 0x3e00008  jr          $ra
label_22d378:
    if (ctx->pc == 0x22D378u) {
        ctx->pc = 0x22D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D374u;
        // 0x22d378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D37Cu;
        goto label_fallthrough_0x22d374;
    }
    ctx->pc = 0x22D374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D374u;
        // 0x22d378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d374:
    ctx->pc = 0x22D37Cu;
}
