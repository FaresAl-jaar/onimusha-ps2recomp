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

// Function: sub_002062D0
// Address: 0x2062d0 - 0x2063b4
void sub_002062D0_0x2062d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002062D0_0x2062d0");
#endif

    switch (ctx->pc) {
        case 0x2062d0u: goto label_2062d0;
        case 0x2062d4u: goto label_2062d4;
        case 0x2062d8u: goto label_2062d8;
        case 0x2062dcu: goto label_2062dc;
        case 0x2062e0u: goto label_2062e0;
        case 0x2062e4u: goto label_2062e4;
        case 0x2062e8u: goto label_2062e8;
        case 0x2062ecu: goto label_2062ec;
        case 0x2062f0u: goto label_2062f0;
        case 0x2062f4u: goto label_2062f4;
        case 0x2062f8u: goto label_2062f8;
        case 0x2062fcu: goto label_2062fc;
        case 0x206300u: goto label_206300;
        case 0x206304u: goto label_206304;
        case 0x206308u: goto label_206308;
        case 0x20630cu: goto label_20630c;
        case 0x206310u: goto label_206310;
        case 0x206314u: goto label_206314;
        case 0x206318u: goto label_206318;
        case 0x20631cu: goto label_20631c;
        case 0x206320u: goto label_206320;
        case 0x206324u: goto label_206324;
        case 0x206328u: goto label_206328;
        case 0x20632cu: goto label_20632c;
        case 0x206330u: goto label_206330;
        case 0x206334u: goto label_206334;
        case 0x206338u: goto label_206338;
        case 0x20633cu: goto label_20633c;
        case 0x206340u: goto label_206340;
        case 0x206344u: goto label_206344;
        case 0x206348u: goto label_206348;
        case 0x20634cu: goto label_20634c;
        case 0x206350u: goto label_206350;
        case 0x206354u: goto label_206354;
        case 0x206358u: goto label_206358;
        case 0x20635cu: goto label_20635c;
        case 0x206360u: goto label_206360;
        case 0x206364u: goto label_206364;
        case 0x206368u: goto label_206368;
        case 0x20636cu: goto label_20636c;
        case 0x206370u: goto label_206370;
        case 0x206374u: goto label_206374;
        case 0x206378u: goto label_206378;
        case 0x20637cu: goto label_20637c;
        case 0x206380u: goto label_206380;
        case 0x206384u: goto label_206384;
        case 0x206388u: goto label_206388;
        case 0x20638cu: goto label_20638c;
        case 0x206390u: goto label_206390;
        case 0x206394u: goto label_206394;
        case 0x206398u: goto label_206398;
        case 0x20639cu: goto label_20639c;
        case 0x2063a0u: goto label_2063a0;
        case 0x2063a4u: goto label_2063a4;
        case 0x2063a8u: goto label_2063a8;
        case 0x2063acu: goto label_2063ac;
        case 0x2063b0u: goto label_2063b0;
        default: break;
    }

    ctx->pc = 0x2062d0u;

label_2062d0:
    // 0x2062d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2062d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2062d4:
    // 0x2062d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2062d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2062d8:
    // 0x2062d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2062d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2062dc:
    // 0x2062dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2062dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2062e0:
    // 0x2062e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2062e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2062e4:
    // 0x2062e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2062e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2062e8:
    // 0x2062e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2062e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2062ec:
    // 0x2062ec: 0xc081d84  jal         func_207610
label_2062f0:
    if (ctx->pc == 0x2062F0u) {
        ctx->pc = 0x2062F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062ECu;
        // 0x2062f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2062F4u;
        goto label_2062f4;
    }
    ctx->pc = 0x2062ECu;
    SET_GPR_U32(ctx, 31, 0x2062F4u);
    ctx->pc = 0x2062F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062ECu;
    // 0x2062f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2062ECu, 0x2062F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2062F4u;
label_2062f4:
    // 0x2062f4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2062f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_2062f8:
    // 0x2062f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2062f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2062fc:
    // 0x2062fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2062fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206300:
    // 0x206300: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_206304:
    if (ctx->pc == 0x206304u) {
        ctx->pc = 0x206304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206300u;
        // 0x206304: 0x24847308  addiu       $a0, $a0, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206308u;
        goto label_206308;
    }
    ctx->pc = 0x206300u;
    {
        const bool branch_taken_0x206300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x206304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206300u;
        // 0x206304: 0x24847308  addiu       $a0, $a0, 0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206300) {
            ctx->pc = 0x206320u;
            goto label_206320;
        }
    }
    ctx->pc = 0x206308u;
label_206308:
    // 0x206308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20630c:
    // 0x20630c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20630cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_206310:
    // 0x206310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x206310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_206314:
    // 0x206314: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x206314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_206318:
    // 0x206318: 0x8082e3e  j           func_20B8F8
label_20631c:
    if (ctx->pc == 0x20631Cu) {
        ctx->pc = 0x20631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206318u;
        // 0x20631c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206320u;
        goto label_206320;
    }
    ctx->pc = 0x206318u;
    ctx->pc = 0x20631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206318u;
    // 0x20631c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x206320u;
label_206320:
    // 0x206320: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x206320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_206324:
    // 0x206324: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
label_206328:
    if (ctx->pc == 0x206328u) {
        ctx->pc = 0x206328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206324u;
        // 0x206328: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20632Cu;
        goto label_20632c;
    }
    ctx->pc = 0x206324u;
    {
        const bool branch_taken_0x206324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x206328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206324u;
        // 0x206328: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206324) {
            ctx->pc = 0x206348u;
            goto label_206348;
        }
    }
    ctx->pc = 0x20632Cu;
label_20632c:
    // 0x20632c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_206330:
    // 0x206330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206334:
    // 0x206334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_206338:
    // 0x206338: 0x24847338  addiu       $a0, $a0, 0x7338
    ctx->pc = 0x206338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
label_20633c:
    // 0x20633c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20633cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_206340:
    // 0x206340: 0x8082e3e  j           func_20B8F8
label_206344:
    if (ctx->pc == 0x206344u) {
        ctx->pc = 0x206344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206340u;
        // 0x206344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206348u;
        goto label_206348;
    }
    ctx->pc = 0x206340u;
    ctx->pc = 0x206344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206340u;
    // 0x206344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x206348u;
label_206348:
    // 0x206348: 0xc0831c4  jal         func_20C710
label_20634c:
    if (ctx->pc == 0x20634Cu) {
        ctx->pc = 0x20634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206348u;
        // 0x20634c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206350u;
        goto label_206350;
    }
    ctx->pc = 0x206348u;
    SET_GPR_U32(ctx, 31, 0x206350u);
    ctx->pc = 0x20634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206348u;
    // 0x20634c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x206348u, 0x206350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206350u;
label_206350:
    // 0x206350: 0xc08191a  jal         func_206468
label_206354:
    if (ctx->pc == 0x206354u) {
        ctx->pc = 0x206354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206350u;
        // 0x206354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206358u;
        goto label_206358;
    }
    ctx->pc = 0x206350u;
    SET_GPR_U32(ctx, 31, 0x206358u);
    ctx->pc = 0x206354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206350u;
    // 0x206354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206468u, 0x206350u, 0x206358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206358u;
label_206358:
    // 0x206358: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x206358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_20635c:
    // 0x20635c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206360:
    // 0x206360: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x206360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_206364:
    // 0x206364: 0x40f809  jalr        $v0
label_206368:
    if (ctx->pc == 0x206368u) {
        ctx->pc = 0x20636Cu;
        goto label_20636c;
    }
    ctx->pc = 0x206364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20636Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206364u, 0x20636Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20636Cu;
label_20636c:
    // 0x20636c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206370:
    // 0x206370: 0xc093fa6  jal         func_24FE98
label_206374:
    if (ctx->pc == 0x206374u) {
        ctx->pc = 0x206374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206370u;
        // 0x206374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206378u;
        goto label_206378;
    }
    ctx->pc = 0x206370u;
    SET_GPR_U32(ctx, 31, 0x206378u);
    ctx->pc = 0x206374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206370u;
    // 0x206374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE98u, 0x206370u, 0x206378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206378u;
label_206378:
    // 0x206378: 0xae1101e4  sw          $s1, 0x1E4($s0)
    ctx->pc = 0x206378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 17));
label_20637c:
    // 0x20637c: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x20637cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_206380:
    // 0x206380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206384:
    // 0x206384: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x206384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
label_206388:
    // 0x206388: 0xc081810  jal         func_206040
label_20638c:
    if (ctx->pc == 0x20638Cu) {
        ctx->pc = 0x20638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206388u;
        // 0x20638c: 0xae1201e8  sw          $s2, 0x1E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206390u;
        goto label_206390;
    }
    ctx->pc = 0x206388u;
    SET_GPR_U32(ctx, 31, 0x206390u);
    ctx->pc = 0x20638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206388u;
    // 0x20638c: 0xae1201e8  sw          $s2, 0x1E8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206040u, 0x206388u, 0x206390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206390u;
label_206390:
    // 0x206390: 0xc0831c4  jal         func_20C710
label_206394:
    if (ctx->pc == 0x206394u) {
        ctx->pc = 0x206394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206390u;
        // 0x206394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206398u;
        goto label_206398;
    }
    ctx->pc = 0x206390u;
    SET_GPR_U32(ctx, 31, 0x206398u);
    ctx->pc = 0x206394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206390u;
    // 0x206394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C710u, 0x206390u, 0x206398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206398u;
label_206398:
    // 0x206398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20639c:
    // 0x20639c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20639cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2063a0:
    // 0x2063a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2063a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2063a4:
    // 0x2063a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2063a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2063a8:
    // 0x2063a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2063a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2063ac:
    // 0x2063ac: 0x8080930  j           func_2024C0
label_2063b0:
    if (ctx->pc == 0x2063B0u) {
        ctx->pc = 0x2063B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2063ACu;
        // 0x2063b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2063B4u;
        goto label_fallthrough_0x2063ac;
    }
    ctx->pc = 0x2063ACu;
    ctx->pc = 0x2063B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2063ACu;
    // 0x2063b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024C0u;
    sub_002024C0_0x2024c0(rdram, ctx, runtime); return;
label_fallthrough_0x2063ac:
    ctx->pc = 0x2063B4u;
}
