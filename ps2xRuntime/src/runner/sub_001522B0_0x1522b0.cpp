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

// Function: sub_001522B0
// Address: 0x1522b0 - 0x1524b8
void sub_001522B0_0x1522b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001522B0_0x1522b0");
#endif

    switch (ctx->pc) {
        case 0x152308u: goto label_152308;
        case 0x152338u: goto label_152338;
        case 0x152364u: goto label_152364;
        case 0x152374u: goto label_152374;
        case 0x152390u: goto label_152390;
        case 0x1523bcu: goto label_1523bc;
        case 0x1523ccu: goto label_1523cc;
        case 0x1523f4u: goto label_1523f4;
        case 0x152414u: goto label_152414;
        case 0x152420u: goto label_152420;
        case 0x15243cu: goto label_15243c;
        case 0x152448u: goto label_152448;
        case 0x152458u: goto label_152458;
        case 0x15246cu: goto label_15246c;
        default: break;
    }

    ctx->pc = 0x1522b0u;

    // 0x1522b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1522b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1522b4: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x1522b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x1522b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1522b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1522bc: 0x3421fff1  ori         $at, $at, 0xFFF1
    ctx->pc = 0x1522bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65521);
    // 0x1522c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1522c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1522c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1522c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1522c8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1522c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1522ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1522d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1522d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1522d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1522d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1522d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1522dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1522dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1522e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1522e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1522e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1522e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1522ec: 0x241082b  sltu        $at, $s2, $at
    ctx->pc = 0x1522ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1522f0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1522f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1522f4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1522F4u;
    {
        const bool branch_taken_0x1522f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1522F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522F4u;
        // 0x1522f8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522f4) {
            ctx->pc = 0x152310u;
            goto label_152310;
        }
    }
    ctx->pc = 0x1522FCu;
    // 0x1522fc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1522fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152300: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152300u;
    SET_GPR_U32(ctx, 31, 0x152308u);
    ctx->pc = 0x152304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152300u;
    // 0x152304: 0x24844de0  addiu       $a0, $a0, 0x4DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152300u, 0x152308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152308u;
label_152308:
    // 0x152308: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x152308u;
    {
        const bool branch_taken_0x152308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152308u;
        // 0x15230c: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152308) {
            ctx->pc = 0x152480u;
            goto label_152480;
        }
    }
    ctx->pc = 0x152310u;
label_152310:
    // 0x152310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152314: 0x1202005c  beq         $s0, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x152314u;
    {
        const bool branch_taken_0x152314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x152314) {
            ctx->pc = 0x152488u;
            goto label_152488;
        }
    }
    ctx->pc = 0x15231Cu;
    // 0x15231c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15231Cu;
    {
        const bool branch_taken_0x15231c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15231c) {
            ctx->pc = 0x152330u;
            goto label_152330;
        }
    }
    ctx->pc = 0x152324u;
    // 0x152324: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x152324u;
    {
        const bool branch_taken_0x152324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152324) {
            ctx->pc = 0x1523E8u;
            goto label_1523e8;
        }
    }
    ctx->pc = 0x15232Cu;
    // 0x15232c: 0x0  nop
    ctx->pc = 0x15232cu;
    // NOP
label_152330:
    // 0x152330: 0x292a821  addu        $s5, $s4, $s2
    ctx->pc = 0x152330u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x152334: 0x0  nop
    ctx->pc = 0x152334u;
    // NOP
label_152338:
    // 0x152338: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x152338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15233c: 0xac347080  sw          $s4, 0x7080($at)
    ctx->pc = 0x15233cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x7E7080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E7080u, _value); } while (0);
    // 0x152340: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152344: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x152344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x152348: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x152348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15234c: 0xac337084  sw          $s3, 0x7084($at)
    ctx->pc = 0x15234cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x7E7084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E7084u, _value); } while (0);
    // 0x152350: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x152350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x152354: 0xac327088  sw          $s2, 0x7088($at)
    ctx->pc = 0x152354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x7E7088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E7088u, _value); } while (0);
    // 0x152358: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x152358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15235c: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x15235Cu;
    SET_GPR_U32(ctx, 31, 0x152364u);
    ctx->pc = 0x152360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15235Cu;
    // 0x152360: 0xac31708c  sw          $s1, 0x708C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28812), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x15235Cu, 0x152364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152364u;
label_152364:
    // 0x152364: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152368: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x152368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15236c: 0xc0438e8  jal         func_10E3A0
    ctx->pc = 0x15236Cu;
    SET_GPR_U32(ctx, 31, 0x152374u);
    ctx->pc = 0x152370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15236Cu;
    // 0x152370: 0x24847080  addiu       $a0, $a0, 0x7080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3A0u, 0x15236Cu, 0x152374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152374u;
label_152374:
    // 0x152374: 0xaf828568  sw          $v0, -0x7A98($gp)
    ctx->pc = 0x152374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 2));
    // 0x152378: 0x8f828568  lw          $v0, -0x7A98($gp)
    ctx->pc = 0x152378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
    // 0x15237c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15237Cu;
    {
        const bool branch_taken_0x15237c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15237c) {
            ctx->pc = 0x152338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152338;
        }
    }
    ctx->pc = 0x152384u;
    // 0x152384: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x152384u;
    {
        const bool branch_taken_0x152384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152384) {
            ctx->pc = 0x152400u;
            goto label_152400;
        }
    }
    ctx->pc = 0x15238Cu;
    // 0x15238c: 0x0  nop
    ctx->pc = 0x15238cu;
    // NOP
label_152390:
    // 0x152390: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x152390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x152394: 0xac347080  sw          $s4, 0x7080($at)
    ctx->pc = 0x152394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x7E7080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E7080u, _value); } while (0);
    // 0x152398: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15239c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15239cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1523a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1523a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523a4: 0xac337084  sw          $s3, 0x7084($at)
    ctx->pc = 0x1523a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x7E7084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E7084u, _value); } while (0);
    // 0x1523a8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1523a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1523ac: 0xac327088  sw          $s2, 0x7088($at)
    ctx->pc = 0x1523acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x7E7088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E7088u, _value); } while (0);
    // 0x1523b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1523b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1523b4: 0xc043a56  jal         func_10E958
    ctx->pc = 0x1523B4u;
    SET_GPR_U32(ctx, 31, 0x1523BCu);
    ctx->pc = 0x1523B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523B4u;
    // 0x1523b8: 0xac31708c  sw          $s1, 0x708C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28812), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E958u, 0x1523B4u, 0x1523BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523BCu;
label_1523bc:
    // 0x1523bc: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1523bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1523c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1523c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1523c4: 0xc0438ec  jal         func_10E3B0
    ctx->pc = 0x1523C4u;
    SET_GPR_U32(ctx, 31, 0x1523CCu);
    ctx->pc = 0x1523C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523C4u;
    // 0x1523c8: 0x24847080  addiu       $a0, $a0, 0x7080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3B0u, 0x1523C4u, 0x1523CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523CCu;
label_1523cc:
    // 0x1523cc: 0xaf828568  sw          $v0, -0x7A98($gp)
    ctx->pc = 0x1523ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 2));
    // 0x1523d0: 0x8f828568  lw          $v0, -0x7A98($gp)
    ctx->pc = 0x1523d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
    // 0x1523d4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1523D4u;
    {
        const bool branch_taken_0x1523d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1523d4) {
            ctx->pc = 0x152390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152390;
        }
    }
    ctx->pc = 0x1523DCu;
    // 0x1523dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1523DCu;
    {
        const bool branch_taken_0x1523dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1523dc) {
            ctx->pc = 0x152400u;
            goto label_152400;
        }
    }
    ctx->pc = 0x1523E4u;
    // 0x1523e4: 0x0  nop
    ctx->pc = 0x1523e4u;
    // NOP
label_1523e8:
    // 0x1523e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1523ec: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x1523ECu;
    SET_GPR_U32(ctx, 31, 0x1523F4u);
    ctx->pc = 0x1523F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523ECu;
    // 0x1523f0: 0x24844e20  addiu       $a0, $a0, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x1523ECu, 0x1523F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523F4u;
label_1523f4:
    // 0x1523f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1523F4u;
    {
        const bool branch_taken_0x1523f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1523F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523F4u;
        // 0x1523f8: 0x2416fffe  addiu       $s6, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1523f4) {
            ctx->pc = 0x152480u;
            goto label_152480;
        }
    }
    ctx->pc = 0x1523FCu;
    // 0x1523fc: 0x0  nop
    ctx->pc = 0x1523fcu;
    // NOP
label_152400:
    // 0x152400: 0x8f828568  lw          $v0, -0x7A98($gp)
    ctx->pc = 0x152400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
    // 0x152404: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x152404u;
    {
        const bool branch_taken_0x152404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152404u;
        // 0x152408: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152404) {
            ctx->pc = 0x152420u;
            goto label_152420;
        }
    }
    ctx->pc = 0x15240Cu;
    // 0x15240c: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x15240Cu;
    SET_GPR_U32(ctx, 31, 0x152414u);
    ctx->pc = 0x152410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15240Cu;
    // 0x152410: 0x24844e60  addiu       $a0, $a0, 0x4E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x15240Cu, 0x152414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152414u;
label_152414:
    // 0x152414: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x152414u;
    {
        const bool branch_taken_0x152414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152414u;
        // 0x152418: 0x2416fffd  addiu       $s6, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152414) {
            ctx->pc = 0x152480u;
            goto label_152480;
        }
    }
    ctx->pc = 0x15241Cu;
    // 0x15241c: 0x0  nop
    ctx->pc = 0x15241cu;
    // NOP
label_152420:
    // 0x152420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152424: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x152424u;
    {
        const bool branch_taken_0x152424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x152424) {
            ctx->pc = 0x152450u;
            goto label_152450;
        }
    }
    ctx->pc = 0x15242Cu;
    // 0x15242c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15242Cu;
    {
        const bool branch_taken_0x15242c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15242c) {
            ctx->pc = 0x152440u;
            goto label_152440;
        }
    }
    ctx->pc = 0x152434u;
    // 0x152434: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x152434u;
    {
        const bool branch_taken_0x152434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152434) {
            ctx->pc = 0x152460u;
            goto label_152460;
        }
    }
    ctx->pc = 0x15243Cu;
label_15243c:
    // 0x15243c: 0x0  nop
    ctx->pc = 0x15243cu;
    // NOP
label_152440:
    // 0x152440: 0xc0438e0  jal         func_10E380
    ctx->pc = 0x152440u;
    SET_GPR_U32(ctx, 31, 0x152448u);
    ctx->pc = 0x152444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152440u;
    // 0x152444: 0x8f848568  lw          $a0, -0x7A98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E380u, 0x152440u, 0x152448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152448u;
label_152448:
    // 0x152448: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x152448u;
    {
        const bool branch_taken_0x152448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152448) {
            ctx->pc = 0x152478u;
            goto label_152478;
        }
    }
    ctx->pc = 0x152450u;
label_152450:
    // 0x152450: 0xc0438e4  jal         func_10E390
    ctx->pc = 0x152450u;
    SET_GPR_U32(ctx, 31, 0x152458u);
    ctx->pc = 0x152454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152450u;
    // 0x152454: 0x8f848568  lw          $a0, -0x7A98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E390u, 0x152450u, 0x152458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152458u;
label_152458:
    // 0x152458: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152458u;
    {
        const bool branch_taken_0x152458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152458) {
            ctx->pc = 0x152478u;
            goto label_152478;
        }
    }
    ctx->pc = 0x152460u;
label_152460:
    // 0x152460: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152464: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152464u;
    SET_GPR_U32(ctx, 31, 0x15246Cu);
    ctx->pc = 0x152468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152464u;
    // 0x152468: 0x24844e20  addiu       $a0, $a0, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152464u, 0x15246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15246Cu;
label_15246c:
    // 0x15246c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15246Cu;
    {
        const bool branch_taken_0x15246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15246Cu;
        // 0x152470: 0x2416fffc  addiu       $s6, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15246c) {
            ctx->pc = 0x152480u;
            goto label_152480;
        }
    }
    ctx->pc = 0x152474u;
    // 0x152474: 0x0  nop
    ctx->pc = 0x152474u;
    // NOP
label_152478:
    // 0x152478: 0x441ffe9  bgez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x152478u;
    {
        const bool branch_taken_0x152478 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x152478) {
            ctx->pc = 0x152420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152420;
        }
    }
    ctx->pc = 0x152480u;
label_152480:
    // 0x152480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152480u;
    {
        const bool branch_taken_0x152480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152480u;
        // 0x152484: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152480) {
            ctx->pc = 0x152490u;
            goto label_152490;
        }
    }
    ctx->pc = 0x152488u;
label_152488:
    // 0x152488: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x152488u;
    {
        const bool branch_taken_0x152488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152488u;
        // 0x15248c: 0x292a821  addu        $s5, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152488) {
            ctx->pc = 0x152390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152390;
        }
    }
    ctx->pc = 0x152490u;
label_152490:
    // 0x152490: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x152490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152494: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x152494u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x152498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15249c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15249cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1524a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1524a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1524a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1524a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1524a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1524a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1524ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1524acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1524b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1524B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1524B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524B0u;
        // 0x1524b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1524B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1524B8u;
}
