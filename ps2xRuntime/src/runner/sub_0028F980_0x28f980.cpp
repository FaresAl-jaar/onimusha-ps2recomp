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

// Function: sub_0028F980
// Address: 0x28f980 - 0x28ff88
void sub_0028F980_0x28f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F980_0x28f980");
#endif

    switch (ctx->pc) {
        case 0x28fa34u: goto label_28fa34;
        case 0x28fa48u: goto label_28fa48;
        case 0x28fa5cu: goto label_28fa5c;
        case 0x28fa70u: goto label_28fa70;
        case 0x28fa88u: goto label_28fa88;
        case 0x28fa9cu: goto label_28fa9c;
        case 0x28fab0u: goto label_28fab0;
        case 0x28fac4u: goto label_28fac4;
        case 0x28fad8u: goto label_28fad8;
        case 0x28faecu: goto label_28faec;
        case 0x28fb00u: goto label_28fb00;
        case 0x28fb14u: goto label_28fb14;
        case 0x28fb28u: goto label_28fb28;
        case 0x28fb3cu: goto label_28fb3c;
        case 0x28fb50u: goto label_28fb50;
        case 0x28fb68u: goto label_28fb68;
        case 0x28fb9cu: goto label_28fb9c;
        case 0x28fbb4u: goto label_28fbb4;
        case 0x28fbc8u: goto label_28fbc8;
        case 0x28fbdcu: goto label_28fbdc;
        case 0x28fbf0u: goto label_28fbf0;
        case 0x28fc04u: goto label_28fc04;
        case 0x28fc18u: goto label_28fc18;
        case 0x28fc2cu: goto label_28fc2c;
        case 0x28fc50u: goto label_28fc50;
        case 0x28fc64u: goto label_28fc64;
        case 0x28fc78u: goto label_28fc78;
        case 0x28fc8cu: goto label_28fc8c;
        case 0x28fca0u: goto label_28fca0;
        case 0x28fcb4u: goto label_28fcb4;
        case 0x28fcc8u: goto label_28fcc8;
        case 0x28fce8u: goto label_28fce8;
        case 0x28fcfcu: goto label_28fcfc;
        case 0x28fd10u: goto label_28fd10;
        case 0x28fd24u: goto label_28fd24;
        case 0x28fd38u: goto label_28fd38;
        case 0x28fd50u: goto label_28fd50;
        case 0x28fd64u: goto label_28fd64;
        case 0x28fd78u: goto label_28fd78;
        case 0x28fd8cu: goto label_28fd8c;
        case 0x28fda0u: goto label_28fda0;
        case 0x28fdb4u: goto label_28fdb4;
        case 0x28fdc8u: goto label_28fdc8;
        case 0x28fde8u: goto label_28fde8;
        case 0x28fe04u: goto label_28fe04;
        case 0x28fe18u: goto label_28fe18;
        case 0x28fe2cu: goto label_28fe2c;
        case 0x28fe40u: goto label_28fe40;
        case 0x28fe58u: goto label_28fe58;
        case 0x28fe68u: goto label_28fe68;
        case 0x28fe74u: goto label_28fe74;
        case 0x28fe88u: goto label_28fe88;
        case 0x28fe9cu: goto label_28fe9c;
        case 0x28fec8u: goto label_28fec8;
        case 0x28fedcu: goto label_28fedc;
        case 0x28fef0u: goto label_28fef0;
        case 0x28ff04u: goto label_28ff04;
        case 0x28ff18u: goto label_28ff18;
        case 0x28ff2cu: goto label_28ff2c;
        case 0x28ff48u: goto label_28ff48;
        default: break;
    }

    ctx->pc = 0x28f980u;

    // 0x28f980: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x28f984: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x28f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x28f988: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x28f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x28f98c: 0x344250fc  ori         $v0, $v0, 0x50FC
    ctx->pc = 0x28f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20732);
    // 0x28f990: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x28f990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x28f994: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x28f994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x28f998: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x28f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x28f99c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x28f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x28f9a0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x28f9a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x28f9a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28f9ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28f9b0: 0x10820147  beq         $a0, $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x28F9B0u;
    {
        const bool branch_taken_0x28f9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9B0u;
        // 0x28f9b4: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9b0) {
            ctx->pc = 0x28FED0u;
            goto label_28fed0;
        }
    }
    ctx->pc = 0x28F9B8u;
    // 0x28f9b8: 0x3c02000d  lui         $v0, 0xD
    ctx->pc = 0x28f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13 << 16));
    // 0x28f9bc: 0x3443e2a7  ori         $v1, $v0, 0xE2A7
    ctx->pc = 0x28f9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58023);
    // 0x28f9c0: 0x1083010d  beq         $a0, $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x28F9C0u;
    {
        const bool branch_taken_0x28f9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28f9c0) {
            ctx->pc = 0x28FDF8u;
            goto label_28fdf8;
        }
    }
    ctx->pc = 0x28F9C8u;
    // 0x28f9c8: 0x3442e29a  ori         $v0, $v0, 0xE29A
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58010);
    // 0x28f9cc: 0x10820108  beq         $a0, $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x28F9CCu;
    {
        const bool branch_taken_0x28f9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f9cc) {
            ctx->pc = 0x28FDF0u;
            goto label_28fdf0;
        }
    }
    ctx->pc = 0x28F9D4u;
    // 0x28f9d4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x28f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x28f9d8: 0x344307f5  ori         $v1, $v0, 0x7F5
    ctx->pc = 0x28f9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2037);
    // 0x28f9dc: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x28F9DCu;
    {
        const bool branch_taken_0x28f9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28f9dc) {
            ctx->pc = 0x28FD58u;
            goto label_28fd58;
        }
    }
    ctx->pc = 0x28F9E4u;
    // 0x28f9e4: 0x344207ab  ori         $v0, $v0, 0x7AB
    ctx->pc = 0x28f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1963);
    // 0x28f9e8: 0x108200c1  beq         $a0, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x28F9E8u;
    {
        const bool branch_taken_0x28f9e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9E8u;
        // 0x28f9ec: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9e8) {
            ctx->pc = 0x28FCF0u;
            goto label_28fcf0;
        }
    }
    ctx->pc = 0x28F9F0u;
    // 0x28f9f0: 0x34626859  ori         $v0, $v1, 0x6859
    ctx->pc = 0x28f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26713);
    // 0x28f9f4: 0x10820098  beq         $a0, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x28F9F4u;
    {
        const bool branch_taken_0x28f9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9F4u;
        // 0x28f9f8: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9f4) {
            ctx->pc = 0x28FC58u;
            goto label_28fc58;
        }
    }
    ctx->pc = 0x28F9FCu;
    // 0x28f9fc: 0x344227b1  ori         $v0, $v0, 0x27B1
    ctx->pc = 0x28f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10161);
    // 0x28fa00: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x28FA00u;
    {
        const bool branch_taken_0x28fa00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28fa00) {
            ctx->pc = 0x28FBA8u;
            goto label_28fba8;
        }
    }
    ctx->pc = 0x28FA08u;
    // 0x28fa08: 0x34624535  ori         $v0, $v1, 0x4535
    ctx->pc = 0x28fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17717);
    // 0x28fa0c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28FA0Cu;
    {
        const bool branch_taken_0x28fa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA0Cu;
        // 0x28fa10: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa0c) {
            ctx->pc = 0x28FA90u;
            goto label_28fa90;
        }
    }
    ctx->pc = 0x28FA14u;
    // 0x28fa14: 0x34428bc9  ori         $v0, $v0, 0x8BC9
    ctx->pc = 0x28fa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35785);
    // 0x28fa18: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FA18u;
    {
        const bool branch_taken_0x28fa18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28fa18) {
            ctx->pc = 0x28FA28u;
            goto label_28fa28;
        }
    }
    ctx->pc = 0x28FA20u;
    // 0x28fa20: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x28FA20u;
    {
        const bool branch_taken_0x28fa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fa20) {
            ctx->pc = 0x28FF50u;
            goto label_28ff50;
        }
    }
    ctx->pc = 0x28FA28u;
label_28fa28:
    // 0x28fa28: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fa2c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FA2Cu;
    SET_GPR_U32(ctx, 31, 0x28FA34u);
    ctx->pc = 0x28FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA2Cu;
    // 0x28fa30: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FA2Cu, 0x28FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA34u;
label_28fa34:
    // 0x28fa34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fa34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fa38: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fa3c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fa3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fa40: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FA40u;
    SET_GPR_U32(ctx, 31, 0x28FA48u);
    ctx->pc = 0x28FA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA40u;
    // 0x28fa44: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FA40u, 0x28FA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA48u;
label_28fa48:
    // 0x28fa48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fa48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fa4c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fa50: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28fa50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28fa54: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FA54u;
    SET_GPR_U32(ctx, 31, 0x28FA5Cu);
    ctx->pc = 0x28FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA54u;
    // 0x28fa58: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FA54u, 0x28FA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA5Cu;
label_28fa5c:
    // 0x28fa5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fa5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fa60: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fa64: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28fa64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28fa68: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FA68u;
    SET_GPR_U32(ctx, 31, 0x28FA70u);
    ctx->pc = 0x28FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA68u;
    // 0x28fa6c: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FA68u, 0x28FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA70u;
label_28fa70:
    // 0x28fa70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fa70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fa74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28fa78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa7c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28fa7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28fa80: 0xc0a3e50  jal         func_28F940
    ctx->pc = 0x28FA80u;
    SET_GPR_U32(ctx, 31, 0x28FA88u);
    ctx->pc = 0x28FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA80u;
    // 0x28fa84: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F940u, 0x28FA80u, 0x28FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA88u;
label_28fa88:
    // 0x28fa88: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x28FA88u;
    {
        const bool branch_taken_0x28fa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA88u;
        // 0x28fa8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa88) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FA90u;
label_28fa90:
    // 0x28fa90: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fa94: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FA94u;
    SET_GPR_U32(ctx, 31, 0x28FA9Cu);
    ctx->pc = 0x28FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FA94u;
    // 0x28fa98: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FA94u, 0x28FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA9Cu;
label_28fa9c:
    // 0x28fa9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fa9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28faa0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28faa4: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x28faa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x28faa8: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FAA8u;
    SET_GPR_U32(ctx, 31, 0x28FAB0u);
    ctx->pc = 0x28FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAA8u;
    // 0x28faac: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FAA8u, 0x28FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAB0u;
label_28fab0:
    // 0x28fab0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fab4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fab8: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x28fab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x28fabc: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FABCu;
    SET_GPR_U32(ctx, 31, 0x28FAC4u);
    ctx->pc = 0x28FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FABCu;
    // 0x28fac0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FABCu, 0x28FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAC4u;
label_28fac4:
    // 0x28fac4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fac8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28facc: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x28faccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x28fad0: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FAD0u;
    SET_GPR_U32(ctx, 31, 0x28FAD8u);
    ctx->pc = 0x28FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAD0u;
    // 0x28fad4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FAD0u, 0x28FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAD8u;
label_28fad8:
    // 0x28fad8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fadc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fae0: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fae4: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FAE4u;
    SET_GPR_U32(ctx, 31, 0x28FAECu);
    ctx->pc = 0x28FAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAE4u;
    // 0x28fae8: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FAE4u, 0x28FAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FAECu;
label_28faec:
    // 0x28faec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28faecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28faf0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28faf4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28faf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28faf8: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FAF8u;
    SET_GPR_U32(ctx, 31, 0x28FB00u);
    ctx->pc = 0x28FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FAF8u;
    // 0x28fafc: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FAF8u, 0x28FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB00u;
label_28fb00:
    // 0x28fb00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fb00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fb04: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fb08: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28fb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28fb0c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FB0Cu;
    SET_GPR_U32(ctx, 31, 0x28FB14u);
    ctx->pc = 0x28FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB0Cu;
    // 0x28fb10: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FB0Cu, 0x28FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB14u;
label_28fb14:
    // 0x28fb14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fb14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fb18: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fb1c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x28fb1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
    // 0x28fb20: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FB20u;
    SET_GPR_U32(ctx, 31, 0x28FB28u);
    ctx->pc = 0x28FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB20u;
    // 0x28fb24: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FB20u, 0x28FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB28u;
label_28fb28:
    // 0x28fb28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fb28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fb2c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fb30: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x28fb30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x28fb34: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FB34u;
    SET_GPR_U32(ctx, 31, 0x28FB3Cu);
    ctx->pc = 0x28FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB34u;
    // 0x28fb38: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FB34u, 0x28FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB3Cu;
label_28fb3c:
    // 0x28fb3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fb3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fb40: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fb44: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x28fb44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x28fb48: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FB48u;
    SET_GPR_U32(ctx, 31, 0x28FB50u);
    ctx->pc = 0x28FB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB48u;
    // 0x28fb4c: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FB48u, 0x28FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB50u;
label_28fb50:
    // 0x28fb50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fb50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fb54: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fb58: 0x24844820  addiu       $a0, $a0, 0x4820
    ctx->pc = 0x28fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    // 0x28fb5c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28fb5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28fb60: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FB60u;
    SET_GPR_U32(ctx, 31, 0x28FB68u);
    ctx->pc = 0x28FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB60u;
    // 0x28fb64: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FB60u, 0x28FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB68u;
label_28fb68:
    // 0x28fb68: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x28fb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x28fb6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fb6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fb70: 0xffb40008  sd          $s4, 0x8($sp)
    ctx->pc = 0x28fb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 20));
    // 0x28fb74: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28fb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb78: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x28fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28fb7c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x28fb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb80: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x28fb80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb84: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x28fb84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb88: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x28fb88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb8c: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x28fb8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28fb90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28fb94: 0xc0a3e1c  jal         func_28F870
    ctx->pc = 0x28FB94u;
    SET_GPR_U32(ctx, 31, 0x28FB9Cu);
    ctx->pc = 0x28FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB94u;
    // 0x28fb98: 0xffb50010  sd          $s5, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F870u, 0x28FB94u, 0x28FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB9Cu;
label_28fb9c:
    // 0x28fb9c: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x28FB9Cu;
    {
        const bool branch_taken_0x28fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB9Cu;
        // 0x28fba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb9c) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FBA4u;
    // 0x28fba4: 0x0  nop
    ctx->pc = 0x28fba4u;
    // NOP
label_28fba8:
    // 0x28fba8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fbac: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FBACu;
    SET_GPR_U32(ctx, 31, 0x28FBB4u);
    ctx->pc = 0x28FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBACu;
    // 0x28fbb0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FBACu, 0x28FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBB4u;
label_28fbb4:
    // 0x28fbb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fbb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fbb8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fbbc: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x28fbbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x28fbc0: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FBC0u;
    SET_GPR_U32(ctx, 31, 0x28FBC8u);
    ctx->pc = 0x28FBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBC0u;
    // 0x28fbc4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FBC0u, 0x28FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBC8u;
label_28fbc8:
    // 0x28fbc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fbc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fbcc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fbd0: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x28fbd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x28fbd4: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FBD4u;
    SET_GPR_U32(ctx, 31, 0x28FBDCu);
    ctx->pc = 0x28FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBD4u;
    // 0x28fbd8: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FBD4u, 0x28FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBDCu;
label_28fbdc:
    // 0x28fbdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fbdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fbe0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fbe4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x28fbe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x28fbe8: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FBE8u;
    SET_GPR_U32(ctx, 31, 0x28FBF0u);
    ctx->pc = 0x28FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBE8u;
    // 0x28fbec: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FBE8u, 0x28FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBF0u;
label_28fbf0:
    // 0x28fbf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fbf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fbf4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fbf8: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fbf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fbfc: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FBFCu;
    SET_GPR_U32(ctx, 31, 0x28FC04u);
    ctx->pc = 0x28FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBFCu;
    // 0x28fc00: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FBFCu, 0x28FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC04u;
label_28fc04:
    // 0x28fc04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fc08: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fc0c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28fc0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28fc10: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FC10u;
    SET_GPR_U32(ctx, 31, 0x28FC18u);
    ctx->pc = 0x28FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC10u;
    // 0x28fc14: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FC10u, 0x28FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC18u;
label_28fc18:
    // 0x28fc18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fc1c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fc20: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28fc20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28fc24: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FC24u;
    SET_GPR_U32(ctx, 31, 0x28FC2Cu);
    ctx->pc = 0x28FC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC24u;
    // 0x28fc28: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FC24u, 0x28FC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC2Cu;
label_28fc2c:
    // 0x28fc2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fc30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28fc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28fc38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc3c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28fc3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc40: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x28fc40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc44: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28fc44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28fc48: 0xc0a3e08  jal         func_28F820
    ctx->pc = 0x28FC48u;
    SET_GPR_U32(ctx, 31, 0x28FC50u);
    ctx->pc = 0x28FC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC48u;
    // 0x28fc4c: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F820u, 0x28FC48u, 0x28FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC50u;
label_28fc50:
    // 0x28fc50: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x28FC50u;
    {
        const bool branch_taken_0x28fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC50u;
        // 0x28fc54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc50) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FC58u;
label_28fc58:
    // 0x28fc58: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fc5c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FC5Cu;
    SET_GPR_U32(ctx, 31, 0x28FC64u);
    ctx->pc = 0x28FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC5Cu;
    // 0x28fc60: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FC5Cu, 0x28FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC64u;
label_28fc64:
    // 0x28fc64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fc68: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fc6c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x28fc6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x28fc70: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FC70u;
    SET_GPR_U32(ctx, 31, 0x28FC78u);
    ctx->pc = 0x28FC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC70u;
    // 0x28fc74: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FC70u, 0x28FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC78u;
label_28fc78:
    // 0x28fc78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fc7c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fc80: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x28fc80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x28fc84: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FC84u;
    SET_GPR_U32(ctx, 31, 0x28FC8Cu);
    ctx->pc = 0x28FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC84u;
    // 0x28fc88: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FC84u, 0x28FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC8Cu;
label_28fc8c:
    // 0x28fc8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fc8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fc90: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fc94: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fc94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fc98: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FC98u;
    SET_GPR_U32(ctx, 31, 0x28FCA0u);
    ctx->pc = 0x28FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC98u;
    // 0x28fc9c: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FC98u, 0x28FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCA0u;
label_28fca0:
    // 0x28fca0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fca4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fca8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28fca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28fcac: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FCACu;
    SET_GPR_U32(ctx, 31, 0x28FCB4u);
    ctx->pc = 0x28FCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCACu;
    // 0x28fcb0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FCACu, 0x28FCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCB4u;
label_28fcb4:
    // 0x28fcb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fcb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fcb8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fcbc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28fcbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28fcc0: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FCC0u;
    SET_GPR_U32(ctx, 31, 0x28FCC8u);
    ctx->pc = 0x28FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCC0u;
    // 0x28fcc4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FCC0u, 0x28FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCC8u;
label_28fcc8:
    // 0x28fcc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fcc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28fcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcd4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28fcd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcd8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28fcd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcdc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28fcdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28fce0: 0xc0a3d98  jal         func_28F660
    ctx->pc = 0x28FCE0u;
    SET_GPR_U32(ctx, 31, 0x28FCE8u);
    ctx->pc = 0x28FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCE0u;
    // 0x28fce4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F660u, 0x28FCE0u, 0x28FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCE8u;
label_28fce8:
    // 0x28fce8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x28FCE8u;
    {
        const bool branch_taken_0x28fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCE8u;
        // 0x28fcec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fce8) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FCF0u;
label_28fcf0:
    // 0x28fcf0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fcf4: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FCF4u;
    SET_GPR_U32(ctx, 31, 0x28FCFCu);
    ctx->pc = 0x28FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCF4u;
    // 0x28fcf8: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FCF4u, 0x28FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCFCu;
label_28fcfc:
    // 0x28fcfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fcfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fd00: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fd04: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fd08: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FD08u;
    SET_GPR_U32(ctx, 31, 0x28FD10u);
    ctx->pc = 0x28FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD08u;
    // 0x28fd0c: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FD08u, 0x28FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD10u;
label_28fd10:
    // 0x28fd10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fd10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fd14: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fd18: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28fd18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28fd1c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FD1Cu;
    SET_GPR_U32(ctx, 31, 0x28FD24u);
    ctx->pc = 0x28FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD1Cu;
    // 0x28fd20: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FD1Cu, 0x28FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD24u;
label_28fd24:
    // 0x28fd24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fd24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fd28: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fd2c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28fd2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28fd30: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FD30u;
    SET_GPR_U32(ctx, 31, 0x28FD38u);
    ctx->pc = 0x28FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD30u;
    // 0x28fd34: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FD30u, 0x28FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD38u;
label_28fd38:
    // 0x28fd38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fd38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fd3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28fd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fd44: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28fd44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28fd48: 0xc0a3db8  jal         func_28F6E0
    ctx->pc = 0x28FD48u;
    SET_GPR_U32(ctx, 31, 0x28FD50u);
    ctx->pc = 0x28FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD48u;
    // 0x28fd4c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F6E0u, 0x28FD48u, 0x28FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD50u;
label_28fd50:
    // 0x28fd50: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x28FD50u;
    {
        const bool branch_taken_0x28fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD50u;
        // 0x28fd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd50) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FD58u;
label_28fd58:
    // 0x28fd58: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fd5c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FD5Cu;
    SET_GPR_U32(ctx, 31, 0x28FD64u);
    ctx->pc = 0x28FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD5Cu;
    // 0x28fd60: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FD5Cu, 0x28FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD64u;
label_28fd64:
    // 0x28fd64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fd64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fd68: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fd6c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x28fd6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x28fd70: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FD70u;
    SET_GPR_U32(ctx, 31, 0x28FD78u);
    ctx->pc = 0x28FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD70u;
    // 0x28fd74: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FD70u, 0x28FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD78u;
label_28fd78:
    // 0x28fd78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fd78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fd7c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fd80: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x28fd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x28fd84: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FD84u;
    SET_GPR_U32(ctx, 31, 0x28FD8Cu);
    ctx->pc = 0x28FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD84u;
    // 0x28fd88: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FD84u, 0x28FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD8Cu;
label_28fd8c:
    // 0x28fd8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fd8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fd90: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fd94: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fd94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fd98: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FD98u;
    SET_GPR_U32(ctx, 31, 0x28FDA0u);
    ctx->pc = 0x28FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD98u;
    // 0x28fd9c: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FD98u, 0x28FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDA0u;
label_28fda0:
    // 0x28fda0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fda0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fda4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fda8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28fda8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28fdac: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FDACu;
    SET_GPR_U32(ctx, 31, 0x28FDB4u);
    ctx->pc = 0x28FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDACu;
    // 0x28fdb0: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FDACu, 0x28FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDB4u;
label_28fdb4:
    // 0x28fdb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fdb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fdb8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fdbc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28fdbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28fdc0: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FDC0u;
    SET_GPR_U32(ctx, 31, 0x28FDC8u);
    ctx->pc = 0x28FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDC0u;
    // 0x28fdc4: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FDC0u, 0x28FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDC8u;
label_28fdc8:
    // 0x28fdc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fdc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fdcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28fdd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdd4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28fdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdd8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28fdd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fddc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28fddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28fde0: 0xc0a3ddc  jal         func_28F770
    ctx->pc = 0x28FDE0u;
    SET_GPR_U32(ctx, 31, 0x28FDE8u);
    ctx->pc = 0x28FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDE0u;
    // 0x28fde4: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F770u, 0x28FDE0u, 0x28FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDE8u;
label_28fde8:
    // 0x28fde8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x28FDE8u;
    {
        const bool branch_taken_0x28fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDE8u;
        // 0x28fdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fde8) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FDF0u;
label_28fdf0:
    // 0x28fdf0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x28FDF0u;
    {
        const bool branch_taken_0x28fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDF0u;
        // 0x28fdf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdf0) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FDF8u;
label_28fdf8:
    // 0x28fdf8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fdfc: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FDFCu;
    SET_GPR_U32(ctx, 31, 0x28FE04u);
    ctx->pc = 0x28FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDFCu;
    // 0x28fe00: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FDFCu, 0x28FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE04u;
label_28fe04:
    // 0x28fe04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fe08: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fe0c: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x28fe0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x28fe10: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FE10u;
    SET_GPR_U32(ctx, 31, 0x28FE18u);
    ctx->pc = 0x28FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE10u;
    // 0x28fe14: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FE10u, 0x28FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE18u;
label_28fe18:
    // 0x28fe18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fe1c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fe20: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x28fe20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x28fe24: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FE24u;
    SET_GPR_U32(ctx, 31, 0x28FE2Cu);
    ctx->pc = 0x28FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE24u;
    // 0x28fe28: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FE24u, 0x28FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE2Cu;
label_28fe2c:
    // 0x28fe2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fe30: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fe34: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x28fe34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x28fe38: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FE38u;
    SET_GPR_U32(ctx, 31, 0x28FE40u);
    ctx->pc = 0x28FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE38u;
    // 0x28fe3c: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FE38u, 0x28FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE40u;
label_28fe40:
    // 0x28fe40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fe44: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x28fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x28fe48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x28fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28fe4c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fe4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fe50: 0xc0d0a84  jal         func_342A10
    ctx->pc = 0x28FE50u;
    SET_GPR_U32(ctx, 31, 0x28FE58u);
    ctx->pc = 0x28FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE50u;
    // 0x28fe54: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A10u, 0x28FE50u, 0x28FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE58u;
label_28fe58:
    // 0x28fe58: 0x3c050091  lui         $a1, 0x91
    ctx->pc = 0x28fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)145 << 16));
    // 0x28fe5c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28fe60: 0xc0d0a84  jal         func_342A10
    ctx->pc = 0x28FE60u;
    SET_GPR_U32(ctx, 31, 0x28FE68u);
    ctx->pc = 0x28FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE60u;
    // 0x28fe64: 0x24a54820  addiu       $a1, $a1, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A10u, 0x28FE60u, 0x28FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE68u;
label_28fe68:
    // 0x28fe68: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fe6c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FE6Cu;
    SET_GPR_U32(ctx, 31, 0x28FE74u);
    ctx->pc = 0x28FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE6Cu;
    // 0x28fe70: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FE6Cu, 0x28FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE74u;
label_28fe74:
    // 0x28fe74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fe78: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fe7c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28fe7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28fe80: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FE80u;
    SET_GPR_U32(ctx, 31, 0x28FE88u);
    ctx->pc = 0x28FE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE80u;
    // 0x28fe84: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FE80u, 0x28FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE88u;
label_28fe88:
    // 0x28fe88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fe8c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fe90: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28fe90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28fe94: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FE94u;
    SET_GPR_U32(ctx, 31, 0x28FE9Cu);
    ctx->pc = 0x28FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE94u;
    // 0x28fe98: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FE94u, 0x28FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE9Cu;
label_28fe9c:
    // 0x28fe9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fe9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fea0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fea4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28fea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fea8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x28fea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28feac: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x28feacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28feb0: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x28feb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28feb4: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x28feb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28feb8: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x28feb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28febc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28febcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28fec0: 0xc0a3d58  jal         func_28F560
    ctx->pc = 0x28FEC0u;
    SET_GPR_U32(ctx, 31, 0x28FEC8u);
    ctx->pc = 0x28FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEC0u;
    // 0x28fec4: 0xffb50000  sd          $s5, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F560u, 0x28FEC0u, 0x28FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEC8u;
label_28fec8:
    // 0x28fec8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28FEC8u;
    {
        const bool branch_taken_0x28fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEC8u;
        // 0x28fecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fec8) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FED0u;
label_28fed0:
    // 0x28fed0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fed4: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FED4u;
    SET_GPR_U32(ctx, 31, 0x28FEDCu);
    ctx->pc = 0x28FED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FED4u;
    // 0x28fed8: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FED4u, 0x28FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEDCu;
label_28fedc:
    // 0x28fedc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fedcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fee0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fee4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x28fee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x28fee8: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FEE8u;
    SET_GPR_U32(ctx, 31, 0x28FEF0u);
    ctx->pc = 0x28FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEE8u;
    // 0x28feec: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FEE8u, 0x28FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FEF0u;
label_28fef0:
    // 0x28fef0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28fef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28fef4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28fef8: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x28fef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28fefc: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FEFCu;
    SET_GPR_U32(ctx, 31, 0x28FF04u);
    ctx->pc = 0x28FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FEFCu;
    // 0x28ff00: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FEFCu, 0x28FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF04u;
label_28ff04:
    // 0x28ff04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ff04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28ff08: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28ff0c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x28ff0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x28ff10: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FF10u;
    SET_GPR_U32(ctx, 31, 0x28FF18u);
    ctx->pc = 0x28FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF10u;
    // 0x28ff14: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FF10u, 0x28FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF18u;
label_28ff18:
    // 0x28ff18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ff18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28ff1c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28ff20: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x28ff20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x28ff24: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x28FF24u;
    SET_GPR_U32(ctx, 31, 0x28FF2Cu);
    ctx->pc = 0x28FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF24u;
    // 0x28ff28: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x28FF24u, 0x28FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF2Cu;
label_28ff2c:
    // 0x28ff2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28ff2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28ff30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ff30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28ff34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28ff38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff3c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x28ff3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x28ff40: 0xc0a3fe4  jal         func_28FF90
    ctx->pc = 0x28FF40u;
    SET_GPR_U32(ctx, 31, 0x28FF48u);
    ctx->pc = 0x28FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF40u;
    // 0x28ff44: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF90u, 0x28FF40u, 0x28FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF48u;
label_28ff48:
    // 0x28ff48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28FF48u;
    {
        const bool branch_taken_0x28ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF48u;
        // 0x28ff4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff48) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FF50u;
label_28ff50:
    // 0x28ff50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ff54: 0x0  nop
    ctx->pc = 0x28ff54u;
    // NOP
label_28ff58:
    // 0x28ff58: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x28ff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28ff5c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x28ff5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ff60: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x28ff60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ff64: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x28ff64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ff68: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x28ff68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ff6c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28ff6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ff70: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28ff70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ff74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28ff74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ff78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28ff78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ff7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28ff7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ff80: 0x3e00008  jr          $ra
    ctx->pc = 0x28FF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF80u;
        // 0x28ff84: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FF88u;
}
