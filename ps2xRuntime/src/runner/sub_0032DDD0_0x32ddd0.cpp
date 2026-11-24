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

// Function: sub_0032DDD0
// Address: 0x32ddd0 - 0x32e548
void sub_0032DDD0_0x32ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DDD0_0x32ddd0");
#endif

    switch (ctx->pc) {
        case 0x32de68u: goto label_32de68;
        case 0x32de9cu: goto label_32de9c;
        case 0x32deecu: goto label_32deec;
        case 0x32df3cu: goto label_32df3c;
        case 0x32df88u: goto label_32df88;
        case 0x32dfc0u: goto label_32dfc0;
        case 0x32dfd0u: goto label_32dfd0;
        case 0x32e01cu: goto label_32e01c;
        case 0x32e060u: goto label_32e060;
        case 0x32e0b0u: goto label_32e0b0;
        case 0x32e0ecu: goto label_32e0ec;
        case 0x32e12cu: goto label_32e12c;
        case 0x32e1a8u: goto label_32e1a8;
        case 0x32e1c8u: goto label_32e1c8;
        case 0x32e204u: goto label_32e204;
        case 0x32e258u: goto label_32e258;
        case 0x32e2b8u: goto label_32e2b8;
        case 0x32e2ccu: goto label_32e2cc;
        case 0x32e2e8u: goto label_32e2e8;
        case 0x32e320u: goto label_32e320;
        case 0x32e330u: goto label_32e330;
        case 0x32e374u: goto label_32e374;
        case 0x32e390u: goto label_32e390;
        case 0x32e3c4u: goto label_32e3c4;
        case 0x32e428u: goto label_32e428;
        case 0x32e4b0u: goto label_32e4b0;
        case 0x32e4ccu: goto label_32e4cc;
        case 0x32e4e0u: goto label_32e4e0;
        case 0x32e514u: goto label_32e514;
        default: break;
    }

    ctx->pc = 0x32ddd0u;

    // 0x32ddd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x32ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x32ddd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32ddd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32ddd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x32ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x32dddc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32dde0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x32dde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x32dde4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x32dde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x32dde8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x32dde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x32ddec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x32ddecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x32ddf0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x32ddf4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32ddf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ddf8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32ddfc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32ddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32de00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32de04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32de04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32de08: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x32de08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32de0c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x32de0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x32de10: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x32de10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x32de14: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x32de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x32de18: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x32de18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32de1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32de20: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32DE20u;
    {
        const bool branch_taken_0x32de20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE20u;
        // 0x32de24: 0x24930020  addiu       $s3, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de20) {
            ctx->pc = 0x32DE58u;
            goto label_32de58;
        }
    }
    ctx->pc = 0x32DE28u;
    // 0x32de28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32de28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32de2c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x32de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x32de30: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32de30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32de34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32DE34u;
    {
        const bool branch_taken_0x32de34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE34u;
        // 0x32de38: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de34) {
            ctx->pc = 0x32DE58u;
            goto label_32de58;
        }
    }
    ctx->pc = 0x32DE3Cu;
    // 0x32de3c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32de3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32de40: 0xa422cc50  sh          $v0, -0x33B0($at)
    ctx->pc = 0x32de40u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x32de44: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32de44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32de48: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x32de48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x32de4c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x32de4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x32de50: 0xa422cc70  sh          $v0, -0x3390($at)
    ctx->pc = 0x32de50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
    // 0x32de54: 0x0  nop
    ctx->pc = 0x32de54u;
    // NOP
label_32de58:
    // 0x32de58: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32de58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32de5c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x32de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x32de60: 0xc05e360  jal         func_178D80
    ctx->pc = 0x32DE60u;
    SET_GPR_U32(ctx, 31, 0x32DE68u);
    ctx->pc = 0x32DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE60u;
    // 0x32de64: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x32DE60u, 0x32DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE68u;
label_32de68:
    // 0x32de68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x32DE68u;
    {
        const bool branch_taken_0x32de68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE68u;
        // 0x32de6c: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de68) {
            ctx->pc = 0x32DEA0u;
            goto label_32dea0;
        }
    }
    ctx->pc = 0x32DE70u;
    // 0x32de70: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x32de70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x32de74: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x32de74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x32de78: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x32de78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x32de7c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x32de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x32de80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32de80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32de84: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x32de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x32de88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32de88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de8c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x32de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x32de90: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x32de90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x32de94: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x32DE94u;
    SET_GPR_U32(ctx, 31, 0x32DE9Cu);
    ctx->pc = 0x32DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE94u;
    // 0x32de98: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x32DE94u, 0x32DE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE9Cu;
label_32de9c:
    // 0x32de9c: 0x0  nop
    ctx->pc = 0x32de9cu;
    // NOP
label_32dea0:
    // 0x32dea0: 0x92a2000f  lbu         $v0, 0xF($s5)
    ctx->pc = 0x32dea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 15)));
    // 0x32dea4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32dea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32dea8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32DEA8u;
    {
        const bool branch_taken_0x32dea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DEA8u;
        // 0x32deac: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dea8) {
            ctx->pc = 0x32DEF0u;
            goto label_32def0;
        }
    }
    ctx->pc = 0x32DEB0u;
    // 0x32deb0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32deb4: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32deb8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32debc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32debcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32dec0: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x32dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x32dec4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32dec8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32decc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x32deccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32ded0: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x32ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x32ded4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32ded4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ded8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32ded8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32dedc: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x32dedcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32dee0: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x32dee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32dee4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32DEE4u;
    SET_GPR_U32(ctx, 31, 0x32DEECu);
    ctx->pc = 0x32DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEE4u;
    // 0x32dee8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32DEE4u, 0x32DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DEECu;
label_32deec:
    // 0x32deec: 0x0  nop
    ctx->pc = 0x32deecu;
    // NOP
label_32def0:
    // 0x32def0: 0x92a2000f  lbu         $v0, 0xF($s5)
    ctx->pc = 0x32def0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 15)));
    // 0x32def4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32def4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32def8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32DEF8u;
    {
        const bool branch_taken_0x32def8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DEF8u;
        // 0x32defc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32def8) {
            ctx->pc = 0x32DF40u;
            goto label_32df40;
        }
    }
    ctx->pc = 0x32DF00u;
    // 0x32df00: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32df04: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32df04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32df08: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32df08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32df0c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32df10: 0x34420022  ori         $v0, $v0, 0x22
    ctx->pc = 0x32df10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34);
    // 0x32df14: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32df18: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32df1c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x32df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x32df20: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x32df20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x32df24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32df24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df28: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32df28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32df2c: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x32df2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32df30: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x32df30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32df34: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32DF34u;
    SET_GPR_U32(ctx, 31, 0x32DF3Cu);
    ctx->pc = 0x32DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF34u;
    // 0x32df38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32DF34u, 0x32DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF3Cu;
label_32df3c:
    // 0x32df3c: 0x0  nop
    ctx->pc = 0x32df3cu;
    // NOP
label_32df40:
    // 0x32df40: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x32df40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x32df44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32df48: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x32DF48u;
    {
        const bool branch_taken_0x32df48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32df48) {
            ctx->pc = 0x32DFC0u;
            goto label_32dfc0;
        }
    }
    ctx->pc = 0x32DF50u;
    // 0x32df50: 0x82a3000a  lb          $v1, 0xA($s5)
    ctx->pc = 0x32df50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x32df54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32df54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df58: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x32df58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x32df5c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x32df5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32df60: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32df60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32df64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32df64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32df68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32df6c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32df70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32df74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32df74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32df78: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x32df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x32df7c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x32df7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32df80: 0xc0cb9d8  jal         func_32E760
    ctx->pc = 0x32DF80u;
    SET_GPR_U32(ctx, 31, 0x32DF88u);
    ctx->pc = 0x32DF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF80u;
    // 0x32df84: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E760u, 0x32DF80u, 0x32DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF88u;
label_32df88:
    // 0x32df88: 0x82a3000b  lb          $v1, 0xB($s5)
    ctx->pc = 0x32df88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
    // 0x32df8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32df8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df90: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x32df90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x32df94: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x32df94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32df98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32df98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x32df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32dfa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32dfa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32dfa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32dfac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32dfb0: 0x2442004a  addiu       $v0, $v0, 0x4A
    ctx->pc = 0x32dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 74));
    // 0x32dfb4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x32dfb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32dfb8: 0xc0cb9d8  jal         func_32E760
    ctx->pc = 0x32DFB8u;
    SET_GPR_U32(ctx, 31, 0x32DFC0u);
    ctx->pc = 0x32DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DFB8u;
    // 0x32dfbc: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E760u, 0x32DFB8u, 0x32DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFC0u;
label_32dfc0:
    // 0x32dfc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32dfc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dfc4: 0x24110088  addiu       $s1, $zero, 0x88
    ctx->pc = 0x32dfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x32dfc8: 0x241000b4  addiu       $s0, $zero, 0xB4
    ctx->pc = 0x32dfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x32dfcc: 0x0  nop
    ctx->pc = 0x32dfccu;
    // NOP
label_32dfd0:
    // 0x32dfd0: 0x82a2000a  lb          $v0, 0xA($s5)
    ctx->pc = 0x32dfd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x32dfd4: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x32dfd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
    // 0x32dfd8: 0x14520009  bne         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x32DFD8u;
    {
        const bool branch_taken_0x32dfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x32DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFD8u;
        // 0x32dfdc: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfd8) {
            ctx->pc = 0x32E000u;
            goto label_32e000;
        }
    }
    ctx->pc = 0x32DFE0u;
    // 0x32dfe0: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x32dfe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x32dfe4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32dfe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DFE8u;
    {
        const bool branch_taken_0x32dfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFE8u;
        // 0x32dfec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dfe8) {
            ctx->pc = 0x32DFF8u;
            goto label_32dff8;
        }
    }
    ctx->pc = 0x32DFF0u;
    // 0x32dff0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32DFF0u;
    {
        const bool branch_taken_0x32dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFF0u;
        // 0x32dff4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dff0) {
            ctx->pc = 0x32E004u;
            goto label_32e004;
        }
    }
    ctx->pc = 0x32DFF8u;
label_32dff8:
    // 0x32dff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32DFF8u;
    {
        const bool branch_taken_0x32dff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DFF8u;
        // 0x32dffc: 0x2463c  dsll32      $t0, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dff8) {
            ctx->pc = 0x32E008u;
            goto label_32e008;
        }
    }
    ctx->pc = 0x32E000u;
label_32e000:
    // 0x32e000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32e004:
    // 0x32e004: 0x2463c  dsll32      $t0, $v0, 24
    ctx->pc = 0x32e004u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 24));
label_32e008:
    // 0x32e008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e00c: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x32e00cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x32e010: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x32e010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x32e014: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32E014u;
    SET_GPR_U32(ctx, 31, 0x32E01Cu);
    ctx->pc = 0x32E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E014u;
    // 0x32e018: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32E014u, 0x32E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E01Cu;
label_32e01c:
    // 0x32e01c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32e020: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32e020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32e024: 0x2442cd70  addiu       $v0, $v0, -0x3290
    ctx->pc = 0x32e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
    // 0x32e028: 0x26430019  addiu       $v1, $s2, 0x19
    ctx->pc = 0x32e028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x32e02c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32e02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32e030: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x32e030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32e034: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32e038: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32e038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32e03c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32e03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32e040: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x32e040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32e044: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32e048: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32e048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e04c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32e04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e050: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x32e050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32e054: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x32e054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32e058: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32E058u;
    SET_GPR_U32(ctx, 31, 0x32E060u);
    ctx->pc = 0x32E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E058u;
    // 0x32e05c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32E058u, 0x32E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E060u;
label_32e060:
    // 0x32e060: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32e060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32e064: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x32e064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x32e068: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x32e068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e06c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x32E06Cu;
    {
        const bool branch_taken_0x32e06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E06Cu;
        // 0x32e070: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e06c) {
            ctx->pc = 0x32DFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32dfd0;
        }
    }
    ctx->pc = 0x32E074u;
    // 0x32e074: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32e074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32e078: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32e078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32e07c: 0x2463cd70  addiu       $v1, $v1, -0x3290
    ctx->pc = 0x32e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
    // 0x32e080: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32e084: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32e088: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32e08c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32e090: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x32e090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x32e094: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x32e094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32e098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32e098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e09c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32e09cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e0a0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32e0a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32e0a4: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32e0a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32e0a8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32E0A8u;
    SET_GPR_U32(ctx, 31, 0x32E0B0u);
    ctx->pc = 0x32E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0A8u;
    // 0x32e0ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32E0A8u, 0x32E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0B0u;
label_32e0b0:
    // 0x32e0b0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32e0b4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32e0b8: 0x2442cd78  addiu       $v0, $v0, -0x3288
    ctx->pc = 0x32e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954360));
    // 0x32e0bc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32e0c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32e0c4: 0x240500f8  addiu       $a1, $zero, 0xF8
    ctx->pc = 0x32e0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x32e0c8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x32e0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32e0cc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x32e0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32e0d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x32e0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32e0d4: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x32e0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x32e0d8: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32e0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32e0dc: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32e0dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32e0e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32e0e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0e4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32E0E4u;
    SET_GPR_U32(ctx, 31, 0x32E0ECu);
    ctx->pc = 0x32E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0E4u;
    // 0x32e0e8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32E0E4u, 0x32E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0ECu;
label_32e0ec:
    // 0x32e0ec: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x32e0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x32e0f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x32e0f4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x32E0F4u;
    {
        const bool branch_taken_0x32e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e0f4) {
            ctx->pc = 0x32E1A8u;
            goto label_32e1a8;
        }
    }
    ctx->pc = 0x32E0FCu;
    // 0x32e0fc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x32e0fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32e100: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x32E100u;
    {
        const bool branch_taken_0x32e100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e100) {
            ctx->pc = 0x32E1A8u;
            goto label_32e1a8;
        }
    }
    ctx->pc = 0x32E108u;
    // 0x32e108: 0x82a2000b  lb          $v0, 0xB($s5)
    ctx->pc = 0x32e108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
    // 0x32e10c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e114: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x32e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x32e118: 0x8445007a  lh          $a1, 0x7A($v0)
    ctx->pc = 0x32e118u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 122)));
    // 0x32e11c: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x32e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x32e120: 0x80500001  lb          $s0, 0x1($v0)
    ctx->pc = 0x32e120u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x32e124: 0xc0cbacc  jal         func_32EB30
    ctx->pc = 0x32E124u;
    SET_GPR_U32(ctx, 31, 0x32E12Cu);
    ctx->pc = 0x32E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E124u;
    // 0x32e128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB30u, 0x32E124u, 0x32E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E12Cu;
label_32e12c:
    // 0x32e12c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e130: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e130u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e134: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x32e134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e138: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x32E138u;
    {
        const bool branch_taken_0x32e138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E138u;
        // 0x32e13c: 0x2a010000  slti        $at, $s0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e138) {
            ctx->pc = 0x32E1A8u;
            goto label_32e1a8;
        }
    }
    ctx->pc = 0x32E140u;
    // 0x32e140: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x32E140u;
    {
        const bool branch_taken_0x32e140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e140) {
            ctx->pc = 0x32E1A8u;
            goto label_32e1a8;
        }
    }
    ctx->pc = 0x32E148u;
    // 0x32e148: 0x82a3000e  lb          $v1, 0xE($s5)
    ctx->pc = 0x32e148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x32e14c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x32e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x32e150: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32e154: 0x82a9000b  lb          $t1, 0xB($s5)
    ctx->pc = 0x32e154u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
    // 0x32e158: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x32e158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e15c: 0x2485012e  addiu       $a1, $a0, 0x12E
    ctx->pc = 0x32e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 302));
    // 0x32e160: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x32e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x32e164: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x32e164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x32e168: 0x24422540  addiu       $v0, $v0, 0x2540
    ctx->pc = 0x32e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9536));
    // 0x32e16c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e170: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32e178: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e178u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e17c: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x32e17cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32e180: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x32e180u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x32e184: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x32e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x32e188: 0x24a598b6  addiu       $a1, $a1, -0x674A
    ctx->pc = 0x32e188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940854));
    // 0x32e18c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e190: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x32e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32e194: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32e194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32e198: 0x24420047  addiu       $v0, $v0, 0x47
    ctx->pc = 0x32e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 71));
    // 0x32e19c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x32e19cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32e1a0: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E1A0u;
    SET_GPR_U32(ctx, 31, 0x32E1A8u);
    ctx->pc = 0x32E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1A0u;
    // 0x32e1a4: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E1A0u, 0x32E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E1A8u;
label_32e1a8:
    // 0x32e1a8: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x32e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x32e1ac: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x32e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x32e1b0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x32e1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e1b4: 0x241e004a  addiu       $fp, $zero, 0x4A
    ctx->pc = 0x32e1b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x32e1b8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32e1bc: 0x2416004e  addiu       $s6, $zero, 0x4E
    ctx->pc = 0x32e1bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x32e1c0: 0x2417004c  addiu       $s7, $zero, 0x4C
    ctx->pc = 0x32e1c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x32e1c4: 0x0  nop
    ctx->pc = 0x32e1c4u;
    // NOP
label_32e1c8:
    // 0x32e1c8: 0x8643007a  lh          $v1, 0x7A($s2)
    ctx->pc = 0x32e1c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x32e1cc: 0x46000a4  bltz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x32E1CCu;
    {
        const bool branch_taken_0x32e1cc = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x32e1cc) {
            ctx->pc = 0x32E460u;
            goto label_32e460;
        }
    }
    ctx->pc = 0x32E1D4u;
    // 0x32e1d4: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x32e1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x32e1d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32e1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32e1dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32E1DCu;
    {
        const bool branch_taken_0x32e1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e1dc) {
            ctx->pc = 0x32E208u;
            goto label_32e208;
        }
    }
    ctx->pc = 0x32E1E4u;
    // 0x32e1e4: 0x82a20010  lb          $v0, 0x10($s5)
    ctx->pc = 0x32e1e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x32e1e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32E1E8u;
    {
        const bool branch_taken_0x32e1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32e1e8) {
            ctx->pc = 0x32E208u;
            goto label_32e208;
        }
    }
    ctx->pc = 0x32E1F0u;
    // 0x32e1f0: 0x92a60011  lbu         $a2, 0x11($s5)
    ctx->pc = 0x32e1f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 17)));
    // 0x32e1f4: 0x1e2c3c  dsll32      $a1, $fp, 16
    ctx->pc = 0x32e1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << (32 + 16));
    // 0x32e1f8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32e1f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x32e1fc: 0xc0cba90  jal         func_32EA40
    ctx->pc = 0x32E1FCu;
    SET_GPR_U32(ctx, 31, 0x32E204u);
    ctx->pc = 0x32E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1FCu;
    // 0x32e200: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA40u, 0x32E1FCu, 0x32E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E204u;
label_32e204:
    // 0x32e204: 0x0  nop
    ctx->pc = 0x32e204u;
    // NOP
label_32e208:
    // 0x32e208: 0x82a3000b  lb          $v1, 0xB($s5)
    ctx->pc = 0x32e208u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 11)));
    // 0x32e20c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32e210: 0x1e343c  dsll32      $a2, $fp, 16
    ctx->pc = 0x32e210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) << (32 + 16));
    // 0x32e214: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32E214u;
    {
        const bool branch_taken_0x32e214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E214u;
        // 0x32e218: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e214) {
            ctx->pc = 0x32E23Cu;
            goto label_32e23c;
        }
    }
    ctx->pc = 0x32E21Cu;
    // 0x32e21c: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x32e21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x32e220: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32e224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32E224u;
    {
        const bool branch_taken_0x32e224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E224u;
        // 0x32e228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e224) {
            ctx->pc = 0x32E234u;
            goto label_32e234;
        }
    }
    ctx->pc = 0x32E22Cu;
    // 0x32e22c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32E22Cu;
    {
        const bool branch_taken_0x32e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E22Cu;
        // 0x32e230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e22c) {
            ctx->pc = 0x32E240u;
            goto label_32e240;
        }
    }
    ctx->pc = 0x32E234u;
label_32e234:
    // 0x32e234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32E234u;
    {
        const bool branch_taken_0x32e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E234u;
        // 0x32e238: 0x2463c  dsll32      $t0, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e234) {
            ctx->pc = 0x32E244u;
            goto label_32e244;
        }
    }
    ctx->pc = 0x32E23Cu;
label_32e23c:
    // 0x32e23c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32e23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32e240:
    // 0x32e240: 0x2463c  dsll32      $t0, $v0, 24
    ctx->pc = 0x32e240u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 24));
label_32e244:
    // 0x32e244: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e248: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x32e248u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x32e24c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x32e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x32e250: 0xc0cb99c  jal         func_32E670
    ctx->pc = 0x32E250u;
    SET_GPR_U32(ctx, 31, 0x32E258u);
    ctx->pc = 0x32E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E250u;
    // 0x32e254: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E670u, 0x32E250u, 0x32E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E258u;
label_32e258:
    // 0x32e258: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32e25c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x32e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x32e260: 0x2442cd70  addiu       $v0, $v0, -0x3290
    ctx->pc = 0x32e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954352));
    // 0x32e264: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32e264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32e268: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x32e268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32e26c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32e26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e270: 0x8642007c  lh          $v0, 0x7C($s2)
    ctx->pc = 0x32e270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x32e274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e278: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32e27c: 0x8642007a  lh          $v0, 0x7A($s2)
    ctx->pc = 0x32e27cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x32e280: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32e280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32e284: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x32e284u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x32e288: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32E288u;
    {
        const bool branch_taken_0x32e288 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E288u;
        // 0x32e28c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e288) {
            ctx->pc = 0x32E294u;
            goto label_32e294;
        }
    }
    ctx->pc = 0x32E290u;
    // 0x32e290: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32e294:
    // 0x32e294: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32e294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32e298: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x32e298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32e29c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32e2a0: 0x240500eb  addiu       $a1, $zero, 0xEB
    ctx->pc = 0x32e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x32e2a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32e2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e2a8: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x32e2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x32e2ac: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x32e2acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32e2b0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32E2B0u;
    SET_GPR_U32(ctx, 31, 0x32E2B8u);
    ctx->pc = 0x32E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E2B0u;
    // 0x32e2b4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32E2B0u, 0x32E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2B8u;
label_32e2b8:
    // 0x32e2b8: 0x8645007a  lh          $a1, 0x7A($s2)
    ctx->pc = 0x32e2b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x32e2bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e2c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32e2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e2c4: 0xc0cbacc  jal         func_32EB30
    ctx->pc = 0x32E2C4u;
    SET_GPR_U32(ctx, 31, 0x32E2CCu);
    ctx->pc = 0x32E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E2C4u;
    // 0x32e2c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB30u, 0x32E2C4u, 0x32E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E2CCu;
label_32e2cc:
    // 0x32e2cc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e2d0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e2d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e2d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x32e2d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e2d8: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x32E2D8u;
    {
        const bool branch_taken_0x32e2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2D8u;
        // 0x32e2dc: 0x24110139  addiu       $s1, $zero, 0x139 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 313));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2d8) {
            ctx->pc = 0x32E3A8u;
            goto label_32e3a8;
        }
    }
    ctx->pc = 0x32E2E0u;
    // 0x32e2e0: 0x24100138  addiu       $s0, $zero, 0x138
    ctx->pc = 0x32e2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x32e2e4: 0x0  nop
    ctx->pc = 0x32e2e4u;
    // NOP
label_32e2e8:
    // 0x32e2e8: 0x8642007a  lh          $v0, 0x7A($s2)
    ctx->pc = 0x32e2e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x32e2ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x32e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x32e2f0: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x32e2f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x32e2f4: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x32e2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e2f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x32E2F8u;
    {
        const bool branch_taken_0x32e2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E2F8u;
        // 0x32e2fc: 0x11343c  dsll32      $a2, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e2f8) {
            ctx->pc = 0x32E320u;
            goto label_32e320;
        }
    }
    ctx->pc = 0x32E300u;
    // 0x32e300: 0x163c3c  dsll32      $a3, $s6, 16
    ctx->pc = 0x32e300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) << (32 + 16));
    // 0x32e304: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e308: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e308u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e30c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e30cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e310: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e314: 0x24a598a2  addiu       $a1, $a1, -0x675E
    ctx->pc = 0x32e314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940834));
    // 0x32e318: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E318u;
    SET_GPR_U32(ctx, 31, 0x32E320u);
    ctx->pc = 0x32E31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E318u;
    // 0x32e31c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E318u, 0x32E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E320u;
label_32e320:
    // 0x32e320: 0x8645007a  lh          $a1, 0x7A($s2)
    ctx->pc = 0x32e320u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x32e324: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e328: 0xc0cbacc  jal         func_32EB30
    ctx->pc = 0x32E328u;
    SET_GPR_U32(ctx, 31, 0x32E330u);
    ctx->pc = 0x32E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E328u;
    // 0x32e32c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB30u, 0x32E328u, 0x32E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E330u;
label_32e330:
    // 0x32e330: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e334: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e334u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e338: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x32e338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e33c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32E33Cu;
    {
        const bool branch_taken_0x32e33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e33c) {
            ctx->pc = 0x32E34Cu;
            goto label_32e34c;
        }
    }
    ctx->pc = 0x32E344u;
    // 0x32e344: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32E344u;
    {
        const bool branch_taken_0x32e344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E344u;
        // 0x32e348: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e344) {
            ctx->pc = 0x32E350u;
            goto label_32e350;
        }
    }
    ctx->pc = 0x32E34Cu;
label_32e34c:
    // 0x32e34c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_32e350:
    // 0x32e350: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x32e350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x32e354: 0x173c3c  dsll32      $a3, $s7, 16
    ctx->pc = 0x32e354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) << (32 + 16));
    // 0x32e358: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e35c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x32e35cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32e360: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32e360u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32e364: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32e364u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32e368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e36c: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E36Cu;
    SET_GPR_U32(ctx, 31, 0x32E374u);
    ctx->pc = 0x32E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E36Cu;
    // 0x32e370: 0x24a598ac  addiu       $a1, $a1, -0x6754 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E36Cu, 0x32E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E374u;
label_32e374:
    // 0x32e374: 0x8645007a  lh          $a1, 0x7A($s2)
    ctx->pc = 0x32e374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x32e378: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e37c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e380: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x32e380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x32e384: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x32e384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x32e388: 0xc0cbacc  jal         func_32EB30
    ctx->pc = 0x32E388u;
    SET_GPR_U32(ctx, 31, 0x32E390u);
    ctx->pc = 0x32E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E388u;
    // 0x32e38c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB30u, 0x32E388u, 0x32E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E390u;
label_32e390:
    // 0x32e390: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e394: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e398: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x32e398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e39c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x32E39Cu;
    {
        const bool branch_taken_0x32e39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e39c) {
            ctx->pc = 0x32E2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e2e8;
        }
    }
    ctx->pc = 0x32E3A4u;
    // 0x32e3a4: 0x0  nop
    ctx->pc = 0x32e3a4u;
    // NOP
label_32e3a8:
    // 0x32e3a8: 0x8645007a  lh          $a1, 0x7A($s2)
    ctx->pc = 0x32e3a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x32e3ac: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x32e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x32e3b0: 0x80500001  lb          $s0, 0x1($v0)
    ctx->pc = 0x32e3b0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x32e3b4: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32E3B4u;
    {
        const bool branch_taken_0x32e3b4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x32E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E3B4u;
        // 0x32e3b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e3b4) {
            ctx->pc = 0x32E428u;
            goto label_32e428;
        }
    }
    ctx->pc = 0x32E3BCu;
    // 0x32e3bc: 0xc0cbacc  jal         func_32EB30
    ctx->pc = 0x32E3BCu;
    SET_GPR_U32(ctx, 31, 0x32E3C4u);
    ctx->pc = 0x32E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E3BCu;
    // 0x32e3c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB30u, 0x32E3BCu, 0x32E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E3C4u;
label_32e3c4:
    // 0x32e3c4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32e3c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32e3c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32e3cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32e3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32e3d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32E3D0u;
    {
        const bool branch_taken_0x32e3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e3d0) {
            ctx->pc = 0x32E3E0u;
            goto label_32e3e0;
        }
    }
    ctx->pc = 0x32E3D8u;
    // 0x32e3d8: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x32e3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32e3dc: 0x0  nop
    ctx->pc = 0x32e3dcu;
    // NOP
label_32e3e0:
    // 0x32e3e0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x32e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x32e3e4: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x32e3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x32e3e8: 0x2484cd70  addiu       $a0, $a0, -0x3290
    ctx->pc = 0x32e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954352));
    // 0x32e3ec: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x32e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x32e3f0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32e3f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32e3f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32e3f8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32e3fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32e3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32e400: 0x33c6ffff  andi        $a2, $fp, 0xFFFF
    ctx->pc = 0x32e400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x32e404: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32e408: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32e408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32e40c: 0x240501b6  addiu       $a1, $zero, 0x1B6
    ctx->pc = 0x32e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    // 0x32e410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32e410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e414: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x32e414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e418: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32e418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32e41c: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x32e41cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x32e420: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32E420u;
    SET_GPR_U32(ctx, 31, 0x32E428u);
    ctx->pc = 0x32E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E420u;
    // 0x32e424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32E420u, 0x32E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E428u;
label_32e428:
    // 0x32e428: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32e42c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x32e42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x32e430: 0x27de001a  addiu       $fp, $fp, 0x1A
    ctx->pc = 0x32e430u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 26));
    // 0x32e434: 0x26d6001a  addiu       $s6, $s6, 0x1A
    ctx->pc = 0x32e434u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 26));
    // 0x32e438: 0x2442001a  addiu       $v0, $v0, 0x1A
    ctx->pc = 0x32e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
    // 0x32e43c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32e440: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32e444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32e448: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x32e448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x32e44c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x32e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32e450: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x32e450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x32e454: 0x1440ff5c  bnez        $v0, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x32E454u;
    {
        const bool branch_taken_0x32e454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E454u;
        // 0x32e458: 0x26f7001a  addiu       $s7, $s7, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e454) {
            ctx->pc = 0x32E1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e1c8;
        }
    }
    ctx->pc = 0x32E45Cu;
    // 0x32e45c: 0x0  nop
    ctx->pc = 0x32e45cu;
    // NOP
label_32e460:
    // 0x32e460: 0x92a30008  lbu         $v1, 0x8($s5)
    ctx->pc = 0x32e460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x32e464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e468: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x32E468u;
    {
        const bool branch_taken_0x32e468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E468u;
        // 0x32e46c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e468) {
            ctx->pc = 0x32E4D0u;
            goto label_32e4d0;
        }
    }
    ctx->pc = 0x32E470u;
    // 0x32e470: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32E470u;
    {
        const bool branch_taken_0x32e470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e470) {
            ctx->pc = 0x32E4D0u;
            goto label_32e4d0;
        }
    }
    ctx->pc = 0x32E478u;
    // 0x32e478: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32e47c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32E47Cu;
    {
        const bool branch_taken_0x32e47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E47Cu;
        // 0x32e480: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e47c) {
            ctx->pc = 0x32E4D0u;
            goto label_32e4d0;
        }
    }
    ctx->pc = 0x32E484u;
    // 0x32e484: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32E484u;
    {
        const bool branch_taken_0x32e484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32e484) {
            ctx->pc = 0x32E4D0u;
            goto label_32e4d0;
        }
    }
    ctx->pc = 0x32E48Cu;
    // 0x32e48c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x32e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32e490: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32E490u;
    {
        const bool branch_taken_0x32e490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E490u;
        // 0x32e494: 0x3c05004f  lui         $a1, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e490) {
            ctx->pc = 0x32E4D0u;
            goto label_32e4d0;
        }
    }
    ctx->pc = 0x32E498u;
    // 0x32e498: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e49c: 0x24a598fc  addiu       $a1, $a1, -0x6704
    ctx->pc = 0x32e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940924));
    // 0x32e4a0: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x32e4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x32e4a4: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x32e4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32e4a8: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E4A8u;
    SET_GPR_U32(ctx, 31, 0x32E4B0u);
    ctx->pc = 0x32E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E4A8u;
    // 0x32e4ac: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E4A8u, 0x32E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E4B0u;
label_32e4b0:
    // 0x32e4b0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x32e4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x32e4b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4b8: 0x24a59906  addiu       $a1, $a1, -0x66FA
    ctx->pc = 0x32e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940934));
    // 0x32e4bc: 0x2406019c  addiu       $a2, $zero, 0x19C
    ctx->pc = 0x32e4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
    // 0x32e4c0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x32e4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x32e4c4: 0xc0cba38  jal         func_32E8E0
    ctx->pc = 0x32E4C4u;
    SET_GPR_U32(ctx, 31, 0x32E4CCu);
    ctx->pc = 0x32E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E4C4u;
    // 0x32e4c8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E8E0u, 0x32E4C4u, 0x32E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E4CCu;
label_32e4cc:
    // 0x32e4cc: 0x0  nop
    ctx->pc = 0x32e4ccu;
    // NOP
label_32e4d0:
    // 0x32e4d0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32e4d4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x32e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x32e4d8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x32E4D8u;
    SET_GPR_U32(ctx, 31, 0x32E4E0u);
    ctx->pc = 0x32E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E4D8u;
    // 0x32e4dc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x32E4D8u, 0x32E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E4E0u;
label_32e4e0:
    // 0x32e4e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32e4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4e4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x32E4E4u;
    {
        const bool branch_taken_0x32e4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4E4u;
        // 0x32e4e8: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4e4) {
            ctx->pc = 0x32E518u;
            goto label_32e518;
        }
    }
    ctx->pc = 0x32E4ECu;
    // 0x32e4ec: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x32e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x32e4f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x32e4f4: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x32e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x32e4f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x32e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x32e4fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32e500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e504: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x32e504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x32e508: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x32e508u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x32e50c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x32E50Cu;
    SET_GPR_U32(ctx, 31, 0x32E514u);
    ctx->pc = 0x32E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E50Cu;
    // 0x32e510: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x32E50Cu, 0x32E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E514u;
label_32e514:
    // 0x32e514: 0x0  nop
    ctx->pc = 0x32e514u;
    // NOP
label_32e518:
    // 0x32e518: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x32e518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32e51c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x32e51cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32e520: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x32e520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32e524: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x32e524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32e528: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x32e528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32e52c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32e52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32e530: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32e530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32e534: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32e534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32e538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e53c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32e53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e540: 0x3e00008  jr          $ra
    ctx->pc = 0x32E540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E540u;
        // 0x32e544: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E548u;
}
