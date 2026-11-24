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

// Function: sub_003CC8D0
// Address: 0x3cc8d0 - 0x3cca80
void sub_003CC8D0_0x3cc8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC8D0_0x3cc8d0");
#endif

    switch (ctx->pc) {
        case 0x3cc8d0u: goto label_3cc8d0;
        case 0x3cc8d4u: goto label_3cc8d4;
        case 0x3cc8d8u: goto label_3cc8d8;
        case 0x3cc8dcu: goto label_3cc8dc;
        case 0x3cc8e0u: goto label_3cc8e0;
        case 0x3cc8e4u: goto label_3cc8e4;
        case 0x3cc8e8u: goto label_3cc8e8;
        case 0x3cc8ecu: goto label_3cc8ec;
        case 0x3cc8f0u: goto label_3cc8f0;
        case 0x3cc8f4u: goto label_3cc8f4;
        case 0x3cc8f8u: goto label_3cc8f8;
        case 0x3cc8fcu: goto label_3cc8fc;
        case 0x3cc900u: goto label_3cc900;
        case 0x3cc904u: goto label_3cc904;
        case 0x3cc908u: goto label_3cc908;
        case 0x3cc90cu: goto label_3cc90c;
        case 0x3cc910u: goto label_3cc910;
        case 0x3cc914u: goto label_3cc914;
        case 0x3cc918u: goto label_3cc918;
        case 0x3cc91cu: goto label_3cc91c;
        case 0x3cc920u: goto label_3cc920;
        case 0x3cc924u: goto label_3cc924;
        case 0x3cc928u: goto label_3cc928;
        case 0x3cc92cu: goto label_3cc92c;
        case 0x3cc930u: goto label_3cc930;
        case 0x3cc934u: goto label_3cc934;
        case 0x3cc938u: goto label_3cc938;
        case 0x3cc93cu: goto label_3cc93c;
        case 0x3cc940u: goto label_3cc940;
        case 0x3cc944u: goto label_3cc944;
        case 0x3cc948u: goto label_3cc948;
        case 0x3cc94cu: goto label_3cc94c;
        case 0x3cc950u: goto label_3cc950;
        case 0x3cc954u: goto label_3cc954;
        case 0x3cc958u: goto label_3cc958;
        case 0x3cc95cu: goto label_3cc95c;
        case 0x3cc960u: goto label_3cc960;
        case 0x3cc964u: goto label_3cc964;
        case 0x3cc968u: goto label_3cc968;
        case 0x3cc96cu: goto label_3cc96c;
        case 0x3cc970u: goto label_3cc970;
        case 0x3cc974u: goto label_3cc974;
        case 0x3cc978u: goto label_3cc978;
        case 0x3cc97cu: goto label_3cc97c;
        case 0x3cc980u: goto label_3cc980;
        case 0x3cc984u: goto label_3cc984;
        case 0x3cc988u: goto label_3cc988;
        case 0x3cc98cu: goto label_3cc98c;
        case 0x3cc990u: goto label_3cc990;
        case 0x3cc994u: goto label_3cc994;
        case 0x3cc998u: goto label_3cc998;
        case 0x3cc99cu: goto label_3cc99c;
        case 0x3cc9a0u: goto label_3cc9a0;
        case 0x3cc9a4u: goto label_3cc9a4;
        case 0x3cc9a8u: goto label_3cc9a8;
        case 0x3cc9acu: goto label_3cc9ac;
        case 0x3cc9b0u: goto label_3cc9b0;
        case 0x3cc9b4u: goto label_3cc9b4;
        case 0x3cc9b8u: goto label_3cc9b8;
        case 0x3cc9bcu: goto label_3cc9bc;
        case 0x3cc9c0u: goto label_3cc9c0;
        case 0x3cc9c4u: goto label_3cc9c4;
        case 0x3cc9c8u: goto label_3cc9c8;
        case 0x3cc9ccu: goto label_3cc9cc;
        case 0x3cc9d0u: goto label_3cc9d0;
        case 0x3cc9d4u: goto label_3cc9d4;
        case 0x3cc9d8u: goto label_3cc9d8;
        case 0x3cc9dcu: goto label_3cc9dc;
        case 0x3cc9e0u: goto label_3cc9e0;
        case 0x3cc9e4u: goto label_3cc9e4;
        case 0x3cc9e8u: goto label_3cc9e8;
        case 0x3cc9ecu: goto label_3cc9ec;
        case 0x3cc9f0u: goto label_3cc9f0;
        case 0x3cc9f4u: goto label_3cc9f4;
        case 0x3cc9f8u: goto label_3cc9f8;
        case 0x3cc9fcu: goto label_3cc9fc;
        case 0x3cca00u: goto label_3cca00;
        case 0x3cca04u: goto label_3cca04;
        case 0x3cca08u: goto label_3cca08;
        case 0x3cca0cu: goto label_3cca0c;
        case 0x3cca10u: goto label_3cca10;
        case 0x3cca14u: goto label_3cca14;
        case 0x3cca18u: goto label_3cca18;
        case 0x3cca1cu: goto label_3cca1c;
        case 0x3cca20u: goto label_3cca20;
        case 0x3cca24u: goto label_3cca24;
        case 0x3cca28u: goto label_3cca28;
        case 0x3cca2cu: goto label_3cca2c;
        case 0x3cca30u: goto label_3cca30;
        case 0x3cca34u: goto label_3cca34;
        case 0x3cca38u: goto label_3cca38;
        case 0x3cca3cu: goto label_3cca3c;
        case 0x3cca40u: goto label_3cca40;
        case 0x3cca44u: goto label_3cca44;
        case 0x3cca48u: goto label_3cca48;
        case 0x3cca4cu: goto label_3cca4c;
        case 0x3cca50u: goto label_3cca50;
        case 0x3cca54u: goto label_3cca54;
        case 0x3cca58u: goto label_3cca58;
        case 0x3cca5cu: goto label_3cca5c;
        case 0x3cca60u: goto label_3cca60;
        case 0x3cca64u: goto label_3cca64;
        case 0x3cca68u: goto label_3cca68;
        case 0x3cca6cu: goto label_3cca6c;
        case 0x3cca70u: goto label_3cca70;
        case 0x3cca74u: goto label_3cca74;
        case 0x3cca78u: goto label_3cca78;
        case 0x3cca7cu: goto label_3cca7c;
        default: break;
    }

    ctx->pc = 0x3cc8d0u;

label_3cc8d0:
    // 0x3cc8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cc8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3cc8d4:
    // 0x3cc8d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cc8d8:
    // 0x3cc8d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cc8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3cc8dc:
    // 0x3cc8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cc8e0:
    // 0x3cc8e0: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3cc8e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_3cc8e4:
    // 0x3cc8e4: 0x10a30062  beq         $a1, $v1, . + 4 + (0x62 << 2)
label_3cc8e8:
    if (ctx->pc == 0x3CC8E8u) {
        ctx->pc = 0x3CC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8E4u;
        // 0x3cc8e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC8ECu;
        goto label_3cc8ec;
    }
    ctx->pc = 0x3CC8E4u;
    {
        const bool branch_taken_0x3cc8e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8E4u;
        // 0x3cc8e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc8e4) {
            ctx->pc = 0x3CCA70u;
            goto label_3cca70;
        }
    }
    ctx->pc = 0x3CC8ECu;
label_3cc8ec:
    // 0x3cc8ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cc8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cc8f0:
    // 0x3cc8f0: 0x10a3004d  beq         $a1, $v1, . + 4 + (0x4D << 2)
label_3cc8f4:
    if (ctx->pc == 0x3CC8F4u) {
        ctx->pc = 0x3CC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8F0u;
        // 0x3cc8f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC8F8u;
        goto label_3cc8f8;
    }
    ctx->pc = 0x3CC8F0u;
    {
        const bool branch_taken_0x3cc8f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8F0u;
        // 0x3cc8f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc8f0) {
            ctx->pc = 0x3CCA28u;
            goto label_3cca28;
        }
    }
    ctx->pc = 0x3CC8F8u;
label_3cc8f8:
    // 0x3cc8f8: 0x10a40017  beq         $a1, $a0, . + 4 + (0x17 << 2)
label_3cc8fc:
    if (ctx->pc == 0x3CC8FCu) {
        ctx->pc = 0x3CC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8F8u;
        // 0x3cc8fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC900u;
        goto label_3cc900;
    }
    ctx->pc = 0x3CC8F8u;
    {
        const bool branch_taken_0x3cc8f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3CC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8F8u;
        // 0x3cc8fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc8f8) {
            ctx->pc = 0x3CC958u;
            goto label_3cc958;
        }
    }
    ctx->pc = 0x3CC900u;
label_3cc900:
    // 0x3cc900: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_3cc904:
    if (ctx->pc == 0x3CC904u) {
        ctx->pc = 0x3CC908u;
        goto label_3cc908;
    }
    ctx->pc = 0x3CC900u;
    {
        const bool branch_taken_0x3cc900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cc900) {
            ctx->pc = 0x3CC920u;
            goto label_3cc920;
        }
    }
    ctx->pc = 0x3CC908u;
label_3cc908:
    // 0x3cc908: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3cc90c:
    if (ctx->pc == 0x3CC90Cu) {
        ctx->pc = 0x3CC910u;
        goto label_3cc910;
    }
    ctx->pc = 0x3CC908u;
    {
        const bool branch_taken_0x3cc908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc908) {
            ctx->pc = 0x3CC918u;
            goto label_3cc918;
        }
    }
    ctx->pc = 0x3CC910u;
label_3cc910:
    // 0x3cc910: 0x10000057  b           . + 4 + (0x57 << 2)
label_3cc914:
    if (ctx->pc == 0x3CC914u) {
        ctx->pc = 0x3CC918u;
        goto label_3cc918;
    }
    ctx->pc = 0x3CC910u;
    {
        const bool branch_taken_0x3cc910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc910) {
            ctx->pc = 0x3CCA70u;
            goto label_3cca70;
        }
    }
    ctx->pc = 0x3CC918u;
label_3cc918:
    // 0x3cc918: 0x10000055  b           . + 4 + (0x55 << 2)
label_3cc91c:
    if (ctx->pc == 0x3CC91Cu) {
        ctx->pc = 0x3CC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC918u;
        // 0x3cc91c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC920u;
        goto label_3cc920;
    }
    ctx->pc = 0x3CC918u;
    {
        const bool branch_taken_0x3cc918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC918u;
        // 0x3cc91c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc918) {
            ctx->pc = 0x3CCA70u;
            goto label_3cca70;
        }
    }
    ctx->pc = 0x3CC920u;
label_3cc920:
    // 0x3cc920: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cc920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3cc924:
    // 0x3cc924: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cc924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3cc928:
    // 0x3cc928: 0x24020095  addiu       $v0, $zero, 0x95
    ctx->pc = 0x3cc928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_3cc92c:
    // 0x3cc92c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3cc92cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
label_3cc930:
    // 0x3cc930: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x3cc930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
label_3cc934:
    // 0x3cc934: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3cc934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_3cc938:
    // 0x3cc938: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3cc938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3cc93c:
    // 0x3cc93c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3cc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_3cc940:
    // 0x3cc940: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3cc940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3cc944:
    // 0x3cc944: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3cc944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_3cc948:
    // 0x3cc948: 0x260407a0  addiu       $a0, $s0, 0x7A0
    ctx->pc = 0x3cc948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
label_3cc94c:
    // 0x3cc94c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cc94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cc950:
    // 0x3cc950: 0xc0414dc  jal         func_105370
label_3cc954:
    if (ctx->pc == 0x3CC954u) {
        ctx->pc = 0x3CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC950u;
        // 0x3cc954: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC958u;
        goto label_3cc958;
    }
    ctx->pc = 0x3CC950u;
    SET_GPR_U32(ctx, 31, 0x3CC958u);
    ctx->pc = 0x3CC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC950u;
    // 0x3cc954: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3CC950u, 0x3CC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC958u;
label_3cc958:
    // 0x3cc958: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x3cc958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_3cc95c:
    // 0x3cc95c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3cc95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cc960:
    // 0x3cc960: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3cc960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3cc964:
    // 0x3cc964: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3cc964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_3cc968:
    // 0x3cc968: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3cc968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3cc96c:
    // 0x3cc96c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cc96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3cc970:
    // 0x3cc970: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3cc970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3cc974:
    // 0x3cc974: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cc974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cc978:
    // 0x3cc978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cc97c:
    // 0x3cc97c: 0x0  nop
    ctx->pc = 0x3cc97cu;
    // NOP
label_3cc980:
    // 0x3cc980: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cc980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3cc984:
    // 0x3cc984: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cc984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cc988:
    // 0x3cc988: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3cc98c:
    if (ctx->pc == 0x3CC98Cu) {
        ctx->pc = 0x3CC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC988u;
        // 0x3cc98c: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC990u;
        goto label_3cc990;
    }
    ctx->pc = 0x3CC988u;
    {
        const bool branch_taken_0x3cc988 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC988u;
        // 0x3cc98c: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc988) {
            ctx->pc = 0x3CC9A0u;
            goto label_3cc9a0;
        }
    }
    ctx->pc = 0x3CC990u;
label_3cc990:
    // 0x3cc990: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cc994:
    // 0x3cc994: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cc994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3cc998:
    // 0x3cc998: 0x10000007  b           . + 4 + (0x7 << 2)
label_3cc99c:
    if (ctx->pc == 0x3CC99Cu) {
        ctx->pc = 0x3CC9A0u;
        goto label_3cc9a0;
    }
    ctx->pc = 0x3CC998u;
    {
        const bool branch_taken_0x3cc998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc998) {
            ctx->pc = 0x3CC9B8u;
            goto label_3cc9b8;
        }
    }
    ctx->pc = 0x3CC9A0u;
label_3cc9a0:
    // 0x3cc9a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cc9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cc9a4:
    // 0x3cc9a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cc9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3cc9a8:
    // 0x3cc9a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc9a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3cc9ac:
    // 0x3cc9ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cc9acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3cc9b0:
    // 0x3cc9b0: 0x0  nop
    ctx->pc = 0x3cc9b0u;
    // NOP
label_3cc9b4:
    // 0x3cc9b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cc9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3cc9b8:
    // 0x3cc9b8: 0x14a40013  bne         $a1, $a0, . + 4 + (0x13 << 2)
label_3cc9bc:
    if (ctx->pc == 0x3CC9BCu) {
        ctx->pc = 0x3CC9C0u;
        goto label_3cc9c0;
    }
    ctx->pc = 0x3CC9B8u;
    {
        const bool branch_taken_0x3cc9b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3cc9b8) {
            ctx->pc = 0x3CCA08u;
            goto label_3cca08;
        }
    }
    ctx->pc = 0x3CC9C0u;
label_3cc9c0:
    // 0x3cc9c0: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x3cc9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_3cc9c4:
    // 0x3cc9c4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3cc9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3cc9c8:
    // 0x3cc9c8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_3cc9cc:
    if (ctx->pc == 0x3CC9CCu) {
        ctx->pc = 0x3CC9D0u;
        goto label_3cc9d0;
    }
    ctx->pc = 0x3CC9C8u;
    {
        const bool branch_taken_0x3cc9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc9c8) {
            ctx->pc = 0x3CCA18u;
            goto label_3cca18;
        }
    }
    ctx->pc = 0x3CC9D0u;
label_3cc9d0:
    // 0x3cc9d0: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3cc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_3cc9d4:
    // 0x3cc9d4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3cc9d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3cc9d8:
    // 0x3cc9d8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_3cc9dc:
    if (ctx->pc == 0x3CC9DCu) {
        ctx->pc = 0x3CC9E0u;
        goto label_3cc9e0;
    }
    ctx->pc = 0x3CC9D8u;
    {
        const bool branch_taken_0x3cc9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc9d8) {
            ctx->pc = 0x3CCA18u;
            goto label_3cca18;
        }
    }
    ctx->pc = 0x3CC9E0u;
label_3cc9e0:
    // 0x3cc9e0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3cc9e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3cc9e4:
    // 0x3cc9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cc9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc9e8:
    // 0x3cc9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cc9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc9ec:
    // 0x3cc9ec: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3cc9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3cc9f0:
    // 0x3cc9f0: 0x320f809  jalr        $t9
label_3cc9f4:
    if (ctx->pc == 0x3CC9F4u) {
        ctx->pc = 0x3CC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9F0u;
        // 0x3cc9f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC9F8u;
        goto label_3cc9f8;
    }
    ctx->pc = 0x3CC9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CC9F8u);
        ctx->pc = 0x3CC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9F0u;
        // 0x3cc9f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC9F0u, 0x3CC9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC9F8u;
label_3cc9f8:
    // 0x3cc9f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cc9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cc9fc:
    // 0x3cc9fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cca00:
    if (ctx->pc == 0x3CCA00u) {
        ctx->pc = 0x3CCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9FCu;
        // 0x3cca00: 0xa6030786  sh          $v1, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA04u;
        goto label_3cca04;
    }
    ctx->pc = 0x3CC9FCu;
    {
        const bool branch_taken_0x3cc9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC9FCu;
        // 0x3cca00: 0xa6030786  sh          $v1, 0x786($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc9fc) {
            ctx->pc = 0x3CCA18u;
            goto label_3cca18;
        }
    }
    ctx->pc = 0x3CCA04u;
label_3cca04:
    // 0x3cca04: 0x0  nop
    ctx->pc = 0x3cca04u;
    // NOP
label_3cca08:
    // 0x3cca08: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x3cca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
label_3cca0c:
    // 0x3cca0c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3cca0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_3cca10:
    // 0x3cca10: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x3cca10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
label_3cca14:
    // 0x3cca14: 0x0  nop
    ctx->pc = 0x3cca14u;
    // NOP
label_3cca18:
    // 0x3cca18: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3cca18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_3cca1c:
    // 0x3cca1c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3cca20:
    if (ctx->pc == 0x3CCA20u) {
        ctx->pc = 0x3CCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA1Cu;
        // 0x3cca20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA24u;
        goto label_3cca24;
    }
    ctx->pc = 0x3CCA1Cu;
    {
        const bool branch_taken_0x3cca1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA1Cu;
        // 0x3cca20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cca1c) {
            ctx->pc = 0x3CCA70u;
            goto label_3cca70;
        }
    }
    ctx->pc = 0x3CCA24u;
label_3cca24:
    // 0x3cca24: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3cca24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3cca28:
    // 0x3cca28: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x3cca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_3cca2c:
    // 0x3cca2c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3cca2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3cca30:
    // 0x3cca30: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_3cca34:
    if (ctx->pc == 0x3CCA34u) {
        ctx->pc = 0x3CCA38u;
        goto label_3cca38;
    }
    ctx->pc = 0x3CCA30u;
    {
        const bool branch_taken_0x3cca30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cca30) {
            ctx->pc = 0x3CCA68u;
            goto label_3cca68;
        }
    }
    ctx->pc = 0x3CCA38u;
label_3cca38:
    // 0x3cca38: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3cca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_3cca3c:
    // 0x3cca3c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3cca3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3cca40:
    // 0x3cca40: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3cca44:
    if (ctx->pc == 0x3CCA44u) {
        ctx->pc = 0x3CCA48u;
        goto label_3cca48;
    }
    ctx->pc = 0x3CCA40u;
    {
        const bool branch_taken_0x3cca40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cca40) {
            ctx->pc = 0x3CCA68u;
            goto label_3cca68;
        }
    }
    ctx->pc = 0x3CCA48u;
label_3cca48:
    // 0x3cca48: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3cca48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3cca4c:
    // 0x3cca4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cca50:
    // 0x3cca50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cca50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cca54:
    // 0x3cca54: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x3cca54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_3cca58:
    // 0x3cca58: 0x320f809  jalr        $t9
label_3cca5c:
    if (ctx->pc == 0x3CCA5Cu) {
        ctx->pc = 0x3CCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA58u;
        // 0x3cca5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA60u;
        goto label_3cca60;
    }
    ctx->pc = 0x3CCA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CCA60u);
        ctx->pc = 0x3CCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA58u;
        // 0x3cca5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCA58u, 0x3CCA60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CCA60u;
label_3cca60:
    // 0x3cca60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cca64:
    // 0x3cca64: 0xa6030786  sh          $v1, 0x786($s0)
    ctx->pc = 0x3cca64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 3));
label_3cca68:
    // 0x3cca68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cca6c:
    // 0x3cca6c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3cca6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3cca70:
    // 0x3cca70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cca70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3cca74:
    // 0x3cca74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cca74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cca78:
    // 0x3cca78: 0x3e00008  jr          $ra
label_3cca7c:
    if (ctx->pc == 0x3CCA7Cu) {
        ctx->pc = 0x3CCA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA78u;
        // 0x3cca7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CCA80u;
        goto label_fallthrough_0x3cca78;
    }
    ctx->pc = 0x3CCA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CCA78u;
        // 0x3cca7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CCA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cca78:
    ctx->pc = 0x3CCA80u;
}
