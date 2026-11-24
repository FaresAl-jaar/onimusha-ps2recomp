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

// Function: sub_00118F50
// Address: 0x118f50 - 0x1191f4
void sub_00118F50_0x118f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118F50_0x118f50");
#endif

    switch (ctx->pc) {
        case 0x118f50u: goto label_118f50;
        case 0x118f54u: goto label_118f54;
        case 0x118f58u: goto label_118f58;
        case 0x118f5cu: goto label_118f5c;
        case 0x118f60u: goto label_118f60;
        case 0x118f64u: goto label_118f64;
        case 0x118f68u: goto label_118f68;
        case 0x118f6cu: goto label_118f6c;
        case 0x118f70u: goto label_118f70;
        case 0x118f74u: goto label_118f74;
        case 0x118f78u: goto label_118f78;
        case 0x118f7cu: goto label_118f7c;
        case 0x118f80u: goto label_118f80;
        case 0x118f84u: goto label_118f84;
        case 0x118f88u: goto label_118f88;
        case 0x118f8cu: goto label_118f8c;
        case 0x118f90u: goto label_118f90;
        case 0x118f94u: goto label_118f94;
        case 0x118f98u: goto label_118f98;
        case 0x118f9cu: goto label_118f9c;
        case 0x118fa0u: goto label_118fa0;
        case 0x118fa4u: goto label_118fa4;
        case 0x118fa8u: goto label_118fa8;
        case 0x118facu: goto label_118fac;
        case 0x118fb0u: goto label_118fb0;
        case 0x118fb4u: goto label_118fb4;
        case 0x118fb8u: goto label_118fb8;
        case 0x118fbcu: goto label_118fbc;
        case 0x118fc0u: goto label_118fc0;
        case 0x118fc4u: goto label_118fc4;
        case 0x118fc8u: goto label_118fc8;
        case 0x118fccu: goto label_118fcc;
        case 0x118fd0u: goto label_118fd0;
        case 0x118fd4u: goto label_118fd4;
        case 0x118fd8u: goto label_118fd8;
        case 0x118fdcu: goto label_118fdc;
        case 0x118fe0u: goto label_118fe0;
        case 0x118fe4u: goto label_118fe4;
        case 0x118fe8u: goto label_118fe8;
        case 0x118fecu: goto label_118fec;
        case 0x118ff0u: goto label_118ff0;
        case 0x118ff4u: goto label_118ff4;
        case 0x118ff8u: goto label_118ff8;
        case 0x118ffcu: goto label_118ffc;
        case 0x119000u: goto label_119000;
        case 0x119004u: goto label_119004;
        case 0x119008u: goto label_119008;
        case 0x11900cu: goto label_11900c;
        case 0x119010u: goto label_119010;
        case 0x119014u: goto label_119014;
        case 0x119018u: goto label_119018;
        case 0x11901cu: goto label_11901c;
        case 0x119020u: goto label_119020;
        case 0x119024u: goto label_119024;
        case 0x119028u: goto label_119028;
        case 0x11902cu: goto label_11902c;
        case 0x119030u: goto label_119030;
        case 0x119034u: goto label_119034;
        case 0x119038u: goto label_119038;
        case 0x11903cu: goto label_11903c;
        case 0x119040u: goto label_119040;
        case 0x119044u: goto label_119044;
        case 0x119048u: goto label_119048;
        case 0x11904cu: goto label_11904c;
        case 0x119050u: goto label_119050;
        case 0x119054u: goto label_119054;
        case 0x119058u: goto label_119058;
        case 0x11905cu: goto label_11905c;
        case 0x119060u: goto label_119060;
        case 0x119064u: goto label_119064;
        case 0x119068u: goto label_119068;
        case 0x11906cu: goto label_11906c;
        case 0x119070u: goto label_119070;
        case 0x119074u: goto label_119074;
        case 0x119078u: goto label_119078;
        case 0x11907cu: goto label_11907c;
        case 0x119080u: goto label_119080;
        case 0x119084u: goto label_119084;
        case 0x119088u: goto label_119088;
        case 0x11908cu: goto label_11908c;
        case 0x119090u: goto label_119090;
        case 0x119094u: goto label_119094;
        case 0x119098u: goto label_119098;
        case 0x11909cu: goto label_11909c;
        case 0x1190a0u: goto label_1190a0;
        case 0x1190a4u: goto label_1190a4;
        case 0x1190a8u: goto label_1190a8;
        case 0x1190acu: goto label_1190ac;
        case 0x1190b0u: goto label_1190b0;
        case 0x1190b4u: goto label_1190b4;
        case 0x1190b8u: goto label_1190b8;
        case 0x1190bcu: goto label_1190bc;
        case 0x1190c0u: goto label_1190c0;
        case 0x1190c4u: goto label_1190c4;
        case 0x1190c8u: goto label_1190c8;
        case 0x1190ccu: goto label_1190cc;
        case 0x1190d0u: goto label_1190d0;
        case 0x1190d4u: goto label_1190d4;
        case 0x1190d8u: goto label_1190d8;
        case 0x1190dcu: goto label_1190dc;
        case 0x1190e0u: goto label_1190e0;
        case 0x1190e4u: goto label_1190e4;
        case 0x1190e8u: goto label_1190e8;
        case 0x1190ecu: goto label_1190ec;
        case 0x1190f0u: goto label_1190f0;
        case 0x1190f4u: goto label_1190f4;
        case 0x1190f8u: goto label_1190f8;
        case 0x1190fcu: goto label_1190fc;
        case 0x119100u: goto label_119100;
        case 0x119104u: goto label_119104;
        case 0x119108u: goto label_119108;
        case 0x11910cu: goto label_11910c;
        case 0x119110u: goto label_119110;
        case 0x119114u: goto label_119114;
        case 0x119118u: goto label_119118;
        case 0x11911cu: goto label_11911c;
        case 0x119120u: goto label_119120;
        case 0x119124u: goto label_119124;
        case 0x119128u: goto label_119128;
        case 0x11912cu: goto label_11912c;
        case 0x119130u: goto label_119130;
        case 0x119134u: goto label_119134;
        case 0x119138u: goto label_119138;
        case 0x11913cu: goto label_11913c;
        case 0x119140u: goto label_119140;
        case 0x119144u: goto label_119144;
        case 0x119148u: goto label_119148;
        case 0x11914cu: goto label_11914c;
        case 0x119150u: goto label_119150;
        case 0x119154u: goto label_119154;
        case 0x119158u: goto label_119158;
        case 0x11915cu: goto label_11915c;
        case 0x119160u: goto label_119160;
        case 0x119164u: goto label_119164;
        case 0x119168u: goto label_119168;
        case 0x11916cu: goto label_11916c;
        case 0x119170u: goto label_119170;
        case 0x119174u: goto label_119174;
        case 0x119178u: goto label_119178;
        case 0x11917cu: goto label_11917c;
        case 0x119180u: goto label_119180;
        case 0x119184u: goto label_119184;
        case 0x119188u: goto label_119188;
        case 0x11918cu: goto label_11918c;
        case 0x119190u: goto label_119190;
        case 0x119194u: goto label_119194;
        case 0x119198u: goto label_119198;
        case 0x11919cu: goto label_11919c;
        case 0x1191a0u: goto label_1191a0;
        case 0x1191a4u: goto label_1191a4;
        case 0x1191a8u: goto label_1191a8;
        case 0x1191acu: goto label_1191ac;
        case 0x1191b0u: goto label_1191b0;
        case 0x1191b4u: goto label_1191b4;
        case 0x1191b8u: goto label_1191b8;
        case 0x1191bcu: goto label_1191bc;
        case 0x1191c0u: goto label_1191c0;
        case 0x1191c4u: goto label_1191c4;
        case 0x1191c8u: goto label_1191c8;
        case 0x1191ccu: goto label_1191cc;
        case 0x1191d0u: goto label_1191d0;
        case 0x1191d4u: goto label_1191d4;
        case 0x1191d8u: goto label_1191d8;
        case 0x1191dcu: goto label_1191dc;
        case 0x1191e0u: goto label_1191e0;
        case 0x1191e4u: goto label_1191e4;
        case 0x1191e8u: goto label_1191e8;
        case 0x1191ecu: goto label_1191ec;
        case 0x1191f0u: goto label_1191f0;
        default: break;
    }

    ctx->pc = 0x118f50u;

label_118f50:
    // 0x118f50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x118f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_118f54:
    // 0x118f54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x118f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_118f58:
    // 0x118f58: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x118f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_118f5c:
    // 0x118f5c: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x118f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_118f60:
    // 0x118f60: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x118f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_118f64:
    // 0x118f64: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x118f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_118f68:
    // 0x118f68: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x118f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_118f6c:
    // 0x118f6c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x118f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_118f70:
    // 0x118f70: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_118f74:
    // 0x118f74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_118f78:
    // 0x118f78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_118f7c:
    // 0x118f7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_118f80:
    // 0x118f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_118f84:
    // 0x118f84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118f84u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_118f88:
    // 0x118f88: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x118f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_118f8c:
    // 0x118f8c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_118f90:
    if (ctx->pc == 0x118F90u) {
        ctx->pc = 0x118F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F8Cu;
        // 0x118f90: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118F94u;
        goto label_118f94;
    }
    ctx->pc = 0x118F8Cu;
    {
        const bool branch_taken_0x118f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F8Cu;
        // 0x118f90: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f8c) {
            ctx->pc = 0x119100u;
            goto label_119100;
        }
    }
    ctx->pc = 0x118F94u;
label_118f94:
    // 0x118f94: 0x26a24148  addiu       $v0, $s5, 0x4148
    ctx->pc = 0x118f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16712));
label_118f98:
    // 0x118f98: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x118f98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_118f9c:
    // 0x118f9c: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_118fa0:
    if (ctx->pc == 0x118FA0u) {
        ctx->pc = 0x118FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F9Cu;
        // 0x118fa0: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118FA4u;
        goto label_118fa4;
    }
    ctx->pc = 0x118F9Cu;
    {
        const bool branch_taken_0x118f9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F9Cu;
        // 0x118fa0: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f9c) {
            ctx->pc = 0x119100u;
            goto label_119100;
        }
    }
    ctx->pc = 0x118FA4u;
label_118fa4:
    // 0x118fa4: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x118fa4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_118fa8:
    // 0x118fa8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x118fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_118fac:
    // 0x118fac: 0x0  nop
    ctx->pc = 0x118facu;
    // NOP
label_118fb0:
    // 0x118fb0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x118fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_118fb4:
    // 0x118fb4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x118fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_118fb8:
    // 0x118fb8: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x118fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_118fbc:
    // 0x118fbc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x118fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_118fc0:
    // 0x118fc0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x118fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_118fc4:
    // 0x118fc4: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x118fc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_118fc8:
    // 0x118fc8: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x118fc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_118fcc:
    // 0x118fcc: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x118fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_118fd0:
    // 0x118fd0: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x118fd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_118fd4:
    // 0x118fd4: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x118fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_118fd8:
    // 0x118fd8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_118fdc:
    if (ctx->pc == 0x118FDCu) {
        ctx->pc = 0x118FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FD8u;
        // 0x118fdc: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118FE0u;
        goto label_118fe0;
    }
    ctx->pc = 0x118FD8u;
    {
        const bool branch_taken_0x118fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FD8u;
        // 0x118fdc: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fd8) {
            ctx->pc = 0x119004u;
            goto label_119004;
        }
    }
    ctx->pc = 0x118FE0u;
label_118fe0:
    // 0x118fe0: 0xde824148  ld          $v0, 0x4148($s4)
    ctx->pc = 0x118fe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16712)));
label_118fe4:
    // 0x118fe4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x118fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_118fe8:
    // 0x118fe8: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x118fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_118fec:
    // 0x118fec: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x118fecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_118ff0:
    // 0x118ff0: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x118ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_118ff4:
    // 0x118ff4: 0xc046264  jal         func_118990
label_118ff8:
    if (ctx->pc == 0x118FF8u) {
        ctx->pc = 0x118FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FF4u;
        // 0x118ff8: 0xfe824148  sd          $v0, 0x4148($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 16712), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118FFCu;
        goto label_118ffc;
    }
    ctx->pc = 0x118FF4u;
    SET_GPR_U32(ctx, 31, 0x118FFCu);
    ctx->pc = 0x118FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FF4u;
    // 0x118ff8: 0xfe824148  sd          $v0, 0x4148($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 16712), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x118FF4u, 0x118FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FFCu;
label_118ffc:
    // 0x118ffc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x118ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_119000:
    // 0x119000: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x119000u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_119004:
    // 0x119004: 0xde844148  ld          $a0, 0x4148($s4)
    ctx->pc = 0x119004u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 16712)));
label_119008:
    // 0x119008: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x119008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_11900c:
    // 0x11900c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_119010:
    // 0x119010: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x119010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_119014:
    // 0x119014: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x119014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_119018:
    // 0x119018: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11901c:
    // 0x11901c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x11901cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_119020:
    // 0x119020: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x119020u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_119024:
    // 0x119024: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x119024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_119028:
    // 0x119028: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_11902c:
    if (ctx->pc == 0x11902Cu) {
        ctx->pc = 0x11902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119028u;
        // 0x11902c: 0x26924148  addiu       $s2, $s4, 0x4148 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119030u;
        goto label_119030;
    }
    ctx->pc = 0x119028u;
    {
        const bool branch_taken_0x119028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119028u;
        // 0x11902c: 0x26924148  addiu       $s2, $s4, 0x4148 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119028) {
            ctx->pc = 0x119100u;
            goto label_119100;
        }
    }
    ctx->pc = 0x119030u;
label_119030:
    // 0x119030: 0xc0463c6  jal         func_118F18
label_119034:
    if (ctx->pc == 0x119034u) {
        ctx->pc = 0x119034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119030u;
        // 0x119034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119038u;
        goto label_119038;
    }
    ctx->pc = 0x119030u;
    SET_GPR_U32(ctx, 31, 0x119038u);
    ctx->pc = 0x119034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119030u;
    // 0x119034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F18u, 0x119030u, 0x119038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119038u;
label_119038:
    // 0x119038: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11903c:
    // 0x11903c: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x11903cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_119040:
    // 0x119040: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x119040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_119044:
    // 0x119044: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x119044u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_119048:
    // 0x119048: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x119048u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_11904c:
    // 0x11904c: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x11904cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_119050:
    // 0x119050: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x119050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_119054:
    // 0x119054: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x119054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_119058:
    // 0x119058: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x119058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_11905c:
    // 0x11905c: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x11905cu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_119060:
    // 0x119060: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x119060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_119064:
    // 0x119064: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x119064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119068:
    // 0x119068: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x119068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_11906c:
    // 0x11906c: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x11906cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_119070:
    // 0x119070: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x119070u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_119074:
    // 0x119074: 0x40f809  jalr        $v0
label_119078:
    if (ctx->pc == 0x119078u) {
        ctx->pc = 0x119078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119074u;
        // 0x119078: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11907Cu;
        goto label_11907c;
    }
    ctx->pc = 0x119074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11907Cu);
        ctx->pc = 0x119078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119074u;
        // 0x119078: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119074u, 0x11907Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11907Cu;
label_11907c:
    // 0x11907c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119080:
    // 0x119080: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_119084:
    if (ctx->pc == 0x119084u) {
        ctx->pc = 0x119084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119080u;
        // 0x119084: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119088u;
        goto label_119088;
    }
    ctx->pc = 0x119080u;
    {
        const bool branch_taken_0x119080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x119084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119080u;
        // 0x119084: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119080) {
            ctx->pc = 0x1190A0u;
            goto label_1190a0;
        }
    }
    ctx->pc = 0x119088u;
label_119088:
    // 0x119088: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11908c:
    // 0x11908c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_119090:
    // 0x119090: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x119090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_119094:
    // 0x119094: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x119094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_119098:
    // 0x119098: 0x10000014  b           . + 4 + (0x14 << 2)
label_11909c:
    if (ctx->pc == 0x11909Cu) {
        ctx->pc = 0x11909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119098u;
        // 0x11909c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190A0u;
        goto label_1190a0;
    }
    ctx->pc = 0x119098u;
    {
        const bool branch_taken_0x119098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119098u;
        // 0x11909c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119098) {
            ctx->pc = 0x1190ECu;
            goto label_1190ec;
        }
    }
    ctx->pc = 0x1190A0u;
label_1190a0:
    // 0x1190a0: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_1190a4:
    if (ctx->pc == 0x1190A4u) {
        ctx->pc = 0x1190A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190A0u;
        // 0x1190a4: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190A8u;
        goto label_1190a8;
    }
    ctx->pc = 0x1190A0u;
    {
        const bool branch_taken_0x1190a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1190A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190A0u;
        // 0x1190a4: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190a0) {
            ctx->pc = 0x1190D0u;
            goto label_1190d0;
        }
    }
    ctx->pc = 0x1190A8u;
label_1190a8:
    // 0x1190a8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1190a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1190ac:
    // 0x1190ac: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1190acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1190b0:
    // 0x1190b0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1190b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1190b4:
    // 0x1190b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1190b8:
    // 0x1190b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1190b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1190bc:
    // 0x1190bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1190bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1190c0:
    // 0x1190c0: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1190c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_1190c4:
    // 0x1190c4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1190c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1190c8:
    // 0x1190c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1190cc:
    if (ctx->pc == 0x1190CCu) {
        ctx->pc = 0x1190CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190C8u;
        // 0x1190cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190D0u;
        goto label_1190d0;
    }
    ctx->pc = 0x1190C8u;
    {
        const bool branch_taken_0x1190c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190C8u;
        // 0x1190cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190c8) {
            ctx->pc = 0x1190F0u;
            goto label_1190f0;
        }
    }
    ctx->pc = 0x1190D0u;
label_1190d0:
    // 0x1190d0: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1190d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1190d4:
    // 0x1190d4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1190d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1190d8:
    // 0x1190d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1190d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1190dc:
    // 0x1190dc: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x1190dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_1190e0:
    // 0x1190e0: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1190e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_1190e4:
    // 0x1190e4: 0xc0463a4  jal         func_118E90
label_1190e8:
    if (ctx->pc == 0x1190E8u) {
        ctx->pc = 0x1190E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190E4u;
        // 0x1190e8: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190ECu;
        goto label_1190ec;
    }
    ctx->pc = 0x1190E4u;
    SET_GPR_U32(ctx, 31, 0x1190ECu);
    ctx->pc = 0x1190E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190E4u;
    // 0x1190e8: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E90u, 0x1190E4u, 0x1190ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190ECu;
label_1190ec:
    // 0x1190ec: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1190ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1190f0:
    // 0x1190f0: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_1190f4:
    if (ctx->pc == 0x1190F4u) {
        ctx->pc = 0x1190F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F0u;
        // 0x1190f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1190F8u;
        goto label_1190f8;
    }
    ctx->pc = 0x1190F0u;
    {
        const bool branch_taken_0x1190f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1190F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F0u;
        // 0x1190f4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190f0) {
            ctx->pc = 0x118FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118fb0;
        }
    }
    ctx->pc = 0x1190F8u;
label_1190f8:
    // 0x1190f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1190fc:
    if (ctx->pc == 0x1190FCu) {
        ctx->pc = 0x1190FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F8u;
        // 0x1190fc: 0x26a44148  addiu       $a0, $s5, 0x4148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119100u;
        goto label_119100;
    }
    ctx->pc = 0x1190F8u;
    {
        const bool branch_taken_0x1190f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F8u;
        // 0x1190fc: 0x26a44148  addiu       $a0, $s5, 0x4148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190f8) {
            ctx->pc = 0x119104u;
            goto label_119104;
        }
    }
    ctx->pc = 0x119100u;
label_119100:
    // 0x119100: 0x26a44148  addiu       $a0, $s5, 0x4148
    ctx->pc = 0x119100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16712));
label_119104:
    // 0x119104: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x119104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119108:
    // 0x119108: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x119108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_11910c:
    // 0x11910c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11910cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_119110:
    // 0x119110: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x119110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_119114:
    // 0x119114: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x119114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_119118:
    // 0x119118: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119118u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_11911c:
    // 0x11911c: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x11911cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_119120:
    // 0x119120: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x119120u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_119124:
    // 0x119124: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x119124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_119128:
    // 0x119128: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_11912c:
    if (ctx->pc == 0x11912Cu) {
        ctx->pc = 0x119130u;
        goto label_119130;
    }
    ctx->pc = 0x119128u;
    {
        const bool branch_taken_0x119128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119128) {
            ctx->pc = 0x119154u;
            goto label_119154;
        }
    }
    ctx->pc = 0x119130u;
label_119130:
    // 0x119130: 0xdea24148  ld          $v0, 0x4148($s5)
    ctx->pc = 0x119130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16712)));
label_119134:
    // 0x119134: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_119138:
    // 0x119138: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x119138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_11913c:
    // 0x11913c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x11913cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_119140:
    // 0x119140: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x119140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_119144:
    // 0x119144: 0xc046264  jal         func_118990
label_119148:
    if (ctx->pc == 0x119148u) {
        ctx->pc = 0x119148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119144u;
        // 0x119148: 0xfea24148  sd          $v0, 0x4148($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16712), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11914Cu;
        goto label_11914c;
    }
    ctx->pc = 0x119144u;
    SET_GPR_U32(ctx, 31, 0x11914Cu);
    ctx->pc = 0x119148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119144u;
    // 0x119148: 0xfea24148  sd          $v0, 0x4148($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 16712), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x119144u, 0x11914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11914Cu;
label_11914c:
    // 0x11914c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11914cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_119150:
    // 0x119150: 0x8c841000  lw          $a0, 0x1000($a0)
    ctx->pc = 0x119150u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 4096))); // MMIO: 0x10001000
label_119154:
    // 0x119154: 0xdea24148  ld          $v0, 0x4148($s5)
    ctx->pc = 0x119154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16712)));
label_119158:
    // 0x119158: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x119158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_11915c:
    // 0x11915c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_119160:
    // 0x119160: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x119160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_119164:
    // 0x119164: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x119164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_119168:
    // 0x119168: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x119168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11916c:
    // 0x11916c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_119170:
    // 0x119170: 0xc046340  jal         func_118D00
label_119174:
    if (ctx->pc == 0x119174u) {
        ctx->pc = 0x119174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119170u;
        // 0x119174: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119178u;
        goto label_119178;
    }
    ctx->pc = 0x119170u;
    SET_GPR_U32(ctx, 31, 0x119178u);
    ctx->pc = 0x119174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119170u;
    // 0x119174: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D00u, 0x119170u, 0x119178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119178u;
label_119178:
    // 0x119178: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x119178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_11917c:
    // 0x11917c: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x11917cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_119180:
    // 0x119180: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_119184:
    // 0x119184: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x119184u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_119188:
    // 0x119188: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x119188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_11918c:
    // 0x11918c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_119190:
    if (ctx->pc == 0x119190u) {
        ctx->pc = 0x119194u;
        goto label_119194;
    }
    ctx->pc = 0x11918Cu;
    {
        const bool branch_taken_0x11918c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11918c) {
            ctx->pc = 0x1191B8u;
            goto label_1191b8;
        }
    }
    ctx->pc = 0x119194u;
label_119194:
    // 0x119194: 0xdea24148  ld          $v0, 0x4148($s5)
    ctx->pc = 0x119194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16712)));
label_119198:
    // 0x119198: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_11919c:
    // 0x11919c: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x11919cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_1191a0:
    // 0x1191a0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1191a0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_1191a4:
    // 0x1191a4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1191a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1191a8:
    // 0x1191a8: 0xc046264  jal         func_118990
label_1191ac:
    if (ctx->pc == 0x1191ACu) {
        ctx->pc = 0x1191ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191A8u;
        // 0x1191ac: 0xfea24148  sd          $v0, 0x4148($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16712), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1191B0u;
        goto label_1191b0;
    }
    ctx->pc = 0x1191A8u;
    SET_GPR_U32(ctx, 31, 0x1191B0u);
    ctx->pc = 0x1191ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1191A8u;
    // 0x1191ac: 0xfea24148  sd          $v0, 0x4148($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 16712), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x1191A8u, 0x1191B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1191B0u;
label_1191b0:
    // 0x1191b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1191b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1191b4:
    // 0x1191b4: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x1191b4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_1191b8:
    // 0x1191b8: 0xdea24148  ld          $v0, 0x4148($s5)
    ctx->pc = 0x1191b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 16712)));
label_1191bc:
    // 0x1191bc: 0xf  sync
    ctx->pc = 0x1191bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1191c0:
    // 0x1191c0: 0x42000038  ei
    ctx->pc = 0x1191c0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1191c4:
    // 0x1191c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1191c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1191c8:
    // 0x1191c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1191c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1191cc:
    // 0x1191cc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1191ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1191d0:
    // 0x1191d0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1191d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1191d4:
    // 0x1191d4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1191d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1191d8:
    // 0x1191d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1191d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1191dc:
    // 0x1191dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1191dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1191e0:
    // 0x1191e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1191e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1191e4:
    // 0x1191e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1191e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1191e8:
    // 0x1191e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1191e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1191ec:
    // 0x1191ec: 0x3e00008  jr          $ra
label_1191f0:
    if (ctx->pc == 0x1191F0u) {
        ctx->pc = 0x1191F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191ECu;
        // 0x1191f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1191F4u;
        goto label_fallthrough_0x1191ec;
    }
    ctx->pc = 0x1191ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1191F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191ECu;
        // 0x1191f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1191ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1191ec:
    ctx->pc = 0x1191F4u;
}
