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

// Function: sub_0035E480
// Address: 0x35e480 - 0x35e928
void sub_0035E480_0x35e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E480_0x35e480");
#endif

    switch (ctx->pc) {
        case 0x35e5a0u: goto label_35e5a0;
        case 0x35e830u: goto label_35e830;
        case 0x35e874u: goto label_35e874;
        case 0x35e894u: goto label_35e894;
        case 0x35e8a8u: goto label_35e8a8;
        case 0x35e8b0u: goto label_35e8b0;
        case 0x35e8c0u: goto label_35e8c0;
        case 0x35e8dcu: goto label_35e8dc;
        case 0x35e8e4u: goto label_35e8e4;
        case 0x35e900u: goto label_35e900;
        default: break;
    }

    ctx->pc = 0x35e480u;

    // 0x35e480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e484: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35e488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35e48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e490: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x35e490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x35e494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e498: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x35e498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x35e49c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x35e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x35e4a0: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x35e4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x35e4a4: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x35e4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x35e4a8: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x35e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x35e4ac: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x35e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x35e4b0: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x35e4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x35e4b4: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x35e4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
    // 0x35e4b8: 0x8c8506ac  lw          $a1, 0x6AC($a0)
    ctx->pc = 0x35e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x35e4bc: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x35e4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x35e4c0: 0xac8506ac  sw          $a1, 0x6AC($a0)
    ctx->pc = 0x35e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 5));
    // 0x35e4c4: 0x8c8506b4  lw          $a1, 0x6B4($a0)
    ctx->pc = 0x35e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x35e4c8: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x35e4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x35e4cc: 0xac8506b4  sw          $a1, 0x6B4($a0)
    ctx->pc = 0x35e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 5));
    // 0x35e4d0: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x35e4d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x35e4d4: 0x108300b2  beq         $a0, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x35E4D4u;
    {
        const bool branch_taken_0x35e4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4D4u;
        // 0x35e4d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e4d4) {
            ctx->pc = 0x35E7A0u;
            goto label_35e7a0;
        }
    }
    ctx->pc = 0x35E4DCu;
    // 0x35e4dc: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x35E4DCu;
    {
        const bool branch_taken_0x35e4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35e4dc) {
            ctx->pc = 0x35E6D0u;
            goto label_35e6d0;
        }
    }
    ctx->pc = 0x35E4E4u;
    // 0x35e4e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e4e8: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x35E4E8u;
    {
        const bool branch_taken_0x35e4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E4E8u;
        // 0x35e4ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e4e8) {
            ctx->pc = 0x35E638u;
            goto label_35e638;
        }
    }
    ctx->pc = 0x35E4F0u;
    // 0x35e4f0: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x35E4F0u;
    {
        const bool branch_taken_0x35e4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35e4f0) {
            ctx->pc = 0x35E590u;
            goto label_35e590;
        }
    }
    ctx->pc = 0x35E4F8u;
    // 0x35e4f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E4F8u;
    {
        const bool branch_taken_0x35e4f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e4f8) {
            ctx->pc = 0x35E508u;
            goto label_35e508;
        }
    }
    ctx->pc = 0x35E500u;
    // 0x35e500: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x35E500u;
    {
        const bool branch_taken_0x35e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e500) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E508u;
label_35e508:
    // 0x35e508: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x35e508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x35e50c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35e50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35e510: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x35e510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x35e514: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x35e514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35e518: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x35e518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x35e51c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35e51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e520: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x35e520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x35e524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35e524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e528: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35e528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35e52c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35e52cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35e530: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35e530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35e534: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35E534u;
    {
        const bool branch_taken_0x35e534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e534) {
            ctx->pc = 0x35E54Cu;
            goto label_35e54c;
        }
    }
    ctx->pc = 0x35E53Cu;
    // 0x35e53c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e53cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e540: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x35e540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35e544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35E544u;
    {
        const bool branch_taken_0x35e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E544u;
        // 0x35e548: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e544) {
            ctx->pc = 0x35E568u;
            goto label_35e568;
        }
    }
    ctx->pc = 0x35E54Cu;
label_35e54c:
    // 0x35e54c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35e54cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35e550: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e554: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e558: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x35e558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35e55c: 0x0  nop
    ctx->pc = 0x35e55cu;
    // NOP
    // 0x35e560: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x35e560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x35e564: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x35e564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_35e568:
    // 0x35e568: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35e568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e56c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x35e56cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e570: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e574: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x35e574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x35e578: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x35e578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x35e57c: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x35e57cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x35e580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e584: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x35e584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x35e588: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x35e588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x35e58c: 0x0  nop
    ctx->pc = 0x35e58cu;
    // NOP
label_35e590:
    // 0x35e590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e594: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x35e594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x35e598: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x35E598u;
    SET_GPR_U32(ctx, 31, 0x35E5A0u);
    ctx->pc = 0x35E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E598u;
    // 0x35e59c: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x35E598u, 0x35E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5A0u;
label_35e5a0:
    // 0x35e5a0: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x35E5A0u;
    {
        const bool branch_taken_0x35e5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e5a0) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E5A8u;
    // 0x35e5a8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35e5ac: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x35e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x35e5b0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x35e5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35e5b4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x35e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x35e5b8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x35e5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x35e5bc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x35e5c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35e5c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35e5c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35e5c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e5c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35e5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e5cc: 0x0  nop
    ctx->pc = 0x35e5ccu;
    // NOP
    // 0x35e5d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35e5d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35e5d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35e5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35e5d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35E5D8u;
    {
        const bool branch_taken_0x35e5d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e5d8) {
            ctx->pc = 0x35E5F0u;
            goto label_35e5f0;
        }
    }
    ctx->pc = 0x35E5E0u;
    // 0x35e5e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e5e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e5e4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e5e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35E5E8u;
    {
        const bool branch_taken_0x35e5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E5E8u;
        // 0x35e5ec: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e5e8) {
            ctx->pc = 0x35E60Cu;
            goto label_35e60c;
        }
    }
    ctx->pc = 0x35E5F0u;
label_35e5f0:
    // 0x35e5f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35e5f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35e5f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e5f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e5f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e5fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e5fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e600: 0x0  nop
    ctx->pc = 0x35e600u;
    // NOP
    // 0x35e604: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x35e604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x35e608: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x35e608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_35e60c:
    // 0x35e60c: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x35e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x35e610: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x35e610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e614: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e618: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x35e618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x35e61c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x35e61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35e620: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x35e620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x35e624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e628: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x35e628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x35e62c: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x35E62Cu;
    {
        const bool branch_taken_0x35e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E62Cu;
        // 0x35e630: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e62c) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E634u;
    // 0x35e634: 0x0  nop
    ctx->pc = 0x35e634u;
    // NOP
label_35e638:
    // 0x35e638: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x35e638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x35e63c: 0x106000b6  beqz        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x35E63Cu;
    {
        const bool branch_taken_0x35e63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e63c) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E644u;
    // 0x35e644: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35e648: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x35e648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x35e64c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x35e64cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35e650: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x35e650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x35e654: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x35e654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x35e658: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35e658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x35e65c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35e65cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35e660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35e660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35e664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e668: 0x0  nop
    ctx->pc = 0x35e668u;
    // NOP
    // 0x35e66c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35e66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35e670: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35e670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35e674: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35E674u;
    {
        const bool branch_taken_0x35e674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e674) {
            ctx->pc = 0x35E68Cu;
            goto label_35e68c;
        }
    }
    ctx->pc = 0x35E67Cu;
    // 0x35e67c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e67cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e680: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35E684u;
    {
        const bool branch_taken_0x35e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E684u;
        // 0x35e688: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e684) {
            ctx->pc = 0x35E6A8u;
            goto label_35e6a8;
        }
    }
    ctx->pc = 0x35E68Cu;
label_35e68c:
    // 0x35e68c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35e68cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35e690: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e694: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e698: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e69c: 0x0  nop
    ctx->pc = 0x35e69cu;
    // NOP
    // 0x35e6a0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x35e6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x35e6a4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x35e6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_35e6a8:
    // 0x35e6a8: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x35e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x35e6ac: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x35e6acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e6b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e6b4: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x35e6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x35e6b8: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x35e6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35e6bc: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x35e6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x35e6c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e6c4: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x35e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x35e6c8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x35E6C8u;
    {
        const bool branch_taken_0x35e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6C8u;
        // 0x35e6cc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6c8) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E6D0u;
label_35e6d0:
    // 0x35e6d0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x35e6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x35e6d4: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x35E6D4u;
    {
        const bool branch_taken_0x35e6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6D4u;
        // 0x35e6d8: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6d4) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E6DCu;
    // 0x35e6dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35e6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35e6e0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x35e6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35e6e4: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x35e6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x35e6e8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x35e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x35e6ec: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x35e6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x35e6f0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x35e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x35e6f4: 0x24a58760  addiu       $a1, $a1, -0x78A0
    ctx->pc = 0x35e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
    // 0x35e6f8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x35e6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x35e6fc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x35e700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35e700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e704: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x35e704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x35e708: 0xe61825  or          $v1, $a3, $a2
    ctx->pc = 0x35e708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x35e70c: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x35e70cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x35e710: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35e710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e714: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x35e714u;
    { uint32_t bits = FAST_READ32(0x658760u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35e718: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x35e718u;
    { uint32_t bits = FAST_READ32(0x658764u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35e71c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x35e71cu;
    { uint32_t bits = FAST_READ32(0x658768u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35e720: 0xe60506a0  swc1        $f5, 0x6A0($s0)
    ctx->pc = 0x35e720u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x35e724: 0xe60406a4  swc1        $f4, 0x6A4($s0)
    ctx->pc = 0x35e724u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x35e728: 0xe60206a8  swc1        $f2, 0x6A8($s0)
    ctx->pc = 0x35e728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x35e72c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35e72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35e730: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35e730u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35e734: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35e734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35e738: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35e738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35e73c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35E73Cu;
    {
        const bool branch_taken_0x35e73c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e73c) {
            ctx->pc = 0x35E754u;
            goto label_35e754;
        }
    }
    ctx->pc = 0x35E744u;
    // 0x35e744: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e744u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e748: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e74c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35E74Cu;
    {
        const bool branch_taken_0x35e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E74Cu;
        // 0x35e750: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e74c) {
            ctx->pc = 0x35E770u;
            goto label_35e770;
        }
    }
    ctx->pc = 0x35E754u;
label_35e754:
    // 0x35e754: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35e754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35e758: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e75c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e75cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e760: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e764: 0x0  nop
    ctx->pc = 0x35e764u;
    // NOP
    // 0x35e768: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x35e768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x35e76c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x35e76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_35e770:
    // 0x35e770: 0x24040079  addiu       $a0, $zero, 0x79
    ctx->pc = 0x35e770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x35e774: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x35e774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e778: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e77c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x35e77cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x35e780: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x35e780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35e784: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x35e784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x35e788: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x35e788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x35e78c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35e790: 0xa600082c  sh          $zero, 0x82C($s0)
    ctx->pc = 0x35e790u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x35e794: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x35E794u;
    {
        const bool branch_taken_0x35e794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E794u;
        // 0x35e798: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e794) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E79Cu;
    // 0x35e79c: 0x0  nop
    ctx->pc = 0x35e79cu;
    // NOP
label_35e7a0:
    // 0x35e7a0: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x35e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x35e7a4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x35e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35e7a8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x35e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x35e7ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x35e7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35e7b0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x35e7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x35e7b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35e7b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e7b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x35e7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35e7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e7c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35e7c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35e7c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35e7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35e7c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35e7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35e7cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x35E7CCu;
    {
        const bool branch_taken_0x35e7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e7cc) {
            ctx->pc = 0x35E7E4u;
            goto label_35e7e4;
        }
    }
    ctx->pc = 0x35E7D4u;
    // 0x35e7d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e7d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e7d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e7d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e7dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35E7DCu;
    {
        const bool branch_taken_0x35e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E7DCu;
        // 0x35e7e0: 0x9604082c  lhu         $a0, 0x82C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e7dc) {
            ctx->pc = 0x35E800u;
            goto label_35e800;
        }
    }
    ctx->pc = 0x35E7E4u;
label_35e7e4:
    // 0x35e7e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x35e7e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35e7e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35e7ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e7ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35e7f0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35e7f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35e7f4: 0x0  nop
    ctx->pc = 0x35e7f4u;
    // NOP
    // 0x35e7f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x35e7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x35e7fc: 0x9604082c  lhu         $a0, 0x82C($s0)
    ctx->pc = 0x35e7fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2092)));
label_35e800:
    // 0x35e800: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x35e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35e804: 0x14850040  bne         $a0, $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x35E804u;
    {
        const bool branch_taken_0x35e804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x35E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E804u;
        // 0x35e808: 0xa603082c  sh          $v1, 0x82C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e804) {
            ctx->pc = 0x35E908u;
            goto label_35e908;
        }
    }
    ctx->pc = 0x35E80Cu;
    // 0x35e80c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x35e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x35e810: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x35e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x35e814: 0x78420430  lq          $v0, 0x430($v0)
    ctx->pc = 0x35e814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1072)));
    // 0x35e818: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x35e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x35e81c: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x35e81cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x35e820: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x35e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x35e824: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35e824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35e828: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35E828u;
    SET_GPR_U32(ctx, 31, 0x35E830u);
    ctx->pc = 0x35E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E828u;
    // 0x35e82c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35E828u, 0x35E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E830u;
label_35e830:
    // 0x35e830: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x35e830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35e834: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35e834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35e838: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x35e838u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x35e83c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35e840: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x35e840u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e844: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x35e844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35e848: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x35e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x35e84c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35e84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35e850: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35e850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35e854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35e854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e858: 0x0  nop
    ctx->pc = 0x35e858u;
    // NOP
    // 0x35e85c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x35e85cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35e860: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x35e860u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35e864: 0x0  nop
    ctx->pc = 0x35e864u;
    // NOP
    // 0x35e868: 0x0  nop
    ctx->pc = 0x35e868u;
    // NOP
    // 0x35e86c: 0xc096784  jal         func_259E10
    ctx->pc = 0x35E86Cu;
    SET_GPR_U32(ctx, 31, 0x35E874u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x35E86Cu, 0x35E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E874u;
label_35e874:
    // 0x35e874: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x35e874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x35e878: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x35e878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x35e87c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x35e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x35e880: 0x3445000d  ori         $a1, $v0, 0xD
    ctx->pc = 0x35e880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x35e884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35e884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e888: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x35e888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35e88c: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x35E88Cu;
    SET_GPR_U32(ctx, 31, 0x35E894u);
    ctx->pc = 0x35E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E88Cu;
    // 0x35e890: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x35E88Cu, 0x35E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E894u;
label_35e894:
    // 0x35e894: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35e894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e898: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35e898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e89c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35e89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35e8a0: 0xc0a9ae4  jal         func_2A6B90
    ctx->pc = 0x35E8A0u;
    SET_GPR_U32(ctx, 31, 0x35E8A8u);
    ctx->pc = 0x35E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8A0u;
    // 0x35e8a4: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B90u, 0x35E8A0u, 0x35E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8A8u;
label_35e8a8:
    // 0x35e8a8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x35E8A8u;
    SET_GPR_U32(ctx, 31, 0x35E8B0u);
    ctx->pc = 0x35E8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8A8u;
    // 0x35e8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x35E8A8u, 0x35E8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8B0u;
label_35e8b0:
    // 0x35e8b0: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x35e8b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x35e8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8b8: 0xc0a90ac  jal         func_2A42B0
    ctx->pc = 0x35E8B8u;
    SET_GPR_U32(ctx, 31, 0x35E8C0u);
    ctx->pc = 0x35E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8B8u;
    // 0x35e8bc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A42B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A42B0u, 0x35E8B8u, 0x35E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8C0u;
label_35e8c0:
    // 0x35e8c0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x35e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x35e8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35e8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e8c8: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x35e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x35e8cc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x35e8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35e8d0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x35e8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35e8d4: 0xc052214  jal         func_148850
    ctx->pc = 0x35E8D4u;
    SET_GPR_U32(ctx, 31, 0x35E8DCu);
    ctx->pc = 0x35E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8D4u;
    // 0x35e8d8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x35E8D4u, 0x35E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8DCu;
label_35e8dc:
    // 0x35e8dc: 0xc0b2d94  jal         func_2CB650
    ctx->pc = 0x35E8DCu;
    SET_GPR_U32(ctx, 31, 0x35E8E4u);
    ctx->pc = 0x35E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8DCu;
    // 0x35e8e0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x35E8DCu, 0x35E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E8E4u;
label_35e8e4:
    // 0x35e8e4: 0x8e0508c8  lw          $a1, 0x8C8($s0)
    ctx->pc = 0x35e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2248)));
    // 0x35e8e8: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E8E8u;
    {
        const bool branch_taken_0x35e8e8 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x35e8e8) {
            ctx->pc = 0x35E908u;
            goto label_35e908;
        }
    }
    ctx->pc = 0x35E8F0u;
    // 0x35e8f0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x35e8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35e8f4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x35e8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x35e8f8: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x35E8F8u;
    SET_GPR_U32(ctx, 31, 0x35E900u);
    ctx->pc = 0x35E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E8F8u;
    // 0x35e8fc: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x35E8F8u, 0x35E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E900u;
label_35e900:
    // 0x35e900: 0xae0008c8  sw          $zero, 0x8C8($s0)
    ctx->pc = 0x35e900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2248), GPR_U32(ctx, 0));
    // 0x35e904: 0x0  nop
    ctx->pc = 0x35e904u;
    // NOP
label_35e908:
    // 0x35e908: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x35e908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x35e90c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35E90Cu;
    {
        const bool branch_taken_0x35e90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E90Cu;
        // 0x35e910: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e90c) {
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E914u;
    // 0x35e914: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x35e914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_35e918:
    // 0x35e918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e920: 0x3e00008  jr          $ra
    ctx->pc = 0x35E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E920u;
        // 0x35e924: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E928u;
}
