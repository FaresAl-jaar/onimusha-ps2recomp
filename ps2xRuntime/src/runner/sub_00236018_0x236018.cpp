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

// Function: sub_00236018
// Address: 0x236018 - 0x2363a4
void sub_00236018_0x236018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236018_0x236018");
#endif

    switch (ctx->pc) {
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        case 0x2360a8u: goto label_2360a8;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b0u: goto label_2360b0;
        case 0x2360b4u: goto label_2360b4;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360bcu: goto label_2360bc;
        case 0x2360c0u: goto label_2360c0;
        case 0x2360c4u: goto label_2360c4;
        case 0x2360c8u: goto label_2360c8;
        case 0x2360ccu: goto label_2360cc;
        case 0x2360d0u: goto label_2360d0;
        case 0x2360d4u: goto label_2360d4;
        case 0x2360d8u: goto label_2360d8;
        case 0x2360dcu: goto label_2360dc;
        case 0x2360e0u: goto label_2360e0;
        case 0x2360e4u: goto label_2360e4;
        case 0x2360e8u: goto label_2360e8;
        case 0x2360ecu: goto label_2360ec;
        case 0x2360f0u: goto label_2360f0;
        case 0x2360f4u: goto label_2360f4;
        case 0x2360f8u: goto label_2360f8;
        case 0x2360fcu: goto label_2360fc;
        case 0x236100u: goto label_236100;
        case 0x236104u: goto label_236104;
        case 0x236108u: goto label_236108;
        case 0x23610cu: goto label_23610c;
        case 0x236110u: goto label_236110;
        case 0x236114u: goto label_236114;
        case 0x236118u: goto label_236118;
        case 0x23611cu: goto label_23611c;
        case 0x236120u: goto label_236120;
        case 0x236124u: goto label_236124;
        case 0x236128u: goto label_236128;
        case 0x23612cu: goto label_23612c;
        case 0x236130u: goto label_236130;
        case 0x236134u: goto label_236134;
        case 0x236138u: goto label_236138;
        case 0x23613cu: goto label_23613c;
        case 0x236140u: goto label_236140;
        case 0x236144u: goto label_236144;
        case 0x236148u: goto label_236148;
        case 0x23614cu: goto label_23614c;
        case 0x236150u: goto label_236150;
        case 0x236154u: goto label_236154;
        case 0x236158u: goto label_236158;
        case 0x23615cu: goto label_23615c;
        case 0x236160u: goto label_236160;
        case 0x236164u: goto label_236164;
        case 0x236168u: goto label_236168;
        case 0x23616cu: goto label_23616c;
        case 0x236170u: goto label_236170;
        case 0x236174u: goto label_236174;
        case 0x236178u: goto label_236178;
        case 0x23617cu: goto label_23617c;
        case 0x236180u: goto label_236180;
        case 0x236184u: goto label_236184;
        case 0x236188u: goto label_236188;
        case 0x23618cu: goto label_23618c;
        case 0x236190u: goto label_236190;
        case 0x236194u: goto label_236194;
        case 0x236198u: goto label_236198;
        case 0x23619cu: goto label_23619c;
        case 0x2361a0u: goto label_2361a0;
        case 0x2361a4u: goto label_2361a4;
        case 0x2361a8u: goto label_2361a8;
        case 0x2361acu: goto label_2361ac;
        case 0x2361b0u: goto label_2361b0;
        case 0x2361b4u: goto label_2361b4;
        case 0x2361b8u: goto label_2361b8;
        case 0x2361bcu: goto label_2361bc;
        case 0x2361c0u: goto label_2361c0;
        case 0x2361c4u: goto label_2361c4;
        case 0x2361c8u: goto label_2361c8;
        case 0x2361ccu: goto label_2361cc;
        case 0x2361d0u: goto label_2361d0;
        case 0x2361d4u: goto label_2361d4;
        case 0x2361d8u: goto label_2361d8;
        case 0x2361dcu: goto label_2361dc;
        case 0x2361e0u: goto label_2361e0;
        case 0x2361e4u: goto label_2361e4;
        case 0x2361e8u: goto label_2361e8;
        case 0x2361ecu: goto label_2361ec;
        case 0x2361f0u: goto label_2361f0;
        case 0x2361f4u: goto label_2361f4;
        case 0x2361f8u: goto label_2361f8;
        case 0x2361fcu: goto label_2361fc;
        case 0x236200u: goto label_236200;
        case 0x236204u: goto label_236204;
        case 0x236208u: goto label_236208;
        case 0x23620cu: goto label_23620c;
        case 0x236210u: goto label_236210;
        case 0x236214u: goto label_236214;
        case 0x236218u: goto label_236218;
        case 0x23621cu: goto label_23621c;
        case 0x236220u: goto label_236220;
        case 0x236224u: goto label_236224;
        case 0x236228u: goto label_236228;
        case 0x23622cu: goto label_23622c;
        case 0x236230u: goto label_236230;
        case 0x236234u: goto label_236234;
        case 0x236238u: goto label_236238;
        case 0x23623cu: goto label_23623c;
        case 0x236240u: goto label_236240;
        case 0x236244u: goto label_236244;
        case 0x236248u: goto label_236248;
        case 0x23624cu: goto label_23624c;
        case 0x236250u: goto label_236250;
        case 0x236254u: goto label_236254;
        case 0x236258u: goto label_236258;
        case 0x23625cu: goto label_23625c;
        case 0x236260u: goto label_236260;
        case 0x236264u: goto label_236264;
        case 0x236268u: goto label_236268;
        case 0x23626cu: goto label_23626c;
        case 0x236270u: goto label_236270;
        case 0x236274u: goto label_236274;
        case 0x236278u: goto label_236278;
        case 0x23627cu: goto label_23627c;
        case 0x236280u: goto label_236280;
        case 0x236284u: goto label_236284;
        case 0x236288u: goto label_236288;
        case 0x23628cu: goto label_23628c;
        case 0x236290u: goto label_236290;
        case 0x236294u: goto label_236294;
        case 0x236298u: goto label_236298;
        case 0x23629cu: goto label_23629c;
        case 0x2362a0u: goto label_2362a0;
        case 0x2362a4u: goto label_2362a4;
        case 0x2362a8u: goto label_2362a8;
        case 0x2362acu: goto label_2362ac;
        case 0x2362b0u: goto label_2362b0;
        case 0x2362b4u: goto label_2362b4;
        case 0x2362b8u: goto label_2362b8;
        case 0x2362bcu: goto label_2362bc;
        case 0x2362c0u: goto label_2362c0;
        case 0x2362c4u: goto label_2362c4;
        case 0x2362c8u: goto label_2362c8;
        case 0x2362ccu: goto label_2362cc;
        case 0x2362d0u: goto label_2362d0;
        case 0x2362d4u: goto label_2362d4;
        case 0x2362d8u: goto label_2362d8;
        case 0x2362dcu: goto label_2362dc;
        case 0x2362e0u: goto label_2362e0;
        case 0x2362e4u: goto label_2362e4;
        case 0x2362e8u: goto label_2362e8;
        case 0x2362ecu: goto label_2362ec;
        case 0x2362f0u: goto label_2362f0;
        case 0x2362f4u: goto label_2362f4;
        case 0x2362f8u: goto label_2362f8;
        case 0x2362fcu: goto label_2362fc;
        case 0x236300u: goto label_236300;
        case 0x236304u: goto label_236304;
        case 0x236308u: goto label_236308;
        case 0x23630cu: goto label_23630c;
        case 0x236310u: goto label_236310;
        case 0x236314u: goto label_236314;
        case 0x236318u: goto label_236318;
        case 0x23631cu: goto label_23631c;
        case 0x236320u: goto label_236320;
        case 0x236324u: goto label_236324;
        case 0x236328u: goto label_236328;
        case 0x23632cu: goto label_23632c;
        case 0x236330u: goto label_236330;
        case 0x236334u: goto label_236334;
        case 0x236338u: goto label_236338;
        case 0x23633cu: goto label_23633c;
        case 0x236340u: goto label_236340;
        case 0x236344u: goto label_236344;
        case 0x236348u: goto label_236348;
        case 0x23634cu: goto label_23634c;
        case 0x236350u: goto label_236350;
        case 0x236354u: goto label_236354;
        case 0x236358u: goto label_236358;
        case 0x23635cu: goto label_23635c;
        case 0x236360u: goto label_236360;
        case 0x236364u: goto label_236364;
        case 0x236368u: goto label_236368;
        case 0x23636cu: goto label_23636c;
        case 0x236370u: goto label_236370;
        case 0x236374u: goto label_236374;
        case 0x236378u: goto label_236378;
        case 0x23637cu: goto label_23637c;
        case 0x236380u: goto label_236380;
        case 0x236384u: goto label_236384;
        case 0x236388u: goto label_236388;
        case 0x23638cu: goto label_23638c;
        case 0x236390u: goto label_236390;
        case 0x236394u: goto label_236394;
        case 0x236398u: goto label_236398;
        case 0x23639cu: goto label_23639c;
        case 0x2363a0u: goto label_2363a0;
        default: break;
    }

    ctx->pc = 0x236018u;

label_236018:
    // 0x236018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23601c:
    // 0x23601c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_236020:
    // 0x236020: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x236020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236024:
    // 0x236024: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x236024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_236028:
    // 0x236028: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x236028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_23602c:
    // 0x23602c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x23602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_236030:
    // 0x236030: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x236030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_236034:
    // 0x236034: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x236034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_236038:
    // 0x236038: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_23603c:
    // 0x23603c: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x23603cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_236040:
    // 0x236040: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_236044:
    if (ctx->pc == 0x236044u) {
        ctx->pc = 0x236044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236040u;
        // 0x236044: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236048u;
        goto label_236048;
    }
    ctx->pc = 0x236040u;
    {
        const bool branch_taken_0x236040 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x236044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236040u;
        // 0x236044: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236040) {
            ctx->pc = 0x23606Cu;
            goto label_23606c;
        }
    }
    ctx->pc = 0x236048u;
label_236048:
    // 0x236048: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x236048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_23604c:
    // 0x23604c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23604cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_236050:
    // 0x236050: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_236054:
    if (ctx->pc == 0x236054u) {
        ctx->pc = 0x236054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236050u;
        // 0x236054: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236058u;
        goto label_236058;
    }
    ctx->pc = 0x236050u;
    {
        const bool branch_taken_0x236050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236050) {
            ctx->pc = 0x236054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236050u;
            // 0x236054: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236070u;
            goto label_236070;
        }
    }
    ctx->pc = 0x236058u;
label_236058:
    // 0x236058: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x236058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_23605c:
    // 0x23605c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_236060:
    if (ctx->pc == 0x236060u) {
        ctx->pc = 0x236060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23605Cu;
        // 0x236060: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236064u;
        goto label_236064;
    }
    ctx->pc = 0x23605Cu;
    {
        const bool branch_taken_0x23605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23605c) {
            ctx->pc = 0x236060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23605Cu;
            // 0x236060: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236070u;
            goto label_236070;
        }
    }
    ctx->pc = 0x236064u;
label_236064:
    // 0x236064: 0x40f809  jalr        $v0
label_236068:
    if (ctx->pc == 0x236068u) {
        ctx->pc = 0x236068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236064u;
        // 0x236068: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23606Cu;
        goto label_23606c;
    }
    ctx->pc = 0x236064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23606Cu);
        ctx->pc = 0x236068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236064u;
        // 0x236068: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236064u, 0x23606Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23606Cu;
label_23606c:
    // 0x23606c: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x23606cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_236070:
    // 0x236070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236074:
    // 0x236074: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_236078:
    if (ctx->pc == 0x236078u) {
        ctx->pc = 0x236078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236074u;
        // 0x236078: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23607Cu;
        goto label_23607c;
    }
    ctx->pc = 0x236074u;
    {
        const bool branch_taken_0x236074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x236074) {
            ctx->pc = 0x236078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236074u;
            // 0x236078: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360A8u;
            goto label_2360a8;
        }
    }
    ctx->pc = 0x23607Cu;
label_23607c:
    // 0x23607c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23607cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_236080:
    // 0x236080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236084:
    // 0x236084: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x236084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_236088:
    // 0x236088: 0x40f809  jalr        $v0
label_23608c:
    if (ctx->pc == 0x23608Cu) {
        ctx->pc = 0x23608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236088u;
        // 0x23608c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236090u;
        goto label_236090;
    }
    ctx->pc = 0x236088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236090u);
        ctx->pc = 0x23608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236088u;
        // 0x23608c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236088u, 0x236090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236090u;
label_236090:
    // 0x236090: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_236094:
    if (ctx->pc == 0x236094u) {
        ctx->pc = 0x236094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236090u;
        // 0x236094: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236098u;
        goto label_236098;
    }
    ctx->pc = 0x236090u;
    {
        const bool branch_taken_0x236090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236090) {
            ctx->pc = 0x236094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236090u;
            // 0x236094: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360A8u;
            goto label_2360a8;
        }
    }
    ctx->pc = 0x236098u;
label_236098:
    // 0x236098: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x236098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23609c:
    // 0x23609c: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2360a0:
    if (ctx->pc == 0x2360A0u) {
        ctx->pc = 0x2360A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23609Cu;
        // 0x2360a0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360A4u;
        goto label_2360a4;
    }
    ctx->pc = 0x23609Cu;
    {
        const bool branch_taken_0x23609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23609Cu;
        // 0x2360a0: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23609c) {
            ctx->pc = 0x236384u;
            goto label_236384;
        }
    }
    ctx->pc = 0x2360A4u;
label_2360a4:
    // 0x2360a4: 0x0  nop
    ctx->pc = 0x2360a4u;
    // NOP
label_2360a8:
    // 0x2360a8: 0x26530014  addiu       $s3, $s2, 0x14
    ctx->pc = 0x2360a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2360ac:
    // 0x2360ac: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x2360acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_2360b0:
    // 0x2360b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2360b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2360b4:
    // 0x2360b4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2360b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2360b8:
    // 0x2360b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2360b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2360bc:
    // 0x2360bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2360bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2360c0:
    // 0x2360c0: 0x60f809  jalr        $v1
label_2360c4:
    if (ctx->pc == 0x2360C4u) {
        ctx->pc = 0x2360C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360C0u;
        // 0x2360c4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360C8u;
        goto label_2360c8;
    }
    ctx->pc = 0x2360C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2360C8u);
        ctx->pc = 0x2360C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360C0u;
        // 0x2360c4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360C0u, 0x2360C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2360C8u;
label_2360c8:
    // 0x2360c8: 0xc08aee6  jal         func_22BB98
label_2360cc:
    if (ctx->pc == 0x2360CCu) {
        ctx->pc = 0x2360CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360C8u;
        // 0x2360cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360D0u;
        goto label_2360d0;
    }
    ctx->pc = 0x2360C8u;
    SET_GPR_U32(ctx, 31, 0x2360D0u);
    ctx->pc = 0x2360CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360C8u;
    // 0x2360cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x2360C8u, 0x2360D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360D0u;
label_2360d0:
    // 0x2360d0: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_2360d4:
    if (ctx->pc == 0x2360D4u) {
        ctx->pc = 0x2360D8u;
        goto label_2360d8;
    }
    ctx->pc = 0x2360D0u;
    {
        const bool branch_taken_0x2360d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2360d0) {
            ctx->pc = 0x236258u;
            goto label_236258;
        }
    }
    ctx->pc = 0x2360D8u;
label_2360d8:
    // 0x2360d8: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x2360d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2360dc:
    // 0x2360dc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2360dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_2360e0:
    // 0x2360e0: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_2360e4:
    if (ctx->pc == 0x2360E4u) {
        ctx->pc = 0x2360E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360E0u;
        // 0x2360e4: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360E8u;
        goto label_2360e8;
    }
    ctx->pc = 0x2360E0u;
    {
        const bool branch_taken_0x2360e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2360E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360E0u;
        // 0x2360e4: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360e0) {
            ctx->pc = 0x236258u;
            goto label_236258;
        }
    }
    ctx->pc = 0x2360E8u;
label_2360e8:
    // 0x2360e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2360e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2360ec:
    // 0x2360ec: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2360ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2360f0:
    // 0x2360f0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2360f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2360f4:
    // 0x2360f4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2360f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2360f8:
    // 0x2360f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2360f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2360fc:
    // 0x2360fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2360fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_236100:
    // 0x236100: 0x14450055  bne         $v0, $a1, . + 4 + (0x55 << 2)
label_236104:
    if (ctx->pc == 0x236104u) {
        ctx->pc = 0x236104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236100u;
        // 0x236104: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236108u;
        goto label_236108;
    }
    ctx->pc = 0x236100u;
    {
        const bool branch_taken_0x236100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x236104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236100u;
        // 0x236104: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236100) {
            ctx->pc = 0x236258u;
            goto label_236258;
        }
    }
    ctx->pc = 0x236108u;
label_236108:
    // 0x236108: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x236108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23610c:
    // 0x23610c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x23610cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_236110:
    // 0x236110: 0xc08b7f8  jal         func_22DFE0
label_236114:
    if (ctx->pc == 0x236114u) {
        ctx->pc = 0x236114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236110u;
        // 0x236114: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236118u;
        goto label_236118;
    }
    ctx->pc = 0x236110u;
    SET_GPR_U32(ctx, 31, 0x236118u);
    ctx->pc = 0x236114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236110u;
    // 0x236114: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DFE0u, 0x236110u, 0x236118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236118u;
label_236118:
    // 0x236118: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_23611c:
    if (ctx->pc == 0x23611Cu) {
        ctx->pc = 0x23611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236118u;
        // 0x23611c: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236120u;
        goto label_236120;
    }
    ctx->pc = 0x236118u;
    {
        const bool branch_taken_0x236118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236118) {
            ctx->pc = 0x23611Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236118u;
            // 0x23611c: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236178u;
            goto label_236178;
        }
    }
    ctx->pc = 0x236120u;
label_236120:
    // 0x236120: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x236120u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_236124:
    // 0x236124: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x236124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_236128:
    // 0x236128: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x236128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23612c:
    // 0x23612c: 0x54400073  bnel        $v0, $zero, . + 4 + (0x73 << 2)
label_236130:
    if (ctx->pc == 0x236130u) {
        ctx->pc = 0x236130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23612Cu;
        // 0x236130: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236134u;
        goto label_236134;
    }
    ctx->pc = 0x23612Cu;
    {
        const bool branch_taken_0x23612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23612c) {
            ctx->pc = 0x236130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23612Cu;
            // 0x236130: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362FCu;
            goto label_2362fc;
        }
    }
    ctx->pc = 0x236134u;
label_236134:
    // 0x236134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236138:
    // 0x236138: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x236138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23613c:
    // 0x23613c: 0xc094854  jal         func_252150
label_236140:
    if (ctx->pc == 0x236140u) {
        ctx->pc = 0x236140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23613Cu;
        // 0x236140: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236144u;
        goto label_236144;
    }
    ctx->pc = 0x23613Cu;
    SET_GPR_U32(ctx, 31, 0x236144u);
    ctx->pc = 0x236140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23613Cu;
    // 0x236140: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x23613Cu, 0x236144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236144u;
label_236144:
    // 0x236144: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x236144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_236148:
    // 0x236148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23614c:
    // 0x23614c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236150:
    // 0x236150: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x236150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_236154:
    // 0x236154: 0x40f809  jalr        $v0
label_236158:
    if (ctx->pc == 0x236158u) {
        ctx->pc = 0x236158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236154u;
        // 0x236158: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23615Cu;
        goto label_23615c;
    }
    ctx->pc = 0x236154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23615Cu);
        ctx->pc = 0x236158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236154u;
        // 0x236158: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236154u, 0x23615Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23615Cu;
label_23615c:
    // 0x23615c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_236160:
    // 0x236160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236164:
    // 0x236164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236168:
    // 0x236168: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x236168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23616c:
    // 0x23616c: 0x40f809  jalr        $v0
label_236170:
    if (ctx->pc == 0x236170u) {
        ctx->pc = 0x236170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23616Cu;
        // 0x236170: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236174u;
        goto label_236174;
    }
    ctx->pc = 0x23616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236174u);
        ctx->pc = 0x236170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23616Cu;
        // 0x236170: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23616Cu, 0x236174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236174u;
label_236174:
    // 0x236174: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x236174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_236178:
    // 0x236178: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_23617c:
    if (ctx->pc == 0x23617Cu) {
        ctx->pc = 0x23617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236178u;
        // 0x23617c: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236180u;
        goto label_236180;
    }
    ctx->pc = 0x236178u;
    {
        const bool branch_taken_0x236178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236178u;
        // 0x23617c: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236178) {
            ctx->pc = 0x236384u;
            goto label_236384;
        }
    }
    ctx->pc = 0x236180u;
label_236180:
    // 0x236180: 0x10000028  b           . + 4 + (0x28 << 2)
label_236184:
    if (ctx->pc == 0x236184u) {
        ctx->pc = 0x236184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236180u;
        // 0x236184: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236188u;
        goto label_236188;
    }
    ctx->pc = 0x236180u;
    {
        const bool branch_taken_0x236180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236180u;
        // 0x236184: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236180) {
            ctx->pc = 0x236224u;
            goto label_236224;
        }
    }
    ctx->pc = 0x236188u;
label_236188:
    // 0x236188: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x236188u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23618c:
    // 0x23618c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_236190:
    if (ctx->pc == 0x236190u) {
        ctx->pc = 0x236190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23618Cu;
        // 0x236190: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236194u;
        goto label_236194;
    }
    ctx->pc = 0x23618Cu;
    {
        const bool branch_taken_0x23618c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23618c) {
            ctx->pc = 0x236190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23618Cu;
            // 0x236190: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2361DCu;
            goto label_2361dc;
        }
    }
    ctx->pc = 0x236194u;
label_236194:
    // 0x236194: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x236194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_236198:
    // 0x236198: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x236198u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23619c:
    // 0x23619c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_2361a0:
    if (ctx->pc == 0x2361A0u) {
        ctx->pc = 0x2361A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23619Cu;
        // 0x2361a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361A4u;
        goto label_2361a4;
    }
    ctx->pc = 0x23619Cu;
    {
        const bool branch_taken_0x23619c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23619c) {
            ctx->pc = 0x2361A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23619Cu;
            // 0x2361a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2361DCu;
            goto label_2361dc;
        }
    }
    ctx->pc = 0x2361A4u;
label_2361a4:
    // 0x2361a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2361a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2361a8:
    // 0x2361a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2361a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2361ac:
    // 0x2361ac: 0x0  nop
    ctx->pc = 0x2361acu;
    // NOP
label_2361b0:
    // 0x2361b0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2361b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2361b4:
    // 0x2361b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2361b8:
    if (ctx->pc == 0x2361B8u) {
        ctx->pc = 0x2361B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361B4u;
        // 0x2361b8: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361BCu;
        goto label_2361bc;
    }
    ctx->pc = 0x2361B4u;
    {
        const bool branch_taken_0x2361b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2361b4) {
            ctx->pc = 0x2361B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2361B4u;
            // 0x2361b8: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2361D8u;
            goto label_2361d8;
        }
    }
    ctx->pc = 0x2361BCu;
label_2361bc:
    // 0x2361bc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2361bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2361c0:
    // 0x2361c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2361c4:
    // 0x2361c4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2361c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2361c8:
    // 0x2361c8: 0x0  nop
    ctx->pc = 0x2361c8u;
    // NOP
label_2361cc:
    // 0x2361cc: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_2361d0:
    if (ctx->pc == 0x2361D0u) {
        ctx->pc = 0x2361D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361CCu;
        // 0x2361d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361D4u;
        goto label_2361d4;
    }
    ctx->pc = 0x2361CCu;
    {
        const bool branch_taken_0x2361cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2361cc) {
            ctx->pc = 0x2361D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2361CCu;
            // 0x2361d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2361B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2361b0;
        }
    }
    ctx->pc = 0x2361D4u;
label_2361d4:
    // 0x2361d4: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x2361d4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2361d8:
    // 0x2361d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2361d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2361dc:
    // 0x2361dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2361dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2361e0:
    // 0x2361e0: 0xc094854  jal         func_252150
label_2361e4:
    if (ctx->pc == 0x2361E4u) {
        ctx->pc = 0x2361E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361E0u;
        // 0x2361e4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361E8u;
        goto label_2361e8;
    }
    ctx->pc = 0x2361E0u;
    SET_GPR_U32(ctx, 31, 0x2361E8u);
    ctx->pc = 0x2361E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361E0u;
    // 0x2361e4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x2361E0u, 0x2361E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361E8u;
label_2361e8:
    // 0x2361e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2361e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2361ec:
    // 0x2361ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2361ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2361f0:
    // 0x2361f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2361f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2361f4:
    // 0x2361f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2361f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2361f8:
    // 0x2361f8: 0x40f809  jalr        $v0
label_2361fc:
    if (ctx->pc == 0x2361FCu) {
        ctx->pc = 0x2361FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F8u;
        // 0x2361fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236200u;
        goto label_236200;
    }
    ctx->pc = 0x2361F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236200u);
        ctx->pc = 0x2361FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F8u;
        // 0x2361fc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2361F8u, 0x236200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236200u;
label_236200:
    // 0x236200: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x236200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_236204:
    // 0x236204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236208:
    // 0x236208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23620c:
    // 0x23620c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_236210:
    // 0x236210: 0x40f809  jalr        $v0
label_236214:
    if (ctx->pc == 0x236214u) {
        ctx->pc = 0x236214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236210u;
        // 0x236214: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236218u;
        goto label_236218;
    }
    ctx->pc = 0x236210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236218u);
        ctx->pc = 0x236214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236210u;
        // 0x236214: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236210u, 0x236218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236218u;
label_236218:
    // 0x236218: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
label_23621c:
    if (ctx->pc == 0x23621Cu) {
        ctx->pc = 0x23621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236218u;
        // 0x23621c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236220u;
        goto label_236220;
    }
    ctx->pc = 0x236218u;
    {
        const bool branch_taken_0x236218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236218u;
        // 0x23621c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236218) {
            ctx->pc = 0x236388u;
            goto label_236388;
        }
    }
    ctx->pc = 0x236220u;
label_236220:
    // 0x236220: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x236220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_236224:
    // 0x236224: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x236224u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_236228:
    // 0x236228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23622c:
    // 0x23622c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236230:
    // 0x236230: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x236230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_236234:
    // 0x236234: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x236234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_236238:
    // 0x236238: 0x40f809  jalr        $v0
label_23623c:
    if (ctx->pc == 0x23623Cu) {
        ctx->pc = 0x23623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236238u;
        // 0x23623c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236240u;
        goto label_236240;
    }
    ctx->pc = 0x236238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236240u);
        ctx->pc = 0x23623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236238u;
        // 0x23623c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236238u, 0x236240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236240u;
label_236240:
    // 0x236240: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x236240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_236244:
    // 0x236244: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
label_236248:
    if (ctx->pc == 0x236248u) {
        ctx->pc = 0x236248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236244u;
        // 0x236248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23624Cu;
        goto label_23624c;
    }
    ctx->pc = 0x236244u;
    {
        const bool branch_taken_0x236244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x236248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236244u;
        // 0x236248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236244) {
            ctx->pc = 0x236188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236188;
        }
    }
    ctx->pc = 0x23624Cu;
label_23624c:
    // 0x23624c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_236250:
    if (ctx->pc == 0x236250u) {
        ctx->pc = 0x236250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23624Cu;
        // 0x236250: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236254u;
        goto label_236254;
    }
    ctx->pc = 0x23624Cu;
    {
        const bool branch_taken_0x23624c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23624Cu;
        // 0x236250: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23624c) {
            ctx->pc = 0x236388u;
            goto label_236388;
        }
    }
    ctx->pc = 0x236254u;
label_236254:
    // 0x236254: 0x0  nop
    ctx->pc = 0x236254u;
    // NOP
label_236258:
    // 0x236258: 0xc08db20  jal         func_236C80
label_23625c:
    if (ctx->pc == 0x23625Cu) {
        ctx->pc = 0x23625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236258u;
        // 0x23625c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236260u;
        goto label_236260;
    }
    ctx->pc = 0x236258u;
    SET_GPR_U32(ctx, 31, 0x236260u);
    ctx->pc = 0x23625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236258u;
    // 0x23625c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x236258u, 0x236260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236260u;
label_236260:
    // 0x236260: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x236260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_236264:
    // 0x236264: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x236264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_236268:
    // 0x236268: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_23626c:
    if (ctx->pc == 0x23626Cu) {
        ctx->pc = 0x236270u;
        goto label_236270;
    }
    ctx->pc = 0x236268u;
    {
        const bool branch_taken_0x236268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236268) {
            ctx->pc = 0x2362C0u;
            goto label_2362c0;
        }
    }
    ctx->pc = 0x236270u;
label_236270:
    // 0x236270: 0xc08aee6  jal         func_22BB98
label_236274:
    if (ctx->pc == 0x236274u) {
        ctx->pc = 0x236274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236270u;
        // 0x236274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236278u;
        goto label_236278;
    }
    ctx->pc = 0x236270u;
    SET_GPR_U32(ctx, 31, 0x236278u);
    ctx->pc = 0x236274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236270u;
    // 0x236274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x236270u, 0x236278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236278u;
label_236278:
    // 0x236278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x236278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23627c:
    // 0x23627c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23627cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236280:
    // 0x236280: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
label_236284:
    if (ctx->pc == 0x236284u) {
        ctx->pc = 0x236284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236280u;
        // 0x236284: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236288u;
        goto label_236288;
    }
    ctx->pc = 0x236280u;
    {
        const bool branch_taken_0x236280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x236280) {
            ctx->pc = 0x236284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236280u;
            // 0x236284: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236298u;
            goto label_236298;
        }
    }
    ctx->pc = 0x236288u;
label_236288:
    // 0x236288: 0xc08dbba  jal         func_236EE8
label_23628c:
    if (ctx->pc == 0x23628Cu) {
        ctx->pc = 0x23628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236288u;
        // 0x23628c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236290u;
        goto label_236290;
    }
    ctx->pc = 0x236288u;
    SET_GPR_U32(ctx, 31, 0x236290u);
    ctx->pc = 0x23628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236288u;
    // 0x23628c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EE8u, 0x236288u, 0x236290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236290u;
label_236290:
    // 0x236290: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_236294:
    if (ctx->pc == 0x236294u) {
        ctx->pc = 0x236294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236290u;
        // 0x236294: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236298u;
        goto label_236298;
    }
    ctx->pc = 0x236290u;
    {
        const bool branch_taken_0x236290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x236294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236290u;
        // 0x236294: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236290) {
            ctx->pc = 0x2362C0u;
            goto label_2362c0;
        }
    }
    ctx->pc = 0x236298u;
label_236298:
    // 0x236298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23629c:
    // 0x23629c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x23629cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_2362a0:
    // 0x2362a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2362a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2362a4:
    // 0x2362a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2362a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2362a8:
    // 0x2362a8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2362a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2362ac:
    // 0x2362ac: 0x60f809  jalr        $v1
label_2362b0:
    if (ctx->pc == 0x2362B0u) {
        ctx->pc = 0x2362B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362ACu;
        // 0x2362b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362B4u;
        goto label_2362b4;
    }
    ctx->pc = 0x2362ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2362B4u);
        ctx->pc = 0x2362B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362ACu;
        // 0x2362b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2362ACu, 0x2362B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2362B4u;
label_2362b4:
    // 0x2362b4: 0x10000034  b           . + 4 + (0x34 << 2)
label_2362b8:
    if (ctx->pc == 0x2362B8u) {
        ctx->pc = 0x2362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362B4u;
        // 0x2362b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362BCu;
        goto label_2362bc;
    }
    ctx->pc = 0x2362B4u;
    {
        const bool branch_taken_0x2362b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362B4u;
        // 0x2362b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362b4) {
            ctx->pc = 0x236388u;
            goto label_236388;
        }
    }
    ctx->pc = 0x2362BCu;
label_2362bc:
    // 0x2362bc: 0x0  nop
    ctx->pc = 0x2362bcu;
    // NOP
label_2362c0:
    // 0x2362c0: 0xc08db14  jal         func_236C50
label_2362c4:
    if (ctx->pc == 0x2362C4u) {
        ctx->pc = 0x2362C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362C0u;
        // 0x2362c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362C8u;
        goto label_2362c8;
    }
    ctx->pc = 0x2362C0u;
    SET_GPR_U32(ctx, 31, 0x2362C8u);
    ctx->pc = 0x2362C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2362C0u;
    // 0x2362c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C50u, 0x2362C0u, 0x2362C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2362C8u;
label_2362c8:
    // 0x2362c8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2362c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2362cc:
    // 0x2362cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2362ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2362d0:
    // 0x2362d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2362d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2362d4:
    // 0x2362d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2362d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2362d8:
    // 0x2362d8: 0x40f809  jalr        $v0
label_2362dc:
    if (ctx->pc == 0x2362DCu) {
        ctx->pc = 0x2362DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362D8u;
        // 0x2362dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362E0u;
        goto label_2362e0;
    }
    ctx->pc = 0x2362D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2362E0u);
        ctx->pc = 0x2362DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362D8u;
        // 0x2362dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2362D8u, 0x2362E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2362E0u;
label_2362e0:
    // 0x2362e0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2362e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2362e4:
    // 0x2362e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2362e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2362e8:
    // 0x2362e8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2362e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2362ec:
    // 0x2362ec: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x2362ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2362f0:
    // 0x2362f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2362f4:
    if (ctx->pc == 0x2362F4u) {
        ctx->pc = 0x2362F8u;
        goto label_2362f8;
    }
    ctx->pc = 0x2362F0u;
    {
        const bool branch_taken_0x2362f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2362f0) {
            ctx->pc = 0x236318u;
            goto label_236318;
        }
    }
    ctx->pc = 0x2362F8u;
label_2362f8:
    // 0x2362f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2362f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2362fc:
    // 0x2362fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2362fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236300:
    // 0x236300: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x236300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236304:
    // 0x236304: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x236304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_236308:
    // 0x236308: 0x40f809  jalr        $v0
label_23630c:
    if (ctx->pc == 0x23630Cu) {
        ctx->pc = 0x23630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236308u;
        // 0x23630c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236310u;
        goto label_236310;
    }
    ctx->pc = 0x236308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236310u);
        ctx->pc = 0x23630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236308u;
        // 0x23630c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236308u, 0x236310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236310u;
label_236310:
    // 0x236310: 0x1000001d  b           . + 4 + (0x1D << 2)
label_236314:
    if (ctx->pc == 0x236314u) {
        ctx->pc = 0x236314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236310u;
        // 0x236314: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236318u;
        goto label_236318;
    }
    ctx->pc = 0x236310u;
    {
        const bool branch_taken_0x236310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236310u;
        // 0x236314: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236310) {
            ctx->pc = 0x236388u;
            goto label_236388;
        }
    }
    ctx->pc = 0x236318u;
label_236318:
    // 0x236318: 0xc08aee6  jal         func_22BB98
label_23631c:
    if (ctx->pc == 0x23631Cu) {
        ctx->pc = 0x23631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236318u;
        // 0x23631c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236320u;
        goto label_236320;
    }
    ctx->pc = 0x236318u;
    SET_GPR_U32(ctx, 31, 0x236320u);
    ctx->pc = 0x23631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236318u;
    // 0x23631c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x236318u, 0x236320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236320u;
label_236320:
    // 0x236320: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_236324:
    // 0x236324: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_236328:
    if (ctx->pc == 0x236328u) {
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23632Cu;
        goto label_23632c;
    }
    ctx->pc = 0x236324u;
    {
        const bool branch_taken_0x236324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x236328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236324u;
        // 0x236328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236324) {
            ctx->pc = 0x236340u;
            goto label_236340;
        }
    }
    ctx->pc = 0x23632Cu;
label_23632c:
    // 0x23632c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_236330:
    // 0x236330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236334:
    // 0x236334: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x236334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_236338:
    // 0x236338: 0x40f809  jalr        $v0
label_23633c:
    if (ctx->pc == 0x23633Cu) {
        ctx->pc = 0x23633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236338u;
        // 0x23633c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236340u;
        goto label_236340;
    }
    ctx->pc = 0x236338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236340u);
        ctx->pc = 0x23633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236338u;
        // 0x23633c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236338u, 0x236340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236340u;
label_236340:
    // 0x236340: 0xc08aee6  jal         func_22BB98
label_236344:
    if (ctx->pc == 0x236344u) {
        ctx->pc = 0x236344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236340u;
        // 0x236344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236348u;
        goto label_236348;
    }
    ctx->pc = 0x236340u;
    SET_GPR_U32(ctx, 31, 0x236348u);
    ctx->pc = 0x236344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236340u;
    // 0x236344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB98u, 0x236340u, 0x236348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236348u;
label_236348:
    // 0x236348: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x236348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_23634c:
    // 0x23634c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_236350:
    if (ctx->pc == 0x236350u) {
        ctx->pc = 0x236350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23634Cu;
        // 0x236350: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236354u;
        goto label_236354;
    }
    ctx->pc = 0x23634Cu;
    {
        const bool branch_taken_0x23634c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23634c) {
            ctx->pc = 0x236350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23634Cu;
            // 0x236350: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236370u;
            goto label_236370;
        }
    }
    ctx->pc = 0x236354u;
label_236354:
    // 0x236354: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x236354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_236358:
    // 0x236358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23635c:
    // 0x23635c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23635cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236360:
    // 0x236360: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x236360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_236364:
    // 0x236364: 0x40f809  jalr        $v0
label_236368:
    if (ctx->pc == 0x236368u) {
        ctx->pc = 0x236368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236364u;
        // 0x236368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23636Cu;
        goto label_23636c;
    }
    ctx->pc = 0x236364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23636Cu);
        ctx->pc = 0x236368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236364u;
        // 0x236368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236364u, 0x23636Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23636Cu;
label_23636c:
    // 0x23636c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x23636cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_236370:
    // 0x236370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x236370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_236374:
    // 0x236374: 0xc08afd4  jal         func_22BF50
label_236378:
    if (ctx->pc == 0x236378u) {
        ctx->pc = 0x236378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236374u;
        // 0x236378: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23637Cu;
        goto label_23637c;
    }
    ctx->pc = 0x236374u;
    SET_GPR_U32(ctx, 31, 0x23637Cu);
    ctx->pc = 0x236378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236374u;
    // 0x236378: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BF50u, 0x236374u, 0x23637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23637Cu;
label_23637c:
    // 0x23637c: 0xc08aff4  jal         func_22BFD0
label_236380:
    if (ctx->pc == 0x236380u) {
        ctx->pc = 0x236380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23637Cu;
        // 0x236380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236384u;
        goto label_236384;
    }
    ctx->pc = 0x23637Cu;
    SET_GPR_U32(ctx, 31, 0x236384u);
    ctx->pc = 0x236380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23637Cu;
    // 0x236380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFD0u, 0x23637Cu, 0x236384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236384u;
label_236384:
    // 0x236384: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x236384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236388:
    // 0x236388: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x236388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23638c:
    // 0x23638c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23638cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236390:
    // 0x236390: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x236390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_236394:
    // 0x236394: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236398:
    // 0x236398: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x236398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_23639c:
    // 0x23639c: 0x3e00008  jr          $ra
label_2363a0:
    if (ctx->pc == 0x2363A0u) {
        ctx->pc = 0x2363A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23639Cu;
        // 0x2363a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363A4u;
        goto label_fallthrough_0x23639c;
    }
    ctx->pc = 0x23639Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2363A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23639Cu;
        // 0x2363a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23639Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23639c:
    ctx->pc = 0x2363A4u;
}
