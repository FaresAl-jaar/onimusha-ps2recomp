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

// Function: sub_00200250
// Address: 0x200250 - 0x200340
void sub_00200250_0x200250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200250_0x200250");
#endif

    switch (ctx->pc) {
        case 0x200250u: goto label_200250;
        case 0x200254u: goto label_200254;
        case 0x200258u: goto label_200258;
        case 0x20025cu: goto label_20025c;
        case 0x200260u: goto label_200260;
        case 0x200264u: goto label_200264;
        case 0x200268u: goto label_200268;
        case 0x20026cu: goto label_20026c;
        case 0x200270u: goto label_200270;
        case 0x200274u: goto label_200274;
        case 0x200278u: goto label_200278;
        case 0x20027cu: goto label_20027c;
        case 0x200280u: goto label_200280;
        case 0x200284u: goto label_200284;
        case 0x200288u: goto label_200288;
        case 0x20028cu: goto label_20028c;
        case 0x200290u: goto label_200290;
        case 0x200294u: goto label_200294;
        case 0x200298u: goto label_200298;
        case 0x20029cu: goto label_20029c;
        case 0x2002a0u: goto label_2002a0;
        case 0x2002a4u: goto label_2002a4;
        case 0x2002a8u: goto label_2002a8;
        case 0x2002acu: goto label_2002ac;
        case 0x2002b0u: goto label_2002b0;
        case 0x2002b4u: goto label_2002b4;
        case 0x2002b8u: goto label_2002b8;
        case 0x2002bcu: goto label_2002bc;
        case 0x2002c0u: goto label_2002c0;
        case 0x2002c4u: goto label_2002c4;
        case 0x2002c8u: goto label_2002c8;
        case 0x2002ccu: goto label_2002cc;
        case 0x2002d0u: goto label_2002d0;
        case 0x2002d4u: goto label_2002d4;
        case 0x2002d8u: goto label_2002d8;
        case 0x2002dcu: goto label_2002dc;
        case 0x2002e0u: goto label_2002e0;
        case 0x2002e4u: goto label_2002e4;
        case 0x2002e8u: goto label_2002e8;
        case 0x2002ecu: goto label_2002ec;
        case 0x2002f0u: goto label_2002f0;
        case 0x2002f4u: goto label_2002f4;
        case 0x2002f8u: goto label_2002f8;
        case 0x2002fcu: goto label_2002fc;
        case 0x200300u: goto label_200300;
        case 0x200304u: goto label_200304;
        case 0x200308u: goto label_200308;
        case 0x20030cu: goto label_20030c;
        case 0x200310u: goto label_200310;
        case 0x200314u: goto label_200314;
        case 0x200318u: goto label_200318;
        case 0x20031cu: goto label_20031c;
        case 0x200320u: goto label_200320;
        case 0x200324u: goto label_200324;
        case 0x200328u: goto label_200328;
        case 0x20032cu: goto label_20032c;
        case 0x200330u: goto label_200330;
        case 0x200334u: goto label_200334;
        case 0x200338u: goto label_200338;
        case 0x20033cu: goto label_20033c;
        default: break;
    }

    ctx->pc = 0x200250u;

label_200250:
    // 0x200250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_200254:
    // 0x200254: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x200254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_200258:
    // 0x200258: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x200258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20025c:
    // 0x20025c: 0x2410fffc  addiu       $s0, $zero, -0x4
    ctx->pc = 0x20025cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_200260:
    // 0x200260: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x200260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_200264:
    // 0x200264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200268:
    // 0x200268: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_20026c:
    // 0x20026c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20026cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200270:
    // 0x200270: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x200270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_200274:
    // 0x200274: 0x2633038c  addiu       $s3, $s1, 0x38C
    ctx->pc = 0x200274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
label_200278:
    // 0x200278: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x200278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_20027c:
    // 0x20027c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20027cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_200280:
    // 0x200280: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x200280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_200284:
    // 0x200284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200288:
    // 0x200288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20028c:
    // 0x20028c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_200290:
    // 0x200290: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_200294:
    // 0x200294: 0x60f809  jalr        $v1
label_200298:
    if (ctx->pc == 0x200298u) {
        ctx->pc = 0x200298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200294u;
        // 0x200298: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20029Cu;
        goto label_20029c;
    }
    ctx->pc = 0x200294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20029Cu);
        ctx->pc = 0x200298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200294u;
        // 0x200298: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200294u, 0x20029Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20029Cu;
label_20029c:
    // 0x20029c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2002a0:
    // 0x2002a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2002a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2002a4:
    // 0x2002a4: 0xb08024  and         $s0, $a1, $s0
    ctx->pc = 0x2002a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_2002a8:
    // 0x2002a8: 0x8c860390  lw          $a2, 0x390($a0)
    ctx->pc = 0x2002a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
label_2002ac:
    // 0x2002ac: 0xb08823  subu        $s1, $a1, $s0
    ctx->pc = 0x2002acu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2002b0:
    // 0x2002b0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2002b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2002b4:
    // 0x2002b4: 0xc0800d0  jal         func_200340
label_2002b8:
    if (ctx->pc == 0x2002B8u) {
        ctx->pc = 0x2002B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002B4u;
        // 0x2002b8: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002BCu;
        goto label_2002bc;
    }
    ctx->pc = 0x2002B4u;
    SET_GPR_U32(ctx, 31, 0x2002BCu);
    ctx->pc = 0x2002B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002B4u;
    // 0x2002b8: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200340u, 0x2002B4u, 0x2002BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002BCu;
label_2002bc:
    // 0x2002bc: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x2002bcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
label_2002c0:
    // 0x2002c0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2002c4:
    // 0x2002c4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2002c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2002c8:
    // 0x2002c8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2002c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2002cc:
    // 0x2002cc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2002ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_2002d0:
    // 0x2002d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2002d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2002d4:
    // 0x2002d4: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x2002d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2002d8:
    // 0x2002d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2002d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2002dc:
    // 0x2002dc: 0xc094854  jal         func_252150
label_2002e0:
    if (ctx->pc == 0x2002E0u) {
        ctx->pc = 0x2002E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002DCu;
        // 0x2002e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002E4u;
        goto label_2002e4;
    }
    ctx->pc = 0x2002DCu;
    SET_GPR_U32(ctx, 31, 0x2002E4u);
    ctx->pc = 0x2002E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002DCu;
    // 0x2002e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x2002DCu, 0x2002E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002E4u;
label_2002e4:
    // 0x2002e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2002e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2002e8:
    // 0x2002e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2002e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2002ec:
    // 0x2002ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2002ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2002f0:
    // 0x2002f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2002f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2002f4:
    // 0x2002f4: 0x40f809  jalr        $v0
label_2002f8:
    if (ctx->pc == 0x2002F8u) {
        ctx->pc = 0x2002F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F4u;
        // 0x2002f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002FCu;
        goto label_2002fc;
    }
    ctx->pc = 0x2002F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2002FCu);
        ctx->pc = 0x2002F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F4u;
        // 0x2002f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2002F4u, 0x2002FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2002FCu;
label_2002fc:
    // 0x2002fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2002fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_200300:
    // 0x200300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200304:
    // 0x200304: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x200304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200308:
    // 0x200308: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x200308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20030c:
    // 0x20030c: 0x40f809  jalr        $v0
label_200310:
    if (ctx->pc == 0x200310u) {
        ctx->pc = 0x200310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20030Cu;
        // 0x200310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200314u;
        goto label_200314;
    }
    ctx->pc = 0x20030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200314u);
        ctx->pc = 0x200310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20030Cu;
        // 0x200310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20030Cu, 0x200314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200314u;
label_200314:
    // 0x200314: 0xc0801b4  jal         func_2006D0
label_200318:
    if (ctx->pc == 0x200318u) {
        ctx->pc = 0x200318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200314u;
        // 0x200318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20031Cu;
        goto label_20031c;
    }
    ctx->pc = 0x200314u;
    SET_GPR_U32(ctx, 31, 0x20031Cu);
    ctx->pc = 0x200318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200314u;
    // 0x200318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006D0u, 0x200314u, 0x20031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20031Cu;
label_20031c:
    // 0x20031c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x20031cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_200320:
    // 0x200320: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x200320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_200324:
    // 0x200324: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x200324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_200328:
    // 0x200328: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x200328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20032c:
    // 0x20032c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20032cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_200330:
    // 0x200330: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x200330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_200334:
    // 0x200334: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x200334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_200338:
    // 0x200338: 0x3e00008  jr          $ra
label_20033c:
    if (ctx->pc == 0x20033Cu) {
        ctx->pc = 0x20033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200338u;
        // 0x20033c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200340u;
        goto label_fallthrough_0x200338;
    }
    ctx->pc = 0x200338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200338u;
        // 0x20033c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200338:
    ctx->pc = 0x200340u;
}
