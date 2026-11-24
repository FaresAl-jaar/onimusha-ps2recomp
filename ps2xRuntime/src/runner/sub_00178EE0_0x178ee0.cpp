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

// Function: sub_00178EE0
// Address: 0x178ee0 - 0x179150
void sub_00178EE0_0x178ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178EE0_0x178ee0");
#endif

    switch (ctx->pc) {
        case 0x179010u: goto label_179010;
        case 0x17901cu: goto label_17901c;
        default: break;
    }

    ctx->pc = 0x178ee0u;

    // 0x178ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178ee4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x178ee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178eec: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x178eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x178ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178ef4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x178ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x178ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f00: 0xfc832180  sd          $v1, 0x2180($a0)
    ctx->pc = 0x178f00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8576), GPR_U64(ctx, 3));
    // 0x178f04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x178f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178f08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x178f0c: 0xac802188  sw          $zero, 0x2188($a0)
    ctx->pc = 0x178f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8584), GPR_U32(ctx, 0));
    // 0x178f10: 0x3402800f  ori         $v0, $zero, 0x800F
    ctx->pc = 0x178f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32783);
    // 0x178f14: 0xac802194  sw          $zero, 0x2194($a0)
    ctx->pc = 0x178f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8596), GPR_U32(ctx, 0));
    // 0x178f18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178f1c: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x178f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x178f20: 0xfc822190  sd          $v0, 0x2190($a0)
    ctx->pc = 0x178f20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8592), GPR_U64(ctx, 2));
    // 0x178f24: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x178f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x178f28: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x178f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x178f2c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x178f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x178f30: 0xfc822198  sd          $v0, 0x2198($a0)
    ctx->pc = 0x178f30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8600), GPR_U64(ctx, 2));
    // 0x178f34: 0x24080061  addiu       $t0, $zero, 0x61
    ctx->pc = 0x178f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x178f38: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x178f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x178f3c: 0x26302180  addiu       $s0, $s1, 0x2180
    ctx->pc = 0x178f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8576));
    // 0x178f40: 0xfc8221a8  sd          $v0, 0x21A8($a0)
    ctx->pc = 0x178f40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8616), GPR_U64(ctx, 2));
    // 0x178f44: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x178f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x178f48: 0xfc8021a0  sd          $zero, 0x21A0($a0)
    ctx->pc = 0x178f48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8608), GPR_U64(ctx, 0));
    // 0x178f4c: 0xfc8221b8  sd          $v0, 0x21B8($a0)
    ctx->pc = 0x178f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8632), GPR_U64(ctx, 2));
    // 0x178f50: 0xfc8721b0  sd          $a3, 0x21B0($a0)
    ctx->pc = 0x178f50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8624), GPR_U64(ctx, 7));
    // 0x178f54: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x178f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x178f58: 0xfc8321c8  sd          $v1, 0x21C8($a0)
    ctx->pc = 0x178f58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8648), GPR_U64(ctx, 3));
    // 0x178f5c: 0xfc8721c0  sd          $a3, 0x21C0($a0)
    ctx->pc = 0x178f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8640), GPR_U64(ctx, 7));
    // 0x178f60: 0xfc8221d8  sd          $v0, 0x21D8($a0)
    ctx->pc = 0x178f60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8664), GPR_U64(ctx, 2));
    // 0x178f64: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x178f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x178f68: 0xfc8721d0  sd          $a3, 0x21D0($a0)
    ctx->pc = 0x178f68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8656), GPR_U64(ctx, 7));
    // 0x178f6c: 0xfc8621e8  sd          $a2, 0x21E8($a0)
    ctx->pc = 0x178f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8680), GPR_U64(ctx, 6));
    // 0x178f70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x178f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x178f74: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x178f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x178f78: 0xfc8021e0  sd          $zero, 0x21E0($a0)
    ctx->pc = 0x178f78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8672), GPR_U64(ctx, 0));
    // 0x178f7c: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x178f7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178f80: 0xfc8521f8  sd          $a1, 0x21F8($a0)
    ctx->pc = 0x178f80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8696), GPR_U64(ctx, 5));
    // 0x178f84: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x178f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x178f88: 0xfc8921f0  sd          $t1, 0x21F0($a0)
    ctx->pc = 0x178f88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8688), GPR_U64(ctx, 9));
    // 0x178f8c: 0xfc822208  sd          $v0, 0x2208($a0)
    ctx->pc = 0x178f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8712), GPR_U64(ctx, 2));
    // 0x178f90: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x178f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x178f94: 0xfc802200  sd          $zero, 0x2200($a0)
    ctx->pc = 0x178f94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8704), GPR_U64(ctx, 0));
    // 0x178f98: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x178f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x178f9c: 0xfc852218  sd          $a1, 0x2218($a0)
    ctx->pc = 0x178f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8728), GPR_U64(ctx, 5));
    // 0x178fa0: 0x344317fd  ori         $v1, $v0, 0x17FD
    ctx->pc = 0x178fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x178fa4: 0x3445020b  ori         $a1, $v0, 0x20B
    ctx->pc = 0x178fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    // 0x178fa8: 0xfc832210  sd          $v1, 0x2210($a0)
    ctx->pc = 0x178fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8720), GPR_U64(ctx, 3));
    // 0x178fac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x178facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x178fb0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x178fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x178fb4: 0xfc822228  sd          $v0, 0x2228($a0)
    ctx->pc = 0x178fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8744), GPR_U64(ctx, 2));
    // 0x178fb8: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x178fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x178fbc: 0xfc882220  sd          $t0, 0x2220($a0)
    ctx->pc = 0x178fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8736), GPR_U64(ctx, 8));
    // 0x178fc0: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x178fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x178fc4: 0xfc822238  sd          $v0, 0x2238($a0)
    ctx->pc = 0x178fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8760), GPR_U64(ctx, 2));
    // 0x178fc8: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x178fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x178fcc: 0x344700c0  ori         $a3, $v0, 0xC0
    ctx->pc = 0x178fccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x178fd0: 0xfc872230  sd          $a3, 0x2230($a0)
    ctx->pc = 0x178fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8752), GPR_U64(ctx, 7));
    // 0x178fd4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x178fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x178fd8: 0xfc832248  sd          $v1, 0x2248($a0)
    ctx->pc = 0x178fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8776), GPR_U64(ctx, 3));
    // 0x178fdc: 0xfc892240  sd          $t1, 0x2240($a0)
    ctx->pc = 0x178fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8768), GPR_U64(ctx, 9));
    // 0x178fe0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x178fe4: 0xfc822258  sd          $v0, 0x2258($a0)
    ctx->pc = 0x178fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8792), GPR_U64(ctx, 2));
    // 0x178fe8: 0xfc802250  sd          $zero, 0x2250($a0)
    ctx->pc = 0x178fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8784), GPR_U64(ctx, 0));
    // 0x178fec: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x178fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x178ff0: 0xfc862268  sd          $a2, 0x2268($a0)
    ctx->pc = 0x178ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8808), GPR_U64(ctx, 6));
    // 0x178ff4: 0xfc852260  sd          $a1, 0x2260($a0)
    ctx->pc = 0x178ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8800), GPR_U64(ctx, 5));
    // 0x178ff8: 0xfc832278  sd          $v1, 0x2278($a0)
    ctx->pc = 0x178ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8824), GPR_U64(ctx, 3));
    // 0x178ffc: 0xfc882270  sd          $t0, 0x2270($a0)
    ctx->pc = 0x178ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8816), GPR_U64(ctx, 8));
    // 0x179000: 0xfc822288  sd          $v0, 0x2288($a0)
    ctx->pc = 0x179000u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8840), GPR_U64(ctx, 2));
    // 0x179004: 0xfc872280  sd          $a3, 0x2280($a0)
    ctx->pc = 0x179004u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8832), GPR_U64(ctx, 7));
    // 0x179008: 0xc043898  jal         func_10E260
    ctx->pc = 0x179008u;
    SET_GPR_U32(ctx, 31, 0x179010u);
    ctx->pc = 0x17900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179008u;
    // 0x17900c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x179008u, 0x179010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179010u;
label_179010:
    // 0x179010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179014: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x179014u;
    SET_GPR_U32(ctx, 31, 0x17901Cu);
    ctx->pc = 0x179018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179014u;
    // 0x179018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x179014u, 0x17901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17901Cu;
label_17901c:
    // 0x17901c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x17901cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x179020: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x179020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x179024: 0xac20a020  sw          $zero, -0x5FE0($at)
    ctx->pc = 0x179024u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 0)); // MMIO: 0x1000a020
    // 0x179028: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x179028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x17902c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x17902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x179030: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x179030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x179034: 0xac30a030  sw          $s0, -0x5FD0($at)
    ctx->pc = 0x179034u;
    runtime->Store32(rdram, ctx, 0x1000A030u, GPR_U32(ctx, 16)); // MMIO: 0x1000a030
    // 0x179038: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x179038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x17903c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x17903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x179040: 0x24070061  addiu       $a3, $zero, 0x61
    ctx->pc = 0x179040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x179044: 0xac24a000  sw          $a0, -0x6000($at)
    ctx->pc = 0x179044u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4)); // MMIO: 0x1000a000
    // 0x179048: 0xfe232290  sd          $v1, 0x2290($s1)
    ctx->pc = 0x179048u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8848), GPR_U64(ctx, 3));
    // 0x17904c: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x17904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x179050: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x179050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x179054: 0xae202298  sw          $zero, 0x2298($s1)
    ctx->pc = 0x179054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8856), GPR_U32(ctx, 0));
    // 0x179058: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x179058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17905c: 0xae2022a4  sw          $zero, 0x22A4($s1)
    ctx->pc = 0x17905cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8868), GPR_U32(ctx, 0));
    // 0x179060: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x179060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x179064: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x179064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x179068: 0xfe2422a0  sd          $a0, 0x22A0($s1)
    ctx->pc = 0x179068u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8864), GPR_U64(ctx, 4));
    // 0x17906c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x17906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179070: 0xfe2322a8  sd          $v1, 0x22A8($s1)
    ctx->pc = 0x179070u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8872), GPR_U64(ctx, 3));
    // 0x179074: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x179074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x179078: 0xfe2422b8  sd          $a0, 0x22B8($s1)
    ctx->pc = 0x179078u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8888), GPR_U64(ctx, 4));
    // 0x17907c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x17907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x179080: 0xfe2322c8  sd          $v1, 0x22C8($s1)
    ctx->pc = 0x179080u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8904), GPR_U64(ctx, 3));
    // 0x179084: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x179084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x179088: 0xfe2422d8  sd          $a0, 0x22D8($s1)
    ctx->pc = 0x179088u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8920), GPR_U64(ctx, 4));
    // 0x17908c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x17908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x179090: 0xfe2322e8  sd          $v1, 0x22E8($s1)
    ctx->pc = 0x179090u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8936), GPR_U64(ctx, 3));
    // 0x179094: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x179094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x179098: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x179098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x17909c: 0xfe2422f8  sd          $a0, 0x22F8($s1)
    ctx->pc = 0x17909cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8952), GPR_U64(ctx, 4));
    // 0x1790a0: 0x346417fd  ori         $a0, $v1, 0x17FD
    ctx->pc = 0x1790a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6141);
    // 0x1790a4: 0xfe2422f0  sd          $a0, 0x22F0($s1)
    ctx->pc = 0x1790a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8944), GPR_U64(ctx, 4));
    // 0x1790a8: 0x3464020b  ori         $a0, $v1, 0x20B
    ctx->pc = 0x1790a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)523);
    // 0x1790ac: 0xfe252308  sd          $a1, 0x2308($s1)
    ctx->pc = 0x1790acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8968), GPR_U64(ctx, 5));
    // 0x1790b0: 0xfe242300  sd          $a0, 0x2300($s1)
    ctx->pc = 0x1790b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8960), GPR_U64(ctx, 4));
    // 0x1790b4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1790b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1790b8: 0xfe232318  sd          $v1, 0x2318($s1)
    ctx->pc = 0x1790b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8984), GPR_U64(ctx, 3));
    // 0x1790bc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1790bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1790c0: 0xfe272310  sd          $a3, 0x2310($s1)
    ctx->pc = 0x1790c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8976), GPR_U64(ctx, 7));
    // 0x1790c4: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x1790c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x1790c8: 0xfe242328  sd          $a0, 0x2328($s1)
    ctx->pc = 0x1790c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9000), GPR_U64(ctx, 4));
    // 0x1790cc: 0x346600c0  ori         $a2, $v1, 0xC0
    ctx->pc = 0x1790ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x1790d0: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1790d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1790d4: 0xfe272320  sd          $a3, 0x2320($s1)
    ctx->pc = 0x1790d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8992), GPR_U64(ctx, 7));
    // 0x1790d8: 0xfe252338  sd          $a1, 0x2338($s1)
    ctx->pc = 0x1790d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9016), GPR_U64(ctx, 5));
    // 0x1790dc: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x1790dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1790e0: 0xfe262330  sd          $a2, 0x2330($s1)
    ctx->pc = 0x1790e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9008), GPR_U64(ctx, 6));
    // 0x1790e4: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1790e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1790e8: 0xfe242348  sd          $a0, 0x2348($s1)
    ctx->pc = 0x1790e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9032), GPR_U64(ctx, 4));
    // 0x1790ec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1790ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1790f0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1790f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1790f4: 0xfe262340  sd          $a2, 0x2340($s1)
    ctx->pc = 0x1790f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9024), GPR_U64(ctx, 6));
    // 0x1790f8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1790f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1790fc: 0xfe252358  sd          $a1, 0x2358($s1)
    ctx->pc = 0x1790fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9048), GPR_U64(ctx, 5));
    // 0x179100: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x179100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x179104: 0xfe242350  sd          $a0, 0x2350($s1)
    ctx->pc = 0x179104u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9040), GPR_U64(ctx, 4));
    // 0x179108: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x179108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x17910c: 0xfe232368  sd          $v1, 0x2368($s1)
    ctx->pc = 0x17910cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9064), GPR_U64(ctx, 3));
    // 0x179110: 0xfe242360  sd          $a0, 0x2360($s1)
    ctx->pc = 0x179110u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9056), GPR_U64(ctx, 4));
    // 0x179114: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x179114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x179118: 0xfe232378  sd          $v1, 0x2378($s1)
    ctx->pc = 0x179118u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9080), GPR_U64(ctx, 3));
    // 0x17911c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x17911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x179120: 0xfe202370  sd          $zero, 0x2370($s1)
    ctx->pc = 0x179120u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9072), GPR_U64(ctx, 0));
    // 0x179124: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x179124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179128: 0xfe242388  sd          $a0, 0x2388($s1)
    ctx->pc = 0x179128u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9096), GPR_U64(ctx, 4));
    // 0x17912c: 0xfe202380  sd          $zero, 0x2380($s1)
    ctx->pc = 0x17912cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 9088), GPR_U64(ctx, 0));
    // 0x179130: 0xfc230020  sd          $v1, 0x20($at)
    ctx->pc = 0x179130u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 32), GPR_U64(ctx, 3));
    // 0x179134: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x179134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x179138: 0xfc2000e0  sd          $zero, 0xE0($at)
    ctx->pc = 0x179138u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 0));
    // 0x17913c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179148: 0x3e00008  jr          $ra
    ctx->pc = 0x179148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179148u;
        // 0x17914c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179150u;
}
